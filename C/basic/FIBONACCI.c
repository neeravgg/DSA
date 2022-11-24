#include <stdio.h>
void main(){
    int n = 10;
    int a=0;
    int b=1;
    int sum;
    
    printf("%d %d ", a, b);
    for(int i = 0; i< n -2; i++){
        sum = a + b;
        a= b;
        b = sum;
        printf("%d ", sum);

    }
}