#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    int ch;
    char source[50], dest[50];

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    f1 = fopen(source, "r");

    if(f1 == NULL)
    {
        printf("Error opening source file\n");
        return 0;
    }

    f2 = fopen(dest, "w");

    if(f2 == NULL)
    {
        printf("Error creating destination file\n");
        fclose(f1);
        return 0;
    }

    while((ch = fgetc(f1)) != EOF)
    {
        fputc(ch, f2);
    }

    printf("File copied successfully\n");

    fclose(f1);
    fclose(f2);

    return 0;
}
