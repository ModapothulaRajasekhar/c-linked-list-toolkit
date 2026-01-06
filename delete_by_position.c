#include<stdio.h>
#include"list_operations.h"
#include<stdlib.h>

void delete_by_position(int pos)
{
    struct node * temp = head;
    struct node * prev = NULL;
    int i = 0;
    if(head == NULL)
    {
        printf("list is empty\n");
        return;
    }
    
    if(pos == 0)
    {
        head = head->next;
        free(temp);
        return;
    }
    
    while(temp!= NULL && i< pos)
    {
        prev = temp;
        temp =temp->next;
        i++;    
    }
    
    if(temp == 0)
    {
        printf("Position is outofrange\n");
        return;
    }
    
    prev->next = temp->next;
    free(temp);
}