#include <stdio.h>

int main()
{
    int choice, n, i;
    float a, b, result = 1;

    printf("1.Add\n2.Sub\n3.Mul\n4.Div\n5.Power\n6.Factorial\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f\n", a + b);
            break;

        case 2:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f\n", a - b);
            break;

        case 3:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f\n", a * b);
            break;

        case 4:
            scanf("%f %f", &a, &b);
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero\n");
            break;

        case 5:
            scanf("%f %d", &a, &n);
            for (i = 1; i <= n; i++)
                result = result * a;
            printf("Result = %.2f\n", result);
            break;

        case 6:
            scanf("%d", &n);
            result = 1;
            for (i = 1; i <= n; i++)
                result = result * i;
            printf("Factorial = %.0f\n", result);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}