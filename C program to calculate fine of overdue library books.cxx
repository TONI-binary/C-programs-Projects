// program to calculate simple interest
//author:Antony Chege Nyawira
//date: 25/08/2024

#include <stdio.h>
int main(){
    int bookID;
    int dueDate;
    int returnDate;
    
    printf("enter bookId: ");
    scanf("%d", &bookID);
    
    printf("enter dueDate: ");
    scanf("%d", &dueDate);
    
    printf("enter return date: ");
    scanf("%d", &returnDate);
    
    int daysOverdue;
    
    daysOverdue = returnDate - dueDate;
 
     int fineRate;
 
    if(daysOverdue>0 && daysOverdue<=7 ){
         fineRate=20;
        
        }
       else if(daysOverdue >7 && daysOverdue
        <=14)
        {fineRate=50;
         }
         
        else if(daysOverdue >14){
        fineRate=100;
         }         
         else {
        printf("no charges\n");
        fineRate=0;
        }
          
         int fineAmount;
         
       fineAmount = daysOverdue * fineRate;
        printf("your fine is %d",fineAmount);
    
 
        
    
    return 0;
    
}