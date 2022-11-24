#include <stdio.h>
#define n 5
void main(){
   
    int arr[n];
    char crr[n];
    float frr[n];
    scanint(arr[n]);
    printint(arr[n]);
    // scanchar(crr[n]);
    // printchar(crr[n]);

}
void scanint(int arr[]){
    printf("Enter the elements of the INT array:\n");
    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}
void printint(int arr[]){
    
    for (int i = 0; i<n; i++){
        printf("\n%d  -  %d",arr[i],&arr[i]);
    }
}
void scanchar(char crr[]){
    printf("Enter the elements of the CHAR array:\n");
    for (int i = 0; i<n; i++){
        scanf("%c", &crr[i]);
    }
}
void printchar(char crr[]){
  
    for (int i = 0; i<n; i++){
        printf("\n%d  -  %d",crr[i],&crr[i]);
    }
} 
void scanfloat(float frr[]){
    printf("Enter the elements of the FLOAT array:\n");
    for (int i = 0; i<n; i++){
        scanf("%f", &frr[i]);
    }
}
void printfloat(float frr[]){
  
    for (int i = 0; i<n; i++){
        printf("\n%d  -  %d",frr[i], &frr[i]);
    }
}
