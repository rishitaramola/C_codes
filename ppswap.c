/*Write a C code to input n (where n is even) numbers in an array than
by passing this array to a function that interchange element at
odd index with elements at even index (access array in the function
using pointer): (CO3)
Sample Input : 2 4 6 7 1 3
Sample Output: 4 2 7 6 3 1*/
#include<stdio.h>
#include<string.h>
int swap(int *a, int n)
{
    int temp;
    for(int i=0;i<n;i=i+2)
    {
        temp=*(a+i);
        *(a+i)=*(a+i+1);
        *(a+i+1)=temp;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);

    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++)
    {
        printf("%d,  ",a[i]);
    }
    printf("\nswapped elements are:\n");

    swap(a,n);

    for (int i=0;i<n;i++)
    {
        printf("%d,  ",a[i]);
    }

    return 0;
}