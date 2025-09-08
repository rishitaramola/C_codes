/*NAME                                         : Rishita Ramola
UNIVERSITY ROLL NO.                            : 24022360
SECTION                                        : B

Question 15:
Write a menu driven program to perform the following operations on a given number(integer) based 
upon the given choices from (1 to 4). 
1. Print factorial of the number 
2. Print the number is odd or even 
3. Print reverse of the number 
4. Exit*/
#include<stdio.h>
int main()
{
    int n;
    printf("1. Print factorial of the number\n2. Print the number is odd or even\n3. Print reverse of the number\n4. Exit\n");
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    printf("Enter a valid INPUT: ");
    scanf("%d",&n);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    switch(n)
    {
        case 1:
        {
            int a,fac=1;
            printf("Print factorial of the number\n");
            printf("Enter the number: ");
            scanf("%d",&a);
            for(int i=1;i<=a;i++)
            {
                fac=fac*i;
            }
            printf("Factorial of the number is %d",fac);
            break;
        }
        case 2:
        {
            int a;
            printf("Print the number is odd or even\n");
            printf("Enter the number: ");
            scanf("%d",&a);
            if(a%2==0)
              printf("The number is EVEN");
            else
              printf("The number is ODD"); 
            break;
        }
        case 3:
        {
            int a,r=0;
            printf("Print reverse of the number\n");
            printf("Enter the number: ");
            scanf("%d",&a);
            while(a>0)
            {
                int m=a%10;
                r=r*10+m;
                a=a/10;
            }
            printf("Reverse of the number is %d",r);
            break;
        }
        case 4:
        {
            printf("Exit\n");
            return 0;
        }
        default:
        {
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            return 0;
        }
    }
    return 0;
}