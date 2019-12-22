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

namespace usercontrol2
{
    public partial class mycontrol1 : System.Web.UI.UserControl
    {
        protected void Page_Load(object sender, EventArgs e)
        {


        }
        protected void Button_Click(object sender, System.EventArgs e)
        {
            if (TextBox1.Text.ToLower() == "prashant")
            {
                Label2.Text = "ur password is correct:";
            }
            else
            {
                Label2.Text = "ur password is incorrect:";
            }
        }

    }
}