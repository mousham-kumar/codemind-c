#include<stdio.h>
#include<limits.h>
int main(){
    int a,c=0;
    int max=INT_MIN;
    scanf("%d",&a);
    int b=a;
    int arr[50];
    while(a>0){
        c++;
        a=a/10;
    }
    for(int i=0;b>0,i<c;i++,b=b/10)
    {
        int d=b%10;
        arr[i]=d;
    }
    for(int i=0;i<c;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
}