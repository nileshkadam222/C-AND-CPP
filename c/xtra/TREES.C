#include<stdio.h>
#include<alloc.h>
#include<conio.h>
#include<stdio.h>
struct tree
{
 int info;
 struct tree * left;
 struct tree * right;
};
struct tree * insert(struct tree *,int);
void inorder(struct tree *);
void postorder(struct tree *);
void preorder(struct tree *);
struct tree * delet(struct tree *,int);
struct tree * search(struct tree*);
int main(void)
{
 struct tree * root;
 int choice,item,item_no;
 root = NULL;
 clrscr();
 /*rear = NULL;*/
 do
{
 do
 {
 printf("\n\t1.Insert in binary tree");
 printf("\n\t2.Delete from binary tree");
 printf("\n\t3.Inoreder traversal of binary tree");
 printf("\n\t4.Postorder travarsal of binary tree");
 printf("\n\t5.Preorder travarsal of binary tree");
 printf("\n\t6.search and replace");
 printf("\n\t7.exit");
 printf("\n\tenter choice:");
 scanf("%d",&choice);
 if(choice<1||choice>7)
 printf("\nInvalid choice try again");
 }while(choice<1||choice>7);
 switch(choice)
 {
  case 1:
  printf("\nenter new element:");
  scanf("%d",&item);
  root=insert(root,item);
  printf("\nroot is %d",root->info);
  printf("\nInorder travarsal of binary tree is:");
  inorder(root);
  break;
  case 2:
  printf("\nenter the element to be deleted:");
  scanf("%d",&item_no);
  inorder(root);
  break;
  case 3:
  printf("\ninorder travarsal of binary tree is:");
  inorder(root);
  break;
  case 4:
  printf("\npostorder travarsal of binary tree is:");
  postorder(root);
  break;
  case 5:
  printf("\npreorder travarsal is binary tree is:");
  preorder(root);
  break;
  case 6:
  printf("\nsearch and replace operation in binary tree");
  root=search(root);
  break;
	 default:
   printf("\nend of program");
   }/*end of switch*/
  }while(choice !=7);
  return(0);
 }
 struct tree * insert(struct tree * root, int x)
 {
  if(! root)
  {
   root=(struct tree*)malloc(sizeof(struct tree));
   root->info=x;
   root->left=NULL;
   root->right=NULL;
   return(root);
  }
  if(root->info>x)
	root->left=insert (root->left,x);
	else
	{
	 if(root->info<x)
	 root->right=insert(root->right,x);
	}
	return (root);
 }
 void inorder(struct tree * root)
 {
  if(root!=NULL)
  {
   inorder(root->left);
   printf("  %d",root->info);
   inorder(root->right);
  }
  return;
 }
 void postorder(struct tree * root)
 {
  if(root!=NULL)
  {
   postorder(root->left);
   postorder(root->right);
   printf(" %d",root->info);
  }
  return;
 }
 void preorder(struct tree * root)
 {
  if(root!=NULL)
  {
   printf(" %d",root->info);
   preorder(root->left);
   preorder(root->right);
  }
  return;
 }
 /* function to delete a node from a binary tree */
 struct tree * delet(struct tree * ptr,int x)
 {
  struct tree * p1, * p2;
  if(!ptr)
  {
   printf("\nnode not found");
   return(ptr);
  }
  else
  {
   if(ptr->info<x)
   {
   ptr->right=delet(ptr->right,x);
   /*return(ptr);*/
  }
  else if(ptr->info>x)
  {
   ptr->left=delet(ptr->left,x);
   return ptr;
  }
  else         /*no.2else*/
  {
   if(ptr->info==x)/*no.2 if */
   {
	if(ptr->left==ptr->right)
	{
	 free(ptr);
	 return(NULL);
	}
	else if(ptr->left==NULL)
	{
	 p1=ptr->right;
	 free(ptr);
	 return p1;
	}
	else if(ptr->right==NULL)
	{
	 p1=ptr->left;
	 free(ptr);
	 return p1;
	}
	else
	{
	 p1=ptr->right;
	 p2=ptr->right;
	 while (p1->left !=NULL)
	   p1 = p1->left;
	 p1->left=ptr->left;
	 free(ptr);
	 return p2;
	}
	   }/*end of no. 2 if*/
	  }/*end of no. 2 else*/
	 /*check which path to search for a given no. */
	}
	 return(ptr);
   }
   /*function to search and replace an element in the binary tree */
   struct tree *search(struct tree * root)
   {
	int no,i,ino;
	struct tree * ptr;
	ptr=root;
	printf("\nenter the element to be searched:");
	scanf("%d",&no);
	fflush(stdin);
	while(ptr)
	{
	 if(no>ptr->info)
	   ptr=ptr->right;
	  else if(no<ptr->info)
		ptr=ptr->left;
	  else
		 break;
	}
	if(ptr)
	{
	 printf("\nelement %d which was searched is found and is = %",no,ptr->info);
	 printf("\ndo you want replace it, press 1 for yes:");
	 scanf("%d",&i);
	 if(i==1)
	 {
	  printf("\nenter new element:");
	  scanf("%d",&ino);
	  ptr->info=ino;
	 }
	 else
	   printf("\n\tit's okay");
	}
	else
	  printf("\nelement %d does not exit in the binary tree",no);
	  return(root);
}