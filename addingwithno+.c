//Adding without '+' operator
//only for +ve integers
#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter the 2 numbers to add::");
    scanf("%d%d",&num1,&num2);
    while(num2!=0){
        num1++;
        num2--;
    }
    printf("\nThe sum of 2 variables is %d",num1);
}