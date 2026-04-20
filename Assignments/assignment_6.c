#include <stdio.h>

// Recursive function
int factRec(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factRec(n - 1);
}

int main()
{
    int n, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Iterative
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial (Iterative) = %d\n", fact);

    // Recursive
    printf("Factorial (Recursive) = %d\n", factRec(n));

    return 0;
}