#include<stdio.h>
int main()
{
    int a,rev=0;
    scanf("%d",&a);
    int b=a;
    for(;a>0;a=a/10)
    {
        rev=(rev*10)+a%10;
    }
    if(rev==b)printf("True");
    else printf("False");
}