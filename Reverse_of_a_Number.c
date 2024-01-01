#include<stdio.h>
int main()
{
    int a,rev=0;
    scanf("%d",&a);
    for(;a>0;a=a/10)
    {
        rev=(rev*10)+a%10;
    }
    printf("%d",rev);
}