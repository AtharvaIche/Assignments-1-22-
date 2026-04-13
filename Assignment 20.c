#include <stdio.h>

void swap_without_pointers(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside swap function (without pointers): a = %d, b = %d\n", a, b);
}

void swap_with_pointers(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x,y;
    printf("Enter two numbers to be swapped: ");
    scanf("%d%d",&x,&y);
    printf("Before swap: x = %d, y = %d\n", x, y);

    swap_without_pointers(x, y);
    printf("After swap function (without pointers): x = %d, y = %d\n", x, y);

    swap_with_pointers(&x, &y);
    printf("After swap (with pointers): x = %d, y = %d\n", x, y);

    return 0;
}
