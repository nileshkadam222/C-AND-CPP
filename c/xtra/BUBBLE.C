#include<stdio.h>
#include<conio.h>
void bubblesort(int[],int);
void main()
{
 int i,values[5];
 clrscr();
 for(i=0;i<5;i++)
 {
  printf("enter a value:");
  scanf("%d",&values[i]);
 }
 bubblesort(values,5);
 getch();
}
void bubblesort(int array[],int size)
{
 int temp,i,j;
 for(i=0;i<size;i++)
 {
  for(j=0;j<size;j++)
  {
   if(array[i]<array[j])
   {
	temp=array[i];
	array[i]=array[j];
	array[j]=temp;
   }
  }
 }
 printf("\nafter sorting:");
 for(i=0;i<5;i++)
 {
  printf("\nthe values is %d",array[i]);
  getch();
 }
}



















































