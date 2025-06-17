//star pattern slanted 
#include<stdio.h>
int main(){
    int i,j,n=100;
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(j==i){  //note'=='
        printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
    }
}