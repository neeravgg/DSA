#include <stdio.h>

int main(){
    int num; 
    int fac = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    int i =1;
   if(num >0){

    while(i <= num){
        fac =  fac * i; 
     i++;
    }
   }
   else if (i == 0){
      printf("the factorial of the number : 1 ");
      }
   else {
       printf("number is invalid");
   }
    printf("the factorial of the number : %d ", fac);
return 0;
}