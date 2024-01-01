#include<stdio.h>
int main()
{
    int a,lastd;
    int reverse=0;
    scanf("%d",&a);
    while(a!=0){
        lastd=a%10;
        reverse=(reverse*10)+lastd;
        a=a/10;
    }
    printf("%d",reverse);
}