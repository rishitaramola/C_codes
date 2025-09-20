/*
Question 16:
Develop a program to store age of n students in a class using array. Calculate the average age and find 
the count of all the students above and below the average age. Print the higher count with an 
appropriate message.*/
#include<stdio.h>
void main() 
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    printf("Enter the number of students in the class: ");
    int n;
    scanf("%d",&n);

    double a[n];
    double sum=0;

    printf("Enter the age of students in the class respectively:\n");
    for(int i=0;i<n;i++) 
    {
        scanf("%lf",&a[i]);
        sum=sum+a[i];
    }

    double avg=sum/n;
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("The average age is: %.2f\n", avg);

    int ab=0;
    int be=0;
    int equal=0;

    for(int i=0;i<n;i++) 
    {
        if(a[i]>avg)
            ab++;
        else if(a[i]<avg)
            be++;
        else
            equal++;
    }

    if(ab>be)
        printf("The higher count is of the students above the average age that is: %d\n",ab);
    else if(be>ab)
        printf("The higher count is of the students below the average age that is: %d\n",be);
    else
        printf("The count of the students above and below is equal and is: %d\n", ab);

}
