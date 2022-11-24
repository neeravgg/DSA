#include <stdio.h>
void main(){
    int n, i, j, k;
    printf("enter the number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j = 1; j<= i; j++){
            printf(" ");

        }
        for(k =1; k<=n-i+1; k++){
            printf("* ");
        }
        printf("\n");
    }
}