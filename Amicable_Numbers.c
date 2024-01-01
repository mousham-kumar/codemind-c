#include<stdio.h>
int main(){
    int c,d,e=0,f=0,i,j;
    scanf("%d%d",&c,&d);
    for(i=1;i<c;i++)
    {
        if(c%i==0){
            e+=i;
        }
    }
    for(j=1;j<d;j++)
    {
        if(d%j==0)
        {
            f+=j;
        }
    }
    if(e==d&&f==c)printf("Amicable");
    else printf("Not Amicable");
}