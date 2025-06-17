#include<stdio.h>
int main(){
    int flag=0,i;
    char str1[50],str2[50];
    printf("enter string1");
    gets(str1);
    printf("\nenter the string 2");
    gets(str2);
    for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            flag=1;
            break;
        }
    }
    if(flag=0&&str1!='\0'&&str2!='\0'){
        printf("\ntwo strings are not equal");
    }
    else{
        printf("\ntwo strings are equal");
    }
}