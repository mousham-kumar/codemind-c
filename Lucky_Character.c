#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10];
    for(int i=0;i<10;i++){
        scanf("%c",ch+i);
    }
    printf("%c",ch[6]);
    
}