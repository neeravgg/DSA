#include<stdio.h>

int main() {
    
    int q, price, dis, total;
    
    printf("enter the quantity: ");
    scanf("%d", &q);
//THE PRICE FOR ONE ARTICLE IS 10
    price = q * 10;

 if(q >= 1000) {
    dis = price * 10 /100;
    total = price - dis;
     printf("the final price is: %d", total);
    }
    
if(q < 1000) {
    printf("the price is: %d", price );
}
return 0;
}