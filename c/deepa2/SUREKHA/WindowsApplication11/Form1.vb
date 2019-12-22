Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        If (RadioButton1.Checked) Then
            MessageBox.Show(RadioButton1.Text)
            Me.BackColor = Color.DarkOrchid
        ElseIf (RadioButton2.Checked) Then
            MessageBox.Show(RadioButton2.Text)
            Me.BackColor = Color.DarkOliveGreen
        ElseIf (RadioButton3.Checked) Then
            MessageBox.Show(RadioButton3.Text)
            Me.BackColor = Color.MediumVioletRed
        ElseIf (RadioButton4.Checked) Then
            MessageBox.Show(RadioButton4.Text)
            Me.BackColor = Color.MintCream

        End If
    End Sub
End Class
