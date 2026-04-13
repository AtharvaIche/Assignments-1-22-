#include <stdio.h>
#include <math.h>

int main()
{
    int choice, n, i;
    float num;

    printf("1. Square root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Check Prime\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 3)
    {
        printf("Enter number: ");
        scanf("%f", &num);
    }
    else
    {
        printf("Enter number: ");
        scanf("%d", &n);
    }

    if(choice == 1)
    {
        if(num < 0)
            printf("Not possible\n");
        else
            printf("Result = %.2f\n", sqrt(num));
    }

    else if(choice == 2)
    {
        printf("Result = %.2f\n", num * num);
    }

    else if(choice == 3)
    {
        printf("Result = %.2f\n", num * num * num);
    }

    else if(choice == 4)
    {
        if(n < 2)
        {
            printf("Not Prime\n");
            return 0;
        }

        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                printf("Not Prime\n");
                return 0;
            }
        }

        printf("Prime\n");
    }

    else if(choice == 5)
    {
        int fact = 1;

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

    else if(choice == 6)
    {
        if(n <= 1)
        {
            printf("No prime factors\n");
            return 0;
        }

        printf("Prime factors: ");

        for(i = 2; i <= n; i++)
        {
            while(n % i == 0)
            {
                printf("%d ", i);
                n = n / i;
            }
        }
    }

    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}
