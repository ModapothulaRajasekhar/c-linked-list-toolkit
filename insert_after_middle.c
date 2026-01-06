#include<stdio.h>
#include<stdlib.h>
#include"list_operations.h"

void insert_after_middle(int data)
{
	struct node * slow = head;
	struct node * fast = head;

	if(head == NULL)
	{
	   head= create_node(data);
	   return;
	}

	while(fast->next!= NULL && fast->next->next !=NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	struct node * new_node = create_node(data);
	new_node->next = slow->next;
	slow->next = new_node;
}

