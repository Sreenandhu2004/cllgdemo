#include<stdio.h>
void swap(int *p,int *q);
int main(){
    int a,b;
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
    int *p,*q;
    p=&a;
    q=&b;
    swap(p,q);
    printf("\nafter swaping,a=%d and b=%d",a,b);
}
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}