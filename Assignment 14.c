#include <stdio.h>
#include <math.h>

int main()
{
    int bin, digit, i = 0;
    int decimal = 0;

    printf("Enter a binary number: ");
    scanf("%d", &bin);

    while(bin != 0)
    {
        digit = bin % 10;
        decimal = decimal + digit * pow(2, i);
        bin = bin / 10;
        i++;
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}
