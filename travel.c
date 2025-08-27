#include <stdio.h>
void main()
{
    int n,c=10,s;
    printf("print the last day of the man's travel:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+c;
        c++;
    }
    printf("%d",s);
}