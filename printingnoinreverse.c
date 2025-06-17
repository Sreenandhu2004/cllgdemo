//printing given no. in reverse order

#include<stdio.h>
int main(){
    int i;
    int a[6]={23,4,78,6,5,9};
    printf("original order::\n");
    for(i=1;i<=6;i++){
        printf("%d  ",a[i]);
    }
    printf("\nreverse order::\n");
    printf("\n");
    for(i=6;i>=1;i--){
        printf("%d  ",a[i]);
    }
}