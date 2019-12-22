Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        If (TextBox1.Text = "dy_patil" And TextBox2.Text = "poly") Then
            Me.Hide()
            Form2.Show()
        Else
            If (TextBox1.Text <> "dy_patil") Then
                MessageBox.Show("u have entered wrong username")
            ElseIf (TextBox2.Text <> "poly") Then
                MessageBox.Show("u have entered wrong password")

            End If
        End If
    End Sub
End Class
