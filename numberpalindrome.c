#include<stdio.h>
int main(){
    int num,nd,remainder,q,result=0,i;
    printf("enter a num:");
    scanf("%d",&num);
    q=num;
    while(q!=0){
        remainder=q%10;
        result=result*10+remainder;
        q=q/10;
    }
    /*if(result==num){
        printf("entered num is palindrome");
    }
    else{
        printf("entered num is not a palindrome");
    }*/
    printf("result %d",result);
}