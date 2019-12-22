Public Class Form1
    Dim inc As Integer
    Dim MaxRows As Integer
    Dim con As New OleDb.OleDbConnection
    Dim dbProvider As String
    Dim dbSource As String
    Dim ds As New DataSet
    Dim da As OleDb.OleDbDataAdapter
    Dim sql As String

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load

        dbProvider = "PROVIDER=Microsoft.ACE.OLEDB.12.0;"
        dbSource = "Data Source = |DataDirectory|\abc.accdb"
        con.ConnectionString = dbProvider & dbSource
        con.Open()

        MsgBox("Database is now open")
        sql = "select * from table1"



        da = New OleDb.OleDbDataAdapter(sql, con)
        da.Fill(ds, "abc")
        
        con.Close()
        MsgBox("Database is now Closed")
        MaxRows = ds.Tables("employee1").Rows.Count
        inc = -1
        MsgBox("the total number of rows are:" & MaxRows)
        TextBox1.Text = ds.Tables("employee1").Rows(0).Item(1)
        TextBox2.Text = ds.Tables("employee1").Rows(0).Item(2)
        TextBox3.Text = ds.Tables("employee1").Rows(0).Item(3)
        TextBox4.Text = ds.Tables("employee1").Rows(0).Item(4)




    End Sub

   

    

    Private Sub Button6_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button6.Click
        Dim cb As New OleDb.OleDbCommandBuilder(da)
        inc = 0

        ds.Tables("employee1").Rows(inc).Item(2) = TextBox2.Text
        ds.Tables("employee1").Rows(inc).Item(3) = TextBox3.Text
        da.Update(ds, "employee1")
        MsgBox("Data updated")

    End Sub

    Private Sub Button5_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button5.Click
        Button8.Enabled = True
        Button5.Enabled = False
        Button6.Enabled = False
        Button7.Enabled = False
        TextBox1.Clear()
        TextBox2.Clear()

        TextBox3.Clear()
        TextBox4.Clear()

    End Sub

    Private Sub Button8_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button8.Click
        Button8.Enabled = False
        Button5.Enabled = True
        Button6.Enabled = True
        Button7.Enabled = True
        inc = 0

        If inc <> -1 Then
            Dim cb As New OleDb.OleDbCommandBuilder(da)
            Dim dsNewRow As DataRow
            dsNewRow = ds.Tables("employee1").NewRow()
            dsNewRow.Item("eno") = TextBox1.Text
            dsNewRow.Item("eName") = TextBox2.Text
            dsNewRow.Item("eadd") = TextBox3.Text
            dsNewRow.Item("esal") = TextBox4.Text
            ds.Tables("employee1").Rows.Add(dsNewRow)

            da.Update(ds, "employee1")
            MsgBox("New Record added to the Database")
            Button8.Enabled = False
            Button5.Enabled = True
            Button7.Enabled = True
            Button6.Enabled = True
        End If



    End Sub

    Private Sub Button7_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button7.Click
        Dim cb As New OleDb.OleDbCommandBuilder(da)
        Dim RECNUM As Integer
        Dim ans As String


        MsgBox("NO OF RECORDS ARE:" & MaxRows)


        RECNUM = InputBox("ENTER THE RECORD NUMBER ")
        MsgBox("record is been shown:")
        TextBox1.Text = ds.Tables("employee1").Rows(RECNUM - 1).Item(1)
        TextBox2.Text = ds.Tables("employee1").Rows(RECNUM - 1).Item(2)
        TextBox3.Text = ds.Tables("employee1").Rows(RECNUM - 1).Item(3)
        TextBox4.Text = ds.Tables("employee1").Rows(RECNUM - 1).Item(4)

        ans = InputBox("do u wish to delete this record:")
        If (ans = "y") Then




            ds.Tables("employee1").Rows(RECNUM - 1).Delete()


            inc = 0
            da.Update(ds, "employee1")
            MsgBox("record deleted:")
        End If




    End Sub

    Private Sub Button1_Click_1(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        TextBox1.Text = ds.Tables("employee1").Rows(0).Item(1)
        TextBox2.Text = ds.Tables("employee1").Rows(0).Item(2)
        TextBox3.Text = ds.Tables("employee1").Rows(0).Item(3)
        TextBox4.Text = ds.Tables("employee1").Rows(0).Item(4)
    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        inc = MaxRows - 1

        TextBox1.Text = ds.Tables("employee1").Rows(inc).Item(1)
        TextBox2.Text = ds.Tables("employee1").Rows(inc).Item(2)
        TextBox3.Text = ds.Tables("employee1").Rows(inc).Item(3)
        TextBox4.Text = ds.Tables("employee1").Rows(inc).Item(4)
    End Sub

    Private Sub Button3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button3.Click
        inc = 0

        While (inc < MaxRows)
            TextBox1.Text = ds.Tables("employee1").Rows(inc).Item(1)
            TextBox2.Text = ds.Tables("employee1").Rows(inc).Item(2)
            TextBox3.Text = ds.Tables("employee1").Rows(inc).Item(3)
            TextBox4.Text = ds.Tables("employee1").Rows(inc).Item(4)
            MsgBox("next record coming:")
            inc = inc + 1
            If (inc = MaxRows) Then
                MsgBox("this is the last record:")
                Exit While



            End If





        End While
    End Sub

    Private Sub Button4_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button4.Click
        inc = MaxRows - 1



        While (inc >= 0)
            TextBox1.Text = ds.Tables("employee1").Rows(inc).Item(1)
            TextBox2.Text = ds.Tables("employee1").Rows(inc).Item(2)
            TextBox3.Text = ds.Tables("employee1").Rows(inc).Item(3)
            TextBox4.Text = ds.Tables("employee1").Rows(inc).Item(4)
            MsgBox("previous  record coming:")
            inc = inc - 1
            If (inc < 0) Then
                MsgBox("this is the first  record:")
                Exit While



            End If
        End While

    End Sub

    Private Sub Button9_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button9.Click
        TextBox1.Clear()
        TextBox2.Clear()

        TextBox3.Clear()
        TextBox4.Clear()

    End Sub
End Class
