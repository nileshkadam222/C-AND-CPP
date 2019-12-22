Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        'Dim ans As Double
        'If (TextBox2.Text = "+") Then
        '    ans = CDbl(TextBox1.Text) + CDbl(TextBox3.Text)
        'ElseIf (TextBox2.Text = "-") Then
        '    ans = CDbl(TextBox1.Text) - CDbl(TextBox3.Text)
        'ElseIf (TextBox2.Text = "*") Then
        '    ans = CDbl(TextBox1.Text) * CDbl(TextBox3.Text)
        'ElseIf (TextBox2.Text = "/") Then
        '    ans = CDbl(TextBox2.Text) / CDbl(TextBox3.Text)
        'End If
        'MessageBox.Show("The Answer is" & ans)

    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim ans As Double
        If (TextBox2.Text = "+") Then
            ans = CDbl(TextBox1.Text) + CDbl(TextBox3.Text)
        ElseIf (TextBox2.Text = "-") Then
            ans = CDbl(TextBox1.Text) - CDbl(TextBox3.Text)
        ElseIf (TextBox2.Text = "*") Then
            ans = CDbl(TextBox1.Text) * CDbl(TextBox3.Text)
        ElseIf (TextBox2.Text = "/") Then
            ans = CDbl(TextBox2.Text) / CDbl(TextBox3.Text)
        End If
        MessageBox.Show("The Answer is" & ans)

    End Sub
End Class
