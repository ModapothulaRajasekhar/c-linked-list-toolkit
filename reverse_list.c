#include<stdio.h>
#include"list_operations.h"

void reverse_list()
{
    struct node * current = head;
    struct node * prev = NULL;
    struct node * next =NULL;
    
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev= current;
        current = next;
    }
    head = prev;
}