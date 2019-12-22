 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 int i,j,num[50],temp;
// printf("enter the value of n");
// scanf("%d",&n);
 for(i=0;i<3;i++)
 {
 printf("enter the  elements\n");
 scanf("%d",&num[i]);
 }
 for(i=0;i<3-1;i++)
 {
 for(j=0;j<3-1;j++)
 {
 if(num[j]>num[j+1])
 {
 temp=num[j];
 num[j]=num[j+1];
 num[j+1]=temp;
 }
 }
 }
 for(i=0;i<3;i++)
 {
 printf("enter the %d elements\n",num[i]);
 }
 getch();
 }