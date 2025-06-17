#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d and b=%d",a,b);
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}