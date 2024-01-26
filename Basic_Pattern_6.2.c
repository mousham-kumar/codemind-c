#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a;
    for(int i=1;i<=a;i++,b--){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",b);
        }
        printf("
");
    }
}