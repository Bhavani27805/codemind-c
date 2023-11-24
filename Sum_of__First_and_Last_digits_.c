#include<stdio.h>
int main()
{
    int n,f,l,c;
    scanf("%d",&n);
    f=n;
    l=n%10;
    while(n>10)
    {
        n=n/10;
    }
        f=n;
        c=f+l;
        printf("%d",c);
}