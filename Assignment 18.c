#include <stdio.h>
#include <string.h>

int main()
{
    int choice;
    char str1[100], str2[100], temp[100];

    printf("Enter a string: ");
    scanf("%s", str1);

    printf("1. Length\n");
    printf("2. Reverse\n");
    printf("3. Equality check\n");
    printf("4. Palindrome check\n");
    printf("5. Substring check\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Length = %lu\n", strlen(str1));
    }

    else if(choice == 2)
    {
        int i, len = strlen(str1);
        for(i = 0; i < len; i++)
            temp[i] = str1[len - i - 1];
        temp[len] = '\0';

        printf("Reversed string = %s\n", temp);
    }

    else if(choice == 3)
    {
        printf("Enter second string: ");
        scanf("%s", str2);

        if(strcmp(str1, str2) == 0)
            printf("Strings are equal\n");
        else
            printf("Strings are not equal\n");
    }

    else if(choice == 4)
    {
        int i, len = strlen(str1);
        for(i = 0; i < len; i++)
            temp[i] = str1[len - i - 1];
        temp[len] = '\0';

        if(strcmp(str1, temp) == 0)
            printf("Palindrome\n");
        else
            printf("Not Palindrome\n");
    }

    else if(choice == 5)
    {
        printf("Enter substring: ");
        scanf("%s", str2);

        if(strstr(str1, str2) != NULL)
            printf("Substring found\n");
        else
            printf("Substring not found\n");
    }

    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}
