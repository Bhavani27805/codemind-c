#include<stdio.h>
int main()
{
    int M,N,i,A;
    scanf("%d%d",&M,&N);
    for(i=1;i<=M;i++)
    {
        A=i*N;
        if(A%M==0)
        {
        printf("%d ",A);
        break;
        }
    }
}