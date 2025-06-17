#include<stdio.h>
void swap(int *n1,int *n2);
int main(){
    int num1=5,num2=6;
    int *n1,*n2;
    n1=&num1;
    n2=&num2;
    swap(n1,n2);
    printf("num1=%d,num2=%d",*n1,*n2);
}
void swap(int *n1,int *n2){
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}