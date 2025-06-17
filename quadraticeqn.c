#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x1,x2,l,realpart,imagpart;
    printf("Enter a,b,c of the q.eqn:");
    scanf("%f%f%f",&a,&b,&c);
    l=(pow(b,2)-(4*a*c));
    if(l>0){
        x1=(-b+sqrt(l))/(2*a);
        x2=(-b-sqrt(l))/(2*a);
        printf("real roots are:\nroot1:%f \n root2:%f",x1,x2);
    }
    if(l==0){
        x1=(-b)/(2*a);
        printf("\nequal root:%f",x1);
    }
    if(l<0){
       realpart=-b/(2*a);
       imagpart=sqrt(-l)/(2*a);
       printf("imaginary roots:\nroot1:%.2f+%.2fi \n root2:%.2f-%.2fi",realpart,imagpart,realpart,imagpart);
    }
}