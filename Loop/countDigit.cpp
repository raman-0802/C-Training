#include<stdio.h>
int main()
{
    int n,count=0;
    printf("n=");
    scanf("%d",&n);
    if(n==0)count=1;
    for(;n>0;n=n/10)
    {
        count++;
    }
    printf("%d",count);
}