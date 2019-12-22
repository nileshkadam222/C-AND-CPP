using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace fileio5
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string fname = "g://prashant/test3.txt";
            string textLine = " ";
            if (System.IO.File.Exists(fname) == true) //file check
            {


                System.IO.StreamReader objReader;
                objReader = new System.IO.StreamReader(fname);

                do
                {
                    textLine = textLine + objReader.ReadLine() + "\r\n";
                    //MessageBox.Show("coming up one line:");
                    textBox1.Text = textLine;

                } while (objReader.Peek() != -1); // peek = teal the end of the file 

                textBox1.Text = textLine;
                objReader.Close();
            }
            else
            {

                System.IO.FileAccess objReader1;
                objReader1 = new System.IO.FileAccess();
               MessageBox.Show("file does not exist:");
            }


        }
    }
}
