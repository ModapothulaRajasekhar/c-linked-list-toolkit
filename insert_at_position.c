#include<stdio.h>
#include<stdlib.h>
#include"list_operations.h"

void insert_at_position(int pos, int data)
{
	struct node * new_node = create_node(data);

	if(pos <=0)
	{
		printf("Position is Invalid\n");
		return;
	}

	if(pos==1)
	{
		new_node->next = head;
		head = new_node;
		return;
	}

	struct node * temp = head;

	for(int i=0;i<pos-1 && temp!=NULL;i++)
	{
		temp = temp->next;
	}

	if(temp == NULL)
	{
		printf("position is outof range\n");
		free(new_node);
		return;
	}

	new_node->next = temp->next;
	temp->next = new_node;

}


