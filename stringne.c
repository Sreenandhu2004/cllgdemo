#include<stdio.h>
int main(){
    int i;
    char array[]={'N','E','H','A','\0'};
    printf("%s\n",array);
    int count1=0,count2=0,count3=0,count4=0,count5=0;
    for(i=0;i<=4;i++){
        if(array[i]=='A'){
            count1++;
        }
        if(array[i]=='E'){
            count2++;
        }
        if(array[i]=='I'){
            count3++;
        }
        if(array[i]=='O'){
            count4++;
        }
        if(array[i]=='U'){
            count5++;
        }                        
    }
    printf("no.of A=%d,no.of E=%d,no.of I=%d,no.of O=%d,no.of U=%d",count1,count2,count3,count4,count5);
}