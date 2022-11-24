#include <stdio.h>
void main(){
    int year;
    printf("please Enter the year: ");
    scanf("%d", &year);
    if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
  
   else if (year % 100 == 0) {
      printf("%d is NOT a leap year.", year);
   }
  
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }

   else {
      printf("%d is NOT a leap year.", year);
   }
}