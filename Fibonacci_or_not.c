#include<stdio.h>
#include<math.h>
int main()
{
    int a; 
    scanf("%d",&a);
    int c=5*a*a+4;
    int d=5*a*a-4;
    int x,p;
    float y,q;
    y=sqrt((float)c);
    q=sqrt((float)d);
    x=y;p=q;
    if(x==y||p==q)printf("True");
    else printf("False");
}    
    