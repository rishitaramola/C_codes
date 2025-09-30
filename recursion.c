#include<stdio.h>
int main() 
{
    double x,y;
    printf("Enter base and exponent: ");
    scanf("%d %d",&x,&y);
    printf("%d^%d = %d\n", x, y, power(x, y));
    return 0;
}
int power(double x, double y)
{
    if(y==0)
    {
        return 1;
    }
    y--;
    return x*power(x, y);
}