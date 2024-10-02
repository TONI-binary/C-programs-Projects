#include <stdio.h>
int main(){
    int p;
    int t;
    float r;
    float ci;
    
    printf("enter the principal amount \n",p);
    scanf("%d",&p);
    
    printf("enter the interest rate \n",r);
    scanf("%f",&r);
    
    printf("enter the time period \n",t);
    scanf("%d",&t);
    
    ci = p*pow((1 +r/100),t);
    
    printf("enter the compound interest %f\n",         ci);
    
    return 0;
    }