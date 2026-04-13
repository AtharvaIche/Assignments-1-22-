#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;
    int i, fact = 1;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 5)
    {
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
    }

    if(choice == 1)
        printf("Result = %.2f\n", a + b);

    else if(choice == 2)
        printf("Result = %.2f\n", a - b);

    else if(choice == 3)
        printf("Result = %.2f\n", a * b);

    else if(choice == 4)
    {
        if(b == 0)
            printf("Division not possible\n");
        else
            printf("Result = %.2f\n", a / b);
    }

    else if(choice == 5)
    {
        result = 1;
        for(i = 1; i <= b; i++)
            result = result * a;

        printf("Result = %.2f\n", result);
    }

    else if(choice == 6)
    {
        int n;
        printf("Enter number: ");
        scanf("%d", &n);

        if(n < 0)
        {
            printf("Not possible\n");
        }
        else
        {
            for(i = 1; i <= n; i++)
                fact = fact * i;

            printf("Result = %d\n", fact);
        }
    }

    else
        printf("Invalid choice\n");

    return 0;
}
