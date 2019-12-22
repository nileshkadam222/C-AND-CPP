Public Class Form2

    Private Sub RadioButton1_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles RadioButton1.CheckedChanged

    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        If (RadioButton1.Checked) Then
            Form3.Show()
        ElseIf (RadioButton2.Checked) Then
            Form4.Show()
        ElseIf (RadioButton3.Checked) Then
            Form5.Show()
        ElseIf (RadioButton4.Checked) Then
            Form6.Show()
        End If
    End Sub
End Class