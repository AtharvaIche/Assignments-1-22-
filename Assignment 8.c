#include <stdio.h>

int main()
{
    float m[5], total = 0, percent;
    int i;

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i+1);
        scanf("%f", &m[i]);

        if(m[i] < 40)
        {
            printf("Result: FAIL\n");
            return 0;
        }

        total += m[i];
    }

    percent = total / 5;

    printf("Percentage = %.2f\n", percent);

    if(percent >= 75)
        printf("Grade: Distinction\n");
    else if(percent >= 60)
        printf("Grade: First Division\n");
    else if(percent >= 50)
        printf("Grade: Second Division\n");
    else
        printf("Grade: Third Division\n");

    return 0;
}
