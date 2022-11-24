#include <stdio.h>
void main(){
    int n, i, j, k;
    printf("enter the number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j = 1; j<= n-i; j++){
            printf("  ");

        }
        for(k =i; k> 0; k--){
            printf(" %d ",k);
            
        }
        
        for(int l =2 ; l<=i; l++){
                printf(" %d ", l);
            }
        printf("\n");
    }
}