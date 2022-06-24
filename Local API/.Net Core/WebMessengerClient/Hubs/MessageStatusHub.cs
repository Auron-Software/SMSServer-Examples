using Microsoft.AspNetCore.SignalR;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace AuSmsWeb.Hubs
{
  public class MessageStatusHub: Hub
  {
    public async Task SendMessage(string message)
    { // this can be called from the client! (Don't call from the server)
      await Clients.All.SendAsync("newMessage", "anonymous", message);
    }
  }
}
