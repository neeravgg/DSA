#include<stdio.h>

int main() {
    
    int num, res;
    
    printf("enter the number: ");
    scanf("%d", &num);

res = num % 2;

 if(res == 0) {
       printf("the number %d is even", num);
    }
    
else if(num == 0) {
    printf("the number %d is invalid", num );
}
else {
    printf("the number %d is odd", num );
}
return 0;
}