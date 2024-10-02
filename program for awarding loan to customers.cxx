#include <stdio.h>

int main(){
    int age;
    float income;
    
    printf("enter your age : ");
    scanf("%d", &age);
    
    printf("enter your annual income : ");
    scanf("%f", &income);
    
    if (age >= 21 && income >= 21000){
        printf("congratulations, you qualify for the loan \n");
        }
    else{
        printf("unfortunately, you donnot qualify for the loan");
        }
    
    
    
    
    return 0;
    }
