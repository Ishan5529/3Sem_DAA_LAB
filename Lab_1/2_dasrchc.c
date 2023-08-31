#include <stdio.h>
void main()
{
    int n,m,i,j,e;
    printf("Enter Rows and columns: ");
    scanf("%d%d",&n,&m);
    int a[n][m];
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            scanf("%d",&a[i][j]);
    printf("Enter element to search: ");
    scanf("%d",&e);
    int c=0;
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            if (a[i][j] == e){
                printf("Element found in position: %d x %d\n",i,j);
                c++;
            }
    if (c==0)
        printf("Element not found");
}
