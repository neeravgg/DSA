#include <stdio.h>


int main(){
    float cal, fh;
    
   
    printf("Enter the temprature in fherenhite: ");
    scanf("%f", &fh);
     
    cal = 5 * (fh-32) / 9; 
        
    printf("\n Your temp is: %.2f ", cal);
    
return 0;
}