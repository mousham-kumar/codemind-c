#include<stdio.h>
int main()
{
    int a;
    int b=64;
    int d=0;
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        d++;
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            int c=b+d;;
            char ch=c;
            printf("%c ",ch);
        }
        printf("
");
    }
    
}