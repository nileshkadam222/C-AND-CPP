Public Class Form1
    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim s, r, t, n As Integer
        s = 0
        r = 0
        t = 0
        n = TextBox1.Text
        t = n
        While (n <> 10)
            r = n Mod 10
            s = (s * 10) + r
            n = n \ 10
        End While
        If (s = t) Then
            MessageBox.Show("The Number is Palindrome Number")
        Else
            MessageBox.Show("The Number is not a Palindrome Number")
        End If
    End Sub
End Class
