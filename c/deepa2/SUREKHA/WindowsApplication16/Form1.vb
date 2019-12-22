Imports System.IO
Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim sr As New StreamReader("C:\vna.txt")
        TextBox1.Text = sr.ReadLine()
        TextBox2.Text = sr.ReadLine()
        TextBox3.Text = sr.ReadLine()

    End Sub
End Class
