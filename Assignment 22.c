#include <stdio.h>
#include <string.h>

int main()
{
    int choice;
    char str1[100], str2[100], temp[100];
    int i, len;

    while(1)
    {
        printf("\n1. Length\n2. Copy\n3. Concatenate\n4. Compare\n5. Reverse\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter string: ");
                scanf("%s", str1);

                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter string: ");
                scanf("%s", str1);

                strcpy(temp, str1);
                printf("Copied string = %s\n", temp);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);

                printf("Enter second string: ");
                scanf("%s", str2);

                strcpy(temp, str1);
                strcat(temp, str2);

                printf("Concatenated string = %s\n", temp);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);

                printf("Enter second string: ");
                scanf("%s", str2);

                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 5:
                printf("Enter string: ");
                scanf("%s", str1);

                len = strlen(str1);

                for(i = 0; i < len; i++)
                    temp[i] = str1[len - i - 1];

                temp[len] = '\0';

                printf("Reversed string = %s\n", temp);
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
