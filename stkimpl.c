#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node*next;
};
struct Node*top =NULL;
void push(int value)
{
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
if(newNode==NULL)

{
printf("stack overflow unable to allocate memory");
return;
}
newNode->data=value;
newNode->next=top;
top=newNode;
printf("%d pushed to stack\n",value);
}
void pop()
{
if(top==NULL)
{
printf("stack underflow no elements to pop");
return;
}
struct Node*temp=top;
printf("%d popped from stack\n",top->data);
top=top->next;
free(temp);
}
void peek()
{
if(top==NULL)
{
printf("stack is empty\n");
return;
}
printf("Top element is %d\n",top->data);
}
void display()
{
if(top==NULL)
{
printf("Stack is empty\n");
return;
}
struct Node*temp=top;
printf("Stack elements are\n");
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
int main()
{
int choice,value;
while(1)
{
printf("\n Stack using linked list");
printf("1.push\n");

printf("1.push\n");
printf("2.pop\n");
printf("3.peek\n");
printf("4.display\n");
printf("5.exit\n");
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter value to push:");
scanf("%d",&value);
push(value);
break;

case 2:
pop();
break;

case 3:
peek();
break;

case 4:
display();
break;

case 5:
printf("Exiting...\n");
break;
exit(0);
default:
printf("invalid choice ! try again");
}
}
return 0;
}
