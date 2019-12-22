Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim a, b, sum As Integer
        sum = 0
        a = TextBox1.Text
        b = TextBox2.Text
        sum = a + b
        MessageBox.Show("sum is " & sum)
    End Sub
End Class
