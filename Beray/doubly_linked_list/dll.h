#include <stdlib.h>

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

Data test_data[5];
Node test_nodes[5];
DLL test_DLL;

void create_example_dll();
void print_dll(DLL dll);
void push_back(DLL *dll, Data new_data);
void pop_front(DLL *dll);
void pop_back(DLL *dll);
void push_front(DLL *dll, Data new_data);