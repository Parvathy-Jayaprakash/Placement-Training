/*String Palindrome*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct node
{
  char data;
  struct node *next;
  struct node *prev;
}*head,*newnode,*temp,*t1,*t2;
void insert(char ch);
void palindrome();
void main()
{
	char a[20];
	int l,i;
	printf("Enter the string:");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		insert(tolower(a[i]));
	}
	palindrome();
}
void insert(char ch)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ch;
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		temp=newnode;
	}
	else
	{
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
	}
}
void palindrome()
{
	t1=head;
	t2=temp;
	int flag=0;
	while(t1!=t2)
	{
	  if(t1->data!=t2->data)
	  {
		  flag=1;
		  break;
	  }
	  t1=t1->next;
	  t2=t2->prev;
	}
	if(flag==0)
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not palindrome");
	}
}