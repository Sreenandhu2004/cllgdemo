//STRONG NUMBER
#include<stdio.h>
int main(){
    int num,q,rem,fact=1,i,result=0;
    printf("enter a number::");
    scanf("%d",&num);
    q=num;
    while(q!=0){
        rem=q%10;
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        result=result+fact;
        q=q/10;
    }
    if(result==num){
        printf("entered num is a strong num");
    }
    else{
        printf("entered num ");
    }
}