Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim ans As Double
        If (TextBox2.Text = "+") Then
            ans = CDbl(TextBox1.Text) + CDbl(TextBox3.Text)

        ElseIf (TextBox2.Text = "-") Then
            ans = CDbl(TextBox1.Text) - CDbl(TextBox3.Text)
        ElseIf (TextBox2.Text = "*") Then
            ans = CDbl(TextBox1.Text) * CDbl(TextBox3.Text)
        ElseIf (TextBox2.Text = "/") Then
            ans = CDbl(TextBox1.Text) / CDbl(TextBox3.Text)
        End If
        MessageBox.Show("The answer is " & ans)
    End Sub
End Class
