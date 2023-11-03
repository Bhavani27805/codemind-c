#include<stdio.h>
int main()
{
    int N,A=12,i;
    scanf("%d%d%d",&N,&A);
    for(i=1;i<=A;i++)
    {
        printf("%d x %d = %d
",N,i,i*N);
    }
}