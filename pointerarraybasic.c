#include<stdio.h>
int main(){
    int x[4],i,sum=0;
    printf("enter elements:");
    for(i=0;i<4;i++){
        scanf("%d",x+i);
    }
    for(i=0;i<4;i++){
        sum=sum+*(x+i);
    }
    printf("sum=%d",sum);
}