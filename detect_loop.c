#include<stdio.h>
#include"list_operations.h"

int detect_loop( )
{
    struct node * slow = head;
    struct node * fast = head;
    
    if(head == NULL)
    {
        printf("List is empty\n");
        return 0;
    }
    
    while(fast !=NULL && fast->next !=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if(slow == fast)
    {
        return 1;
    }
    return 0;
}