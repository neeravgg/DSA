#include <stdio.h>
void main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        for(int j=1; j<= 10; j++){
            int mul = i * j;
            printf("\n%d * %d = %d ", i, j, mul);
        }
        printf("\n");
    }
}