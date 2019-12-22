Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim a, b, c As Integer
        a = TextBox1.Text
        b = TextBox2.Text
        If (RadioButton1.Checked) Then
            c = a + b
            MessageBox.Show("The sum is " & c)
        ElseIf (RadioButton2.Checked) Then
            c = a - b
            MessageBox.Show("The substraction is " & c)
        ElseIf (RadioButton3.Checked) Then
            c = a * b
            MessageBox.Show("The product is " & c)
        ElseIf (RadioButton4.Checked) Then
            c = a / b
            MessageBox.Show("The division is " & c)

        End If
    End Sub
End Class
