#include <stdio.h>
/*void add(int a[][], int b[][], int sum[][], int n)
{
    int i,j;
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            sum[i][j] = a[i][j] + b[i][j];
}
void mult(int a[][], int b[][], int prod[][], int n)
{
    int i,j;
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            prod[i][j] = prod[i][j] + a[j][i]*b[i][j];
}*/
/*void print(int a[][], int n)
{
    int i,j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }
}*/
void main()
{
    int n,i,j;
    printf("Enter sizes of matrix: ");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("Enter 1st matrix:\n");
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    printf("Enter 2nd matrix:\n");
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            scanf("%d",&b[i][j]);
    int sum[n][n];
    //add(a,b,sum,n);

    {
    int i,j;
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            sum[i][j] = a[i][j] + b[i][j];
    }


    printf("\n\nSum:\n");
    //print(sum,n);

    {
        int i,j;
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
                printf("%d  ",sum[i][j]);
            printf("\n");
        }
    }

    int prod[n][n];
    //mult(a,b,prod,n);

    {
    int i,j,k,s=0;
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
        {
            s=0;
            for (k=0; k<n; k++)
                s = s + a[k][j]*b[j][k];
            prod[i][j] = s;
        }
    }


    printf("\n\nProduct:\n");
    //print(prod,n);

    {
        int i,j;
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
                printf("%d  ",prod[i][j]);
            printf("\n");
        }
    }

    printf("\n\nTranspose of A:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
            printf("%d  ",a[j][i]);
        printf("\n");
    }
    printf("\n\nTranspose of B:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
            printf("%d  ",b[j][i]);
        printf("\n");
    }
}
