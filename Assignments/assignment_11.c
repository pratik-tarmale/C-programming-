#include <stdio.h>
#include <math.h>

int main()
{
    int n, choice, i;
    int fact = 1, isPrime = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("1.Square Root\n2.Square\n3.Cube\n4.Prime\n5.Factorial\n6.Prime Factors\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Square Root = %.2f\n", sqrt(n));
            break;

        case 2:
            printf("Square = %d\n", n * n);
            break;

        case 3:
            printf("Cube = %d\n", n * n * n);
            break;

        case 4:
            for (i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (n <= 1)
                isPrime = 0;

            if (isPrime)
                printf("Prime Number\n");
            else
                printf("Not Prime\n");
            break;

        case 5:
            for (i = 1; i <= n; i++)
                fact = fact * i;
            printf("Factorial = %d\n", fact);
            break;

        case 6:
            printf("Prime Factors: ");
            for (i = 2; i <= n; i++)
            {
                while (n % i == 0)
                {
                    printf("%d ", i);
                    n = n / i;
                }
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}