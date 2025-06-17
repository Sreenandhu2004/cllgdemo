//RECURSION::(stack)a process in which a functn calls itself directly or indirectly

#include<stdio.h>
int fun(int);
int main(){
    int n=3;
    printf("output::%d",fun(n));
}
int fun(int n){
    if(n==1){
        return 1;
    }
    else{
        return 1+fun(n-1);
    }
}
/*method::
          fun(3)=>return 1+fun(2)=>return 1+fun(1)=>return 1
          ie, 1=>(1+1=2)=>(1+2=3)=>'3'===output         
*/