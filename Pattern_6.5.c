#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int x=65;
    for(int i=a;i>=1;i--,x++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        
        for(int k=1;k<=i;k++){
            printf("%c ",x);
        }
        printf("
");
    }
}