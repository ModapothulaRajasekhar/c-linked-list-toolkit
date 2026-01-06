#include<stdio.h>
#include<stdlib.h>
#include"list_operations.h"

void free_list()
{
    struct node * temp = head;
    struct node * next = NULL;
    while(temp != NULL)
    {
        next = temp->next;
        free(temp);
        temp = next;
    }
    head = NULL;
}