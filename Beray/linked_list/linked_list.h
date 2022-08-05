#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    long data;
    struct Node *next;
} Node;

void print_ll(Node *head);

// Make head pointer to pointer so that
// We can change fields of NODE struct
// We can change value of pointer to first element
void push_back(Node **head, long new_data);

void pop_front(Node **head_pp);

// Add new node at the front of linked list
void push_front(Node **head_pp, long new_data);

void pop_back(Node **head_pp);
void reverse(Node **head_pp);