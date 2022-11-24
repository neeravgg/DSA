#include <stdio.h>
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n ==9) 
    printf("the number is NOT armstrong");
    if(n< 153)
    printf("the number is armstrong");
    else
    arm(n);
}
void arm(int a){
    int ld, temp =a;
    int sum =0;
    while(a != 0){
    ld = a %10;
    sum += power(ld, 3);
     a /= 10;
    }
   if(sum == temp)
    printf("the number is armstrong.");
    else
    printf("the number is NOT armstrong.");
}
int power(int x, int y){
    int res= 1;
    for(int i=1; i<=y; i++){
    res *= x;

    }
    return res;
}

