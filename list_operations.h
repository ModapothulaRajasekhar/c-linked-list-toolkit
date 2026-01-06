#ifndef LIST_OPERATIONS_H
#define LIST_OPERATIONS_H

struct node
{
    int data;
    struct node * next;
};

struct node * create_node(int data);
void traverse_list();
void add_first(int data);
void add_last(int data);
void delete_by_value(int key);
void delete_by_position(int pos);
void find_middle();
int detect_loop();
void reverse_list();
void free_list();
void insert_after_middle(int data);
extern struct node * head;
#endif
