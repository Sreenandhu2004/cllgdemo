#include<math.h>
#include<stdio.h>
int main(){
    int i,n;
    printf("enter the no.of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("%.2f ",(pow(3,i)));
    }
}