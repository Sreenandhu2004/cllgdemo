#include<stdio.h>
int main(){
    int n,i,flag=0;
    printf("enter the no to be checked:");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("\nEntered number is not a prime");
    }
    else{
        printf("\nEntered number is a prime");
    }
}