#include<stdio.h>
int main(){
    char str1[50],str2[25],i,j;
    printf("\nenter the first string");
    gets(str1);
    printf("\nenter the second string");
    gets(str2);
    for(i=0;str1[i]!='\0';i++);
        for(j=0;str2[j]!='\0';j++,i++){
            str1[i]=str2[j];
        }
        str1[i]='\0';
    printf("\noutput:%s",str1);
}