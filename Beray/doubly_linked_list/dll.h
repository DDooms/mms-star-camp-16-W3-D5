#include <stdlib.h>
#include <stdio.h>

typedef struct Data
{
    unsigned long timestamp;
    float temperature;
} Data;

typedef struct Node
{
    Data data;
    struct Node *prev, *next;
} Node;

typedef struct DLL
{
    Node *head, *tail;
} DLL;



void print_dll(DLL dll);
void push_back(DLL *dll, Data new_data);
void pop_front(DLL *dll);
void pop_back(DLL *dll);
void push_front(DLL *dll, Data new_data);