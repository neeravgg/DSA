#include<stdio.h>

int main() {
    
    double salary, hra, da, gross;
    printf("please enter the salary: ");
    scanf("%lf", &salary);
    
    if(salary >= 15000){
        hra = 5000;
        da = 98 * salary / 100;
        gross = hra + da + salary;
        printf("\nthe HRA is : %.2f", hra);
        printf("\nthe DA is : %.2f", da);
         printf("\nthe gross salary is : %.2f", gross);
        
    }
   else if(salary < 15000 && salary > 0){
        hra = 10 * salary / 100;
        da = 90 * salary / 100;
        gross = hra + da + salary;
        printf("\nthe HRA is : %.2f", hra);
        printf("\nthe DA is : %.2f", da);
         printf("\nthe gross salary is : %.2f", gross);
        
    }
    else if (salary <= 0){
        printf("\nThe input is invalid.");
    }
return 0;
}