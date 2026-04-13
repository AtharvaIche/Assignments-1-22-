#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float x, sum = 0;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
            sum = sum + pow(x, i) / tgamma(i + 1);
        else
            sum = sum - pow(x, i) / tgamma(i + 1);
    }

    printf("Sum = %f\n", sum);

    return 0;
}
