#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        for(int j=1;j<=a;j++){
            if(i+j==a+1||i==j){
                printf("%d",i);
            }
            else {
                printf(" ");
            }
        }
        printf("
");
    }
    return 0;
}