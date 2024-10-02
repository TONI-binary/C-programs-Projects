#include <stdio.h>
int main(){
    int p;
    int t;
    float r;
    float si;
    
    printf("enter the principal amount \n",p);
    scanf("%d",&p);
    
    printf("enter the interest rate \n",t);
    scanf("%d",&t);
    
    printf("enter the time period \n",r);
    scanf("%f",&r);
    
    si = (p*r*t)/100;
    
    printf("enter the simple interest %f\n", si);
    scanf("%f",&si);
    
    return 0;
    }