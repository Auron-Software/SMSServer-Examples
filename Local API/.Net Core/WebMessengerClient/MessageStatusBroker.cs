using AuSmsWeb.Hubs;
using Microsoft.AspNetCore.SignalR;
using Microsoft.Extensions.Hosting;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;

namespace AuSmsWeb
{
  public class MessageStatusBroker : IHostedService
  {
    private const int SESSION_TIMEOUTMS = 30000;

    private readonly IHubContext<MessageStatusHub> m_oMessageStatusHubContext;

    private AXMMCFGLib.Database  m_oDatabase;
    private AXMMCFGLib.MessageDB m_oMessageDb;

    private Timer m_oTimer;

    public MessageStatusBroker(IHubContext<MessageStatusHub> oMessageStatusHubContext)
    {
      m_oMessageStatusHubContext = oMessageStatusHubContext;

      m_oDatabase = null;
      m_oMessageDb = null;

      m_oTimer = null;
    }

    public string CreateSessionID()
    {
      return Guid.NewGuid().ToString();
    }

    public Task StartAsync(CancellationToken cancellationToken)
    {
      m_oDatabase = new AXMMCFGLib.Database();
      m_oMessageDb = m_oDatabase.GetMessageDB();
      if (m_oDatabase.LastError != 0)
        throw new Exception("Can't open message database");

      m_oMessageDb.StartChangeListening("");
      if (m_oMessageDb.LastError != 0)
        throw new Exception("Could not start change listening");

      m_oTimer = new Timer(OnTimer, null, TimeSpan.Zero, TimeSpan.FromMilliseconds(100));

      return Task.CompletedTask;
    }

    private void OnTimer(object state)
    {
      // get status bits
      bool bHasStatusUpdate = m_oMessageDb.HasStatusUpdate();

      if (bHasStatusUpdate)
        m_oMessageStatusHubContext.Clients.All.SendAsync("MessageStatusNotification");
    }

    public Task StopAsync(CancellationToken cancellationToken)
    { 
      m_oTimer.Change(Timeout.Infinite, 0);

      m_oMessageDb.StopChangeListening();

      return Task.CompletedTask;
    }
  }
}
