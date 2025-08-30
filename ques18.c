/*NAME                                         : Rishita Ramola
UNIVERSITY ROLL NO.                            : 24022360
SECTION                                        : B

Question 18:
Write a function to sort an array of integers using any sorting technique.*/
#include <stdio.h>
void ascending() 
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n;
    printf("size: ");
    scanf("%d", &n);
    int a[n];
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++) 
    {
        for (int j=0;j<n;j++) 
        {
            if (a[i]<a[j])
            {
                int s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }
    }
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("In ascending order:\n");
    for (int i=0;i<n;i++) 
    {
        printf("%d ",a[i]);
    }
}
void descending()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n;
    printf("size: ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++) 
    {
        for (int j=0;j<n;j++) 
        {
            if (a[i]>a[j]) 
            {
                int s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }
    }
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("In descending order:\n");
    for (int i=0;i<n;i++) 
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int choice;
    printf("1. In ascending order\n");
    printf("2. In descending order\n");
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    switch (choice)
    {
        case 1:
        {
            ascending();
            break;
        }
        case 2:
        {
            descending();
            break;
        }
        default:
            printf("Invalid choice! Please choose again.\n");
    }
    return 0;
}