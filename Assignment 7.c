#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float m1, m2, m3, total, avg;
};

int main()
{
    struct student s[10];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i+1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks of 3 subjects: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].total / 3;
    }

    printf("\n--- Student Results ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Total: %.2f\n", s[i].total);
        printf("Percentage: %.2f\n", s[i].avg);
    }

    return 0;
}
