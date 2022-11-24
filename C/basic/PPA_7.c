#include <stdio.h>


void main(){
    float chem,phy,math;
    float sum, per; 
   
    printf("Enter the chemistry marks: ");
    scanf("%f", &chem);
     printf("\nEnter the phycics marks: ");
    scanf("%f", &phy);
     printf("\nEnter the maths marks: ");
    scanf("%f", &math);
    
    sum = chem + phy + math;
    per = sum/300 * 100;
    printf("\n Your total marks is: %.2f ", sum);
    printf("\n Your Percentage is: %.2f", per);
    
}