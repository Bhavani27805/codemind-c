#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=n*n,y,rev=0;
    while(x!=0)
    {
        y=x%10;
        rev=rev+y;
        x=x/10;
    }
    if(rev==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}