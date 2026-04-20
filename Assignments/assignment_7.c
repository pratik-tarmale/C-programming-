#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    int m1, m2, m3;
};

int main()
{
    struct student s[100];
    int n, i;
    float total, percent;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Roll, Name, Marks: ");
        scanf("%d %s %d %d %d",
              &s[i].roll,
              s[i].name,
              &s[i].m1,
              &s[i].m2,
              &s[i].m3);
    }

    for (i = 0; i < n; i++)
    {
        total = s[i].m1 + s[i].m2 + s[i].m3;
        percent = total / 3;

        printf("\nStudent Result:\n");
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total: %.2f\n", total);
        printf("Percentage: %.2f\n", percent);
    }

    return 0;
}