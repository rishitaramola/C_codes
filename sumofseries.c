#include <stdio.h>
void main()
{
    int n,f,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=1;
        for(int j=1;j<=i;j++)
        {
            f=f*j;
        }
        sum=sum+f;
    }
    printf("%d",sum);
}