#include <stdio.h>

// Global variable
int globalVar = 100;

void demo()
{
    // Static variable
    static int staticVar = 0;

    // Local variable
    int localVar = 10;

    staticVar++;

    printf("Global Variable = %d\n", globalVar);
    printf("Local Variable = %d\n", localVar);
    printf("Static Variable = %d\n", staticVar);
    printf("\n");
}

int main()
{
    printf("First Function Call:\n");
    demo();

    printf("Second Function Call:\n");
    demo();

    printf("Third Function Call:\n");
    demo();

    return 0;
}
