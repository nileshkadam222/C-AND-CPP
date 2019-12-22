Public Class Form3

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click

        Me.Hide()
        Form2.Show()
    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        If (RadioButton1.Checked) Then
            Form4.Show()
        ElseIf (RadioButton2.Checked) Then
            Form5.Show()
        ElseIf (RadioButton3.Checked) Then
            Form6.Show()
        End If
        Me.Hide()
    End Sub
End Class