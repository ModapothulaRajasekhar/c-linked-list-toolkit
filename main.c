#include<stdio.h>
#include<stdlib.h>
#include"list_operations.h"


struct node *create_node(int data)
{
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if(new_node == NULL)
    {
        printf("Linked list creation failed\n");
        exit(1);
    }
    new_node ->data = data;
    new_node ->next = NULL;
    return new_node;
}
struct node * head = NULL;
int main()
{
    head = create_node(10);
    head -> next = create_node(20);
    head->next->next = create_node(30);
    add_first(5);
    add_last(40);
    add_first(2);
    add_last(78);
    printf("Original Linked list is:\n");
    traverse_list();
    printf("after delete_by_value operation\n");
    delete_by_value(20);
    traverse_list();
    printf("after delete_by_position\n");
    delete_by_position(3);
    traverse_list();
    printf("Finding Middle node of list\n");
    find_middle();
    if(detect_loop())
    {
        printf("Loop is detected\n");
    }else
    {
        printf("Loop is not detected\n");
    }
    printf("Reversed Linked list is:\n");
    reverse_list();
    traverse_list();
    printf("Insert node after middle\n");
    insert_after_middle(25);
    traverse_list();
    printf("list after free\n");
    free_list();
    traverse_list();
    return 0;
}
