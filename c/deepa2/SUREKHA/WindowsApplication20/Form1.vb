Public Class Form1

    Private Sub CheckBox2_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles CheckBox2.CheckedChanged

    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        If (CheckBox1.Checked Or CheckBox2.Checked) Then
            MessageBox.Show(Label2.Text)
        ElseIf (CheckBox3.Checked Or CheckBox4.Checked) Then
            MessageBox.Show(Label3.Text)
        ElseIf (CheckBox5.Checked Or CheckBox6.Checked) Then
            MessageBox.Show(Label4.Text)
        End If
    End Sub
End Class
