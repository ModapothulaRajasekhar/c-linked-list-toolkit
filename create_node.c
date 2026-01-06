#include<stdio.h>
#include<stdlib.h>
#include"list_operations.h"

struct node * create_node(int data)
{
	struct node * new_node = (struct node *)malloc(sizeof(struct node));
	if(new_node == NULL)
	{
		printf("Linked list creation failed\n");
		exit(1);
	}

	new_node->data= data;
	new_node->next = NULL;
	
	return new_node;
}

