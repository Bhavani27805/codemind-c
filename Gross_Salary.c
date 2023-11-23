#include<stdio.h>
int main()
{
    int BS;
    float DA,HRA,GS;
    scanf("%d",&BS);
    if(BS<=10000)
    {
        DA=BS*0.8;
        HRA=BS*0.2;
        GS=BS+DA+HRA;
    }
    else if(BS<=20000)
    {
        DA=BS*0.9;
        HRA=BS*0.25;
        GS=BS+DA+HRA;
    }
    else 
    {
        DA=BS*0.95;
        HRA=BS*0.3;
        GS=BS+DA+HRA;
    }
    printf("%.2f",GS);
}