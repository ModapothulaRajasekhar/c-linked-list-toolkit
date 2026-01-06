#include<stdio.h>
#include"list_operations.h"

void traverse_list()
{
    struct node * temp = head;
    while(temp!= NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}