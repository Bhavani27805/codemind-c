#include<stdio.h>
int main()
{
    int  i=1,N,sum=1;
    scanf("%d",&N);
    while(i<=N)
    {
        
            sum=sum*i;
            i++;
        
        
    }
     printf("%d ",sum);
}