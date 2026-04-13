#include <stdio.h>

int main()
{
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if(sum == num)
        printf("The entered number is an Armstrong number\n");
    else
        printf("The entered number is not an Armstrong number\n");

    return 0;
}
