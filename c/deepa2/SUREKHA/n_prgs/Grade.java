class Grade
  {
     public static void main(String args[])
    {
       int rollno[ ] = {1,2,3,4,5};
       int marks[ ] = {90,75,60,50,45};
      for(int i=0; i<rollno.length; i++)
      {
         if(marks[i]>79)
         System.out.println(rollno[i] + "Honours");
         else if (marks[i]>59)
        System.out.println (rollno[i] + "First class");
         else if (marks[i]>49)
        System.out.println (rollno[i] + "Second class");
        else
        System.out.println (rollno[i] + "Fail");
}
}
}