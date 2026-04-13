#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n;

    printf("How many random numbers: ");
    scanf("%d", &n);

    srand(time(0));

    for(i = 1; i <= n; i++)
    {
        printf("%d\n", rand());
    }

    return 0;
}
