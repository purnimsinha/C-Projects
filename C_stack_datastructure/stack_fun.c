#include<stdio.h>
#include<stdlib.h>
#include"stack_head.h"

//to add node in the front of link list*********************************************
void push (int val)

{
struct node *new_node = (struct node *) malloc (sizeof (struct node));

new_node->data = val;

new_node->next = NULL;

new_node->next = head;

head = new_node;
}

//to remove node in the front from link list****************************************
void pop ()
{

struct node *temp = head;

head = head->next;

free (temp);

size--;
}

//to find the top value*****************************************************
void top()

{

first = head;

printf("top value = %d\n",first);

}


//to check if the list is empty********************************************
void isempty()
{

if(head == NULL)

{


if(size<=0 || !head)

{

printf("the list is empty\n");
}
}
}


//to dislay the nodes*********************************************************************

void disp ()

{

struct node *temp = head;

printf ("data: ");

while (temp != NULL)

{
printf ("%d ", temp->data);

temp = temp->next;
}

//printf("\n");
}


