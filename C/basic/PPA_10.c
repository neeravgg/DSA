#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, eq;
     
   
    printf("Enter the num a: ");
    scanf("%f", &a);
     printf("\nEnter the num b: ");
    scanf("%f", &b);
     printf("\nEnter the num c: ");
    scanf("%f", &c);
    
   eq = pow(b, 2) - 4 * a * c;
if(eq > 0){
    float x1 = (-b + sqrt(eq)) / 2*a; 
     float x2 = (-b - sqrt (eq)) / 2*a; 
      printf("\n Your result for x1: %.2f ", x1);
   printf("\n Your resultfor x2: %.2f ", x2);
}
else if (eq < 0){
    printf("the roots are imaginery");
}
else {
printf("the roots are real and equal");
}
   
    
return 0;
}