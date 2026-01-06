#include<stdio.h>
#include"list_operations.h"
#include<stdlib.h>

void delete_by_value(int key)
{
    struct node * temp = head;
    struct node * prev = NULL;
    
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    
    if(head->data == key)
    {
        head= head->next;
        free(temp);
        return;
    }
    
    while(temp!= NULL&& temp->data !=key)
    {
        prev = temp;
        temp =temp->next;
    }
    
    if(temp == NULL)
    {
        printf("key is not found in the list\n");
        return;
    }
    
    prev->next = temp->next;
    free(temp);
}