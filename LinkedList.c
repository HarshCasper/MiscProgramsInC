/* This program is an implementation of Linked List in C Programming Language with Insertion and Display Operations performed on them */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void create();
void listcreation();
void insfirst();
void insmiddle();
void inslast();
void display();
struct list
{
int data;
struct list *next;
}*head=NULL,*temp=NULL,*node=NULL;
void main()
{
int ch;
clrscr();
do
{
printf("1.List Creation\n2.Insert First\n3.Insert Middle\n4.Insert Last\n5.Display\n6.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
listcreation();
break;
case 2:
insfirst();
break;
case 3:
insmiddle();
break;
case 4:
inslast();
break;
case 5:
display();
break;
case 6:
exit(0);
}
}while(ch<=6);
getch();
}
void create()
{
node=(struct list*)malloc(sizeof(struct list));
printf("Enter data for the node: \n");
scanf("%d",&node->data);
node->next=NULL;
}
void listcreation()
{
clrscr();
create();
if(head==NULL)
{
head=node;
temp=node;
}
else
{
temp->next=node;
temp=temp->next;
}
}
void insfirst()
{
clrscr();
create();
if(head==NULL)
{
head=node;
temp=node;
}
else
{
node->next=head;
head=node;
}
}
void insmiddle()
{
int pos,i;
clrscr();
create();
if(head==NULL)
{
head=node;
temp=node;
}
else
{
printf("Enter the position to insert \n");
scanf("%d",&pos);
temp=head;
for(i=0;i<pos-1;i++)
{
temp=temp->next;
}
node->next=temp->next;
temp->next=node;
}
}
void inslast()
{
clrscr();
create();
if(head==NULL)
{
head=node;
temp=node;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=node;
temp=node;
}
}
void display()
{
if(head==NULL)
{
printf("List is empty \n");
}
else
{
printf("The Linked List is \n");
printf("%d ->",head);
temp=head;
while(temp!=NULL)
{
printf("%d | %d ->",temp->data, temp->next);
temp=temp->next;
}
}
printf("\n");
}
