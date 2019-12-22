 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 void swap(int *u,int *v);
 int x=15,y=20;
 printf("x=%d, y=%d\n",x,y);
 swap(&x,&y);/*passing addresses of x and y*/
 printf("\n after interchanging x=%d,y=%d\n",x,y);

 }
 void swap(int *u, int *v)
 {
 int temp;
 temp=*u;
 *u=*v;
 *v=temp;
 return ;
 getch();
 }