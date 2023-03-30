/*Linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
}*head,*newnode;
void addbeg();
void addend();
void addpos();
void delbeg();
void delend();
void delpos();
void display();
void main()
{
  int menu,k;
  do
  {
    printf("Enter 1 for display\n2 for insertion at begining\n3 for insertion at end\n4 for insertion at a specific position\n5 for deletion from begining\n6 for deletion from the end\n7 for deletion from a specific position :");
    scanf("%d",&menu);
    switch(menu)
    {
      case 1:
	            display();
				break;
	  case 2:
	            addbeg();
				break;
	  case 3:
	            addend();
				break;
	  case 4:
	            addpos();
				break;
      case 5:
	            delbeg();
				break;
      case 6:
	            delend();
				break;
	  case 7:
	            delpos();
				break;
   }
   printf("\nEnter 1 to continue and any other no. to stop: ");
   scanf("%d",&k);
  }while(k==1);
}
void addbeg()
{
  int d;
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data:");
  scanf("%d",&d);
  newnode->data=d;
  newnode->next=head;
  head=newnode;
}
void addend()
{
 int d;
 struct node *current;
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("Enter the data:");
 scanf("%d",&d);
 newnode->data=d;
 newnode->next=NULL;
 if(head==NULL)
 {
	 head=newnode;
 }
 else
 {
   current=head;
   while(current->next!=NULL)
   {
     current=current->next;
   }
   current->next=newnode;
   current=newnode;
 }
}
void addpos()
{
 int d,pos;
 struct node *current;
 current=head;
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("Enter position :");
 scanf("%d",&pos);
 printf("Enter the data:");
 scanf("%d",&d);
 newnode->data=d;
 newnode->next=NULL;
  int n=0;
  while(current!=NULL)
  {
	 n++;
	 current=current->next;
  }
 if(pos>n||pos<1) 
 {
	 printf("invalid pos");
 }
 else if(pos==1)
 {
   newnode->data=d;
   newnode->next=head;
   head=newnode;
 }
 else
 {	 
   current=head;
   pos--;
   while(pos!=1)
   {
     current=current->next;
     pos--;
   }
   newnode->next=current->next;
   current->next=newnode;
 }
}
void delbeg()
{
   struct node *temp;
   if(head==NULL)
   {
     printf("The list is empty");
   }
   else
   {
      temp=head;
	  printf("deleted element is %d\n",temp->data);
	  head=temp->next;
	  temp->next=NULL;
	  free(temp);
   }
}
void delend()
{
  struct node *temp,*previous;
  temp=head;
  if(head==NULL)
   {
     printf("The list is empty");
   }
   else if(temp->next==NULL)
   {
	  printf("deleted element is %d\n",temp->data);
	  free(temp);
	  head=NULL;
   }
   else
   {
	  while(temp->next!=NULL)
	  {
	    previous=temp;
	    temp=temp->next;
	  }
	  printf("deleted element is %d\n",temp->data);
	  free(temp);
	  previous->next=NULL;
   }
}
void delpos()
{
   int pos;
   struct node *temp,*previous;
   printf("Enter position :");
   scanf("%d",&pos);
   temp=head;
   int n=0;
   while(temp!=NULL)
   {
      n++;
	  temp=temp->next;
   }
   if(head==NULL)
   {
     printf("The list is empty");
   }
   else if(pos==1)
   {
	  temp=head;
      head=temp->next;
	  printf("deleted element is %d\n",temp->data);
	  free(temp);
   }
   else if(pos>n||pos<1)
   {
	  printf("invalid pos");
   }
   else
   {
		temp=head;
	    while(pos!=1)
	    {
	       previous=temp;
	       temp=temp->next;
		   pos--;
	    }
		printf("deleted element is %d\n",temp->data);
	    previous->next=temp->next;
	    free(temp);
   }
}
void display()
{
   struct node *temp;
   if(head==NULL)
   {
     printf("the list is empty");
   }
   else
   {
      temp=head;
	  while(temp!=NULL)
	  {
	    printf("%d ",temp->data);
		temp=temp->next;
	  }
	}
}