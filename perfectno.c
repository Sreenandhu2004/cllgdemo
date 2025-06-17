//PERFECT NUMBER:num is the sum of all its divisors

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int i,rem,sum=0;
    for(i=1;i<num;i++){
        rem=num%i;
        if(rem==0){
            sum=sum+i;
        }
    } 
    if(sum==num){
        printf("\nentered num is a perfect no.");
    }
    else{
        printf("\nentered no. is not a perfect num");
    }
}