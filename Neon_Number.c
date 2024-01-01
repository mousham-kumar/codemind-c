#include<stdio.h>
int main(){
    int a,ss=0;
    scanf("%d",&a);
    int b=a;
    int c=a*a;
    for(;c>0;c=c/10){
        ss+=(c%10);
    }
    if(ss==b)printf("Neon Number");
    else printf("Not Neon Number");
}