Public Class Form1

    Private Sub Timer1_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Timer1.Tick
        Static i As Integer = 1
        If (i = 1) Then
            PictureBox1.Visible = True
            PictureBox2.Visible = False
            i = i + 1
        Else
            PictureBox1.Visible = False
            PictureBox2.Visible = True
            i = 1
        End If
    End Sub
End Class
