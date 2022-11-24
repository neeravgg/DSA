#include <stdio.h>
void main(){
    int num;
    int rev = 0;
    int ld =0;
    printf("Enter the number: ");
    scanf("%d", num);
    int temp = num;
    while(temp>0){
        ld = temp%10;
        rev = rev*10 + ld;
        temp /= 10;
    }
    printf("%d", rev);
}