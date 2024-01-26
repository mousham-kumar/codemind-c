#include<stdio.h>
#include<math.h>
int main ()
{
    int a,sum=0,c=0,rev=0;
    scanf("%d",&a);
    int b=a;
    while(a>0){
        c++;
        rev=(rev*10)+a%10;
        a/=10;
    }
    for(int i=1;i<=c,rev>0;rev=rev/10,i++){
        int x=rev%10;
        sum=sum+pow(x,i);
    }
    if(sum==b)printf("True");
    else printf("False");
}