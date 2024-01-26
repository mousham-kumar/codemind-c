#include<stdio.h>
int main(){
    int a;
    int b=64;
    scanf("%d",&a);
    int d=a+1;
    for(int i=a;i>=1;i--){
        d--;
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            int c=d+b;
            printf("%c ",c);
        }
        printf("
");
    }
}