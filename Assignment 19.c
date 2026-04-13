#include <stdio.h>
#include <string.h>

struct employee
{
    char name[50];
    char designation[50];
    char gender;
    char doj[20];
    float salary;
};

void totalEmployees(int n)
{
    printf("Total employees = %d\n", n);
}

void countGender(struct employee e[], int n)
{
    int i, male = 0, female = 0;

    for(i = 0; i < n; i++)
    {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("Male = %d\nFemale = %d\n", male, female);
}

void salaryAbove10k(struct employee e[], int n)
{
    int i;

    printf("Employees with salary > 10000:\n");

    for(i = 0; i < n; i++)
    {
        if(e[i].salary > 10000)
            printf("%s\n", e[i].name);
    }
}

void asstManager(struct employee e[], int n)
{
    int i;

    printf("Asst Manager Employees:\n");

    for(i = 0; i < n; i++)
    {
        if(strcmp(e[i].designation, "AsstManager") == 0)
            printf("%s\n", e[i].name);
    }
}

int main()
{
    struct employee e[10];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i+1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Date of Joining: ");
        scanf("%s", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    totalEmployees(n);
    countGender(e, n);
    salaryAbove10k(e, n);
    asstManager(e, n);

    return 0;
}
