#include <stdio.h>
#define PIE 3.14
#define POWER 2

int main(){
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
     area = PIE * pow(radius, POWER);
    printf("the area of your circle is : %.2f ", area);
return 0;
}