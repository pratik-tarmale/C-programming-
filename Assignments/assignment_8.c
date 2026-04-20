#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percent;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40)
    {
        printf("Result: FAIL\n");
    }
    else
    {
        total = m1 + m2 + m3 + m4 + m5;
        percent = total / 5.0;

        printf("Total = %d\n", total);
        printf("Percentage = %.2f\n", percent);

        if (percent >= 75)
            printf("Grade: Distinction\n");
        else if (percent >= 60)
            printf("Grade: First Division\n");
        else if (percent >= 50)
            printf("Grade: Second Division\n");
        else
            printf("Grade: Third Division\n");
    }

    return 0;
}