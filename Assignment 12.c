#include <stdio.h>

int main()
{
    int a, b, i, gcd = 1, scd = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(i = 2; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            scd = i;
            break;
        }
    }

    if(scd == 0)
        printf("No common divisor other than 1\n");
    else
        printf("Smallest common divisor = %d\n", scd);

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("Greatest Common Divisor = %d\n", gcd);

    return 0;
}
