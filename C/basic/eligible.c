#include <stdio.h>
void main(){
    double age;
    double exp;
     printf("Enter the age: ");
     scanf("%lf", age);
     printf("Enter the work experience: ");
      scanf("%lf", exp);
    if(age<56 && exp >= 4){
        printf("you are eligible");

    }
    else{
     printf("you are NOT eligible");
    }
}