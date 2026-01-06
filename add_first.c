#include<stdio.h>
#include"list_operations.h"

void add_first(int data)
{
    struct node * new_node = create_node(data);
    
    new_node ->next = head;
    head = new_node;
}