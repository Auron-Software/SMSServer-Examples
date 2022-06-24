using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace AuSmsWeb
{
  public class ResultCode
  {
    public ResultCode()
    {
      LastError = 0;
      LastErrorDescription = "success";
    }

    public ResultCode(int nLastError, string sDescription)
    {
      LastError = nLastError;
      LastErrorDescription = sDescription;
    }

    public int LastError { get; set; }
    public string LastErrorDescription { get; set; }

  }
}
