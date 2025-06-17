#include<stdio.h>
int main(){
    int i;
    char a[50],b[50];
    printf("Enter the string a:");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        b[i]=a[i];
    }
    b[i]='\0';
    puts(b);
}