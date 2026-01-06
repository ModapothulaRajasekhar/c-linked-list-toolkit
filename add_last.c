#include<stdio.h>
#include"list_operations.h"

void add_last(int data)
{
    struct node * new_node = create_node(data);
    if(head == NULL)
    {
        head= new_node;
    }
    struct node * temp = head;
    
    while(temp != NULL && temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}