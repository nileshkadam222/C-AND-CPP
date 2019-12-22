//various operation on character using standard library function
# include <conio.h>
# include <stdio.h>
# include <ctype.h>
void main()
{
	char ch;
	int choice;
	clrscr();
		do
		{
			printf("\n\n ****MENU****");
			printf("\n1 : ACCEPT CHARACTER");
			printf("\n2 : CHECK ALPHABET");
			printf("\n3 : CHECK DIGIT");
			printf("\n4 : CHECK UPPERCASE");
			printf("\n5 : CHECK LOWERCASE");
			printf("\n6 : CONVERT TO UPPERCASE");
			printf("\n7 : CONVERT TO LOWERCASE");
			printf("\n8 : EXIT");
			printf("\n \n Enter ur choice");
			fflush(stdin);
			scanf("%d",&choice);

			switch(choice)
			{
				case 1:
					printf("\n Enter the character :\n");
					fflush(stdin);
					//scanf("%c",&ch);
					//printf("ur char is %c\n",ch);
					ch=getchar();
					break;
				case 2:
					if(isalpha(ch))
					printf("%c is an alphabet",ch);
					else
					printf("%c is not an alphabet",ch);
					break;
				case 3:
					if(isdigit(ch))
					printf("%c is a digit",ch);
					else
					printf("%c is not a digit",ch);
					break;
				case 4:
					if(isupper(ch))
					printf("%c is an uppercase alphabet",ch);
					else
					printf("%c is not an uppercase alphabet",ch);
					break;
				case 5:
					if(islower(ch))
					printf("%c is a lowercase alplabet",ch);
					else
					printf("%c is a not lowercase alphabet",ch);
					break;
				case 6:
					ch=toupper(ch);
					printf("The uppercase character is %c",ch);
					break;
				case 7:
					ch=tolower(ch);
					printf("The lowercase character is %c",ch);
				}
			}
		while(choice!=8);
		getch();
}