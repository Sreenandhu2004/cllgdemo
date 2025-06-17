//word pyramid
#include<stdio.h>
 int main(){
    int i,j,n;
    char a[10];
    printf("enter the no.of letters");
    scanf("%d",&n);
    printf("enter the word");
    for(i=1;i<=n;i++){
        scanf("%c",&a[i]);
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
}