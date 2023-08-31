//1.	Write a program to perform Insertion sort algorithm for any given list of numbers.
//Algo/code/complexity for 1/2/3 only code and o/p for 4/5
void iSort(int a[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
void main()
{
    int n;
    printf("No of elements: ");
    scanf("%d",&n);
    int a[n],i;
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    iSort(a, n);
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);
}
