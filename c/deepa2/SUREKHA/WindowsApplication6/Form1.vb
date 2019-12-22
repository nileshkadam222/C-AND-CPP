Public Class Form1

    Private Sub TextBox2_TextChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles TextBox2.TextChanged
        Dim a, b, sum As Integer
        sum = 0
        a = TextBox1.Text
        b = TextBox2.Text
        sum = a * b
        MessageBox.Show("the multiplication of two number" & sum)


    End Sub
End Class
