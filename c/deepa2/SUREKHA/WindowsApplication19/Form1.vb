Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim i, n, f As Long
        f = 1
        n = TextBox1.Text
        For i = 1 To n
            f = f * i

        Next
        MessageBox.Show("factorial is" & f)
    End Sub
End Class
