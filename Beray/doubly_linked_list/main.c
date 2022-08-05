#include "dll.h"


Data test_data[5];
Node test_nodes[5];
DLL test_DLL;

void create_example_dll()
{
    test_data[0] = (Data){100, 12.3};
    test_data[1] = (Data){126, 12.3};
    test_data[2] = (Data){305, 12.3};
    test_data[3] = (Data){23, 12.3};
    test_data[4] = (Data){55, 12.3};
    test_nodes[0] = (Node){test_data[0], NULL, test_nodes + 1};
    test_nodes[1] = (Node){test_data[1], test_nodes, test_nodes + 2};
    test_nodes[2] = (Node){test_data[2], test_nodes + 1, test_nodes + 3};
    test_nodes[3] = (Node){test_data[3], test_nodes + 2, test_nodes + 4};
    test_nodes[4] = (Node){test_data[4], test_nodes + 3, NULL};
    test_DLL.head = test_nodes;
    test_DLL.tail = test_nodes + 4;
}

int main() {
    // Write more tests for dll

    test_DLL.head = NULL;
    test_DLL.tail = NULL;



    push_back(&test_DLL, (Data){405, 23.3});
    push_back(&test_DLL, (Data){405, 23.3});
    push_back(&test_DLL, (Data){405, 23.3});
    push_back(&test_DLL, (Data){405, 23.3});
    push_back(&test_DLL, (Data){405, 23.3});
    push_back(&test_DLL, (Data){405, 23.3});
    print_dll(test_DLL);

    

    print_dll(test_DLL);
    return 0;
}