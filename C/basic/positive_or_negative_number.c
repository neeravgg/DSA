#include <stdio.h>

int main(){
    int number; 
   
    printf("Enter the number: ");
    scanf("%d", &number);
     
    if (number == 0){
        printf("the number %d is not valid. please enter a valid number", number);   
    }
    else if (number < 0){
        printf("the number %d is a negative number", number);
    }
    else if (number > 0){
        printf("the number %d is a positive number", number);
    }
   
return 0;
}