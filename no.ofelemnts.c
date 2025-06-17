//computing the no.of elements in an array

#include<stdio.h>
int main(){
    int array[]={1,2,3,4,5,4,3,2,1,5,6,7,8,9,0,9,8,7,6,5,4};
    printf("The no.of elements in this array is %d",sizeof(array)/sizeof(array[0]));
}