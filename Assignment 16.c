#include <stdio.h>

int main()
{
    int a[100], even[100], odd[100];
    int n, i, e = 0, o = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);

        if(a[i] % 2 == 0)
        {
            even[e] = a[i];
            e++;
        }
        else
        {
            odd[o] = a[i];
            o++;
        }
    }

    printf("Even numbers:\n");
    for(i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nOdd numbers:\n");
    for(i = 0; i < o; i++)
        printf("%d ", odd[i]);

    return 0;
}
