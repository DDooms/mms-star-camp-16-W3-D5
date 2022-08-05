#include "dll.h"
int main() {
    // Write more tests for dll

    create_example_dll();

    print_dll(test_DLL);

    push_back(&test_DLL, (Data){405, 23.3});

    print_dll(test_DLL);
    return 0;
}