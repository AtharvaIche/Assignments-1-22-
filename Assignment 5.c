#include <stdio.h>

int main()
{
    int choice;

    printf("1. Addition of two matrices\n");
    printf("2. Saddle point of a matrix\n");
    printf("3. Inverse of a matrix\n");
    printf("4. Check Magic square\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        int a[10][10], b[10][10], c[10][10];
        int r1, c1, r2, c2, i, j;

        printf("Enter rows and columns of first matrix: ");
        scanf("%d %d", &r1, &c1);

        printf("Enter first matrix:\n");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
            {
                printf("a[%d][%d]: ", i, j);
                scanf("%d",&a[i][j]);
            }

        printf("Enter rows and columns of second matrix: ");
        scanf("%d %d", &r2, &c2);

        if(r1 != r2 || c1 != c2)
        {
            printf("Addition not possible\n");
            return 0;
        }

        printf("Enter second matrix:\n");
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
            {
                printf("b[%d][%d]: ", i, j);
                scanf("%d",&b[i][j]);
            }

        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                c[i][j]=a[i][j]+b[i][j];

        printf("Result:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                printf("%d ",c[i][j]);
            printf("\n");
        }
    }

    else if(choice == 2)
    {
        int a[10][10], r, c, i, j, k;

        printf("Enter rows and columns: ");
        scanf("%d %d", &r, &c);

        printf("Enter matrix:\n");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
            {
                printf("a[%d][%d]: ", i, j);
                scanf("%d",&a[i][j]);
            }

        for(i=0;i<r;i++)
        {
            int min = a[i][0], col = 0;

            for(j=1;j<c;j++)
            {
                if(a[i][j] < min)
                {
                    min = a[i][j];
                    col = j;
                }
            }

            for(k=0;k<r;k++)
            {
                if(a[k][col] > min)
                    break;
            }

            if(k == r)
                printf("Saddle point: %d\n", min);
        }
    }

    else if(choice == 3)
    {
        float a[10][10], inv[10][10], det;
        int r, c, i, j;

        printf("Enter rows and columns: ");
        scanf("%d %d", &r, &c);

        printf("Enter matrix:\n");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
            {
                printf("a[%d][%d]: ", i, j);
                scanf("%f",&a[i][j]);
            }

        if(r != c)
        {
            printf("Inverse not possible (not square matrix)\n");
            return 0;
        }

        if(r == 2)
        {
            det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

            if(det == 0)
            {
                printf("Inverse not possible\n");
                return 0;
            }

            inv[0][0] = a[1][1]/det;
            inv[0][1] = -a[0][1]/det;
            inv[1][0] = -a[1][0]/det;
            inv[1][1] = a[0][0]/det;

            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                    printf("%.2f ",inv[i][j]);
                printf("\n");
            }
        }

        else if(r == 3)
        {
            det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
                - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
                + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);

            if(det == 0)
            {
                printf("Inverse not possible\n");
                return 0;
            }

            inv[0][0]=(a[1][1]*a[2][2]-a[1][2]*a[2][1])/det;
            inv[0][1]=(a[0][2]*a[2][1]-a[0][1]*a[2][2])/det;
            inv[0][2]=(a[0][1]*a[1][2]-a[0][2]*a[1][1])/det;

            inv[1][0]=(a[1][2]*a[2][0]-a[1][0]*a[2][2])/det;
            inv[1][1]=(a[0][0]*a[2][2]-a[0][2]*a[2][0])/det;
            inv[1][2]=(a[0][2]*a[1][0]-a[0][0]*a[1][2])/det;

            inv[2][0]=(a[1][0]*a[2][1]-a[1][1]*a[2][0])/det;
            inv[2][1]=(a[0][1]*a[2][0]-a[0][0]*a[2][1])/det;
            inv[2][2]=(a[0][0]*a[1][1]-a[0][1]*a[1][0])/det;

            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                    printf("%.2f ",inv[i][j]);
                printf("\n");
            }
        }

        else
        {
            printf("Inverse supported only for 2x2 and 3x3\n");
        }
    }

    else if(choice == 4)
    {
        int a[10][10], n, i, j;
        int sum=0, diag1=0, diag2=0;

        printf("Enter size n: ");
        scanf("%d",&n);

        printf("Enter matrix:\n");
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                printf("a[%d][%d]: ", i, j);
                scanf("%d",&a[i][j]);
            }

        for(j=0;j<n;j++)
            sum += a[0][j];

        for(i=0;i<n;i++)
        {
            int rowsum=0, colsum=0;

            for(j=0;j<n;j++)
            {
                rowsum += a[i][j];
                colsum += a[j][i];
            }

            if(rowsum != sum || colsum != sum)
            {
                printf("Not Magic Square\n");
                return 0;
            }
        }

        for(i=0;i<n;i++)
        {
            diag1 += a[i][i];
            diag2 += a[i][n-i-1];
        }

        if(diag1 != sum || diag2 != sum)
            printf("Not Magic Square\n");
        else
            printf("Magic Square\n");
    }

    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}
