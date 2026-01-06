#include<stdio.h>
#include"list_operations.h"

void find_middle()
{
    struct node * slow = head;
    struct node * fast = head;
    
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    
    while(fast != NULL && fast ->next !=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    printf("Middle node is:%d\n",slow->data);
   
}