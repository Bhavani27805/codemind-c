#include<stdio.h>
int main()
{
    int n,dc=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        dc=dc+1;
        n=n/10;
    }
    printf("%d",dc);
}