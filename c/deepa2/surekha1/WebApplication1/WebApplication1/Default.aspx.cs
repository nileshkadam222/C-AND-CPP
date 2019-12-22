using System;
using System.Collections;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Web;
using System.Web.Security;
using System.Web.UI;
using System.Web.UI.HtmlControls;
using System.Web.UI.WebControls;
using System.Web.UI.WebControls.WebParts;
using System.Xml.Linq;

namespace WebApplication1
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            HttpBrowserCapabilities bc = Request.Browser;
            Label1.Text = "Ip address=" + Request.UserHostAddress;
            Label2.Text = "browser name =" + bc.Browser;

            Label3.Text = "browser version=" + bc.Version;
        }
    }
}
