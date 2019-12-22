  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  char ch;
  float a, b, c, result;
  printf("enter two nos.");
  scanf("%d%d",&a, &b);
  printf("enter the operator (+,-,*,/)");
  scanf("%d",&c);
  printf("\n");
  if(ch=='+')
  {
	result =a+b;
	printf("the result is %d\n",result);
  }
  else
  if(ch=='-')
  result =a-b;
  else
  if(ch=='*')
  result =a*b;
  else
  if(ch=='/')
  result =a/b;
  else
  printf("wrong operator");

 // printf("the result is %d",result);
  getch();
  }

