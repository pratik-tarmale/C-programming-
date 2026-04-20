#include <stdio.h>

// Function without pointers (call by value)
void swapValue(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping without pointers:\n");
    printf("a = %d b = %d\n", a, b);
}

// Function with pointers (call by reference)
void swapPointer(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Call by value
    swapValue(a, b);

    // Call by reference
    swapPointer(&a, &b);

    printf("After swapping with pointers:\n");
    printf("a = %d b = %d\n", a, b);

    return 0;
}