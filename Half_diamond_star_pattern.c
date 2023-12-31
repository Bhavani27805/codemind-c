#include<stdio.h>
int main()
{
    int n,i,j,c=1;
    scanf("%d",&n);
    if(n>2)
    {
    for(i=1;i<n*2;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("*");
        }
        if(i<n)
        {
            c++;
        }
        else
        {
                c--;
        }
        printf("
");
    }
    }
    if(n<3)
    {
        printf("The pattern is not possible");
    }
}