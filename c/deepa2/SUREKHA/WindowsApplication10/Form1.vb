Imports System.IO
Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        'Dim sr As New StreamReader("c:\vvnnrss.txt")
        'TextBox1.Text = sr.ReadLine()
        'TextBox2.Text = sr.ReadLine()
        'TextBox3.Text = sr.ReadLine()

        'Dim sw As New StreamWriter("c:\vvnnrss.txt")
        'sw.WriteLine(TextBox1.Text)
        'sw.WriteLine(TextBox2.Text)
        'sw.WriteLine(TextBox3.Text)
        'sw.Close()

        Dim sw As New StreamWriter("c:\vvnnrss.txt")
        sw.WriteLine("veena")
        sw.WriteLine("neeta")
        sw.Close()
    End Sub
End Class
