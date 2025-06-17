#include<stdio.h>
#include<string.h>
int main(){
    char str[20],rev[20];
    int i,j,len;
    printf("enter the string:");
    gets(str);
    i=strlen(str)-1;
    j=0;
    while(i>=0){
        rev[j]=str[i];
        j++;
        i--;
    }
    rev[j]='\0';
    printf("reversed string:%s",rev);
}