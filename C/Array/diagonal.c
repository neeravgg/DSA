#include <stdio.h>
void main(){
  int i=0; int j=0; int n=4;
  int arr[4][4];
  while(i<n && j<n){
    if(i ==j){
      arr[i][j] = 0;
    }
      if(j>i&&j<n){
        arr[i][j] = -1;
      }
      if(j<i){
        arr[i][j]=1;
      }
      j++;
      if(j==n){
          j=0;
          i++;
      }
  }
  printint(arr[n][n],n);
}
void printint(int arr, int n){
    
    for (int i = 0; i<n; i++){
      for(int j=0; j<n;j++){
        printf("\t%d", arr[i][j]);
    }
    }
}
    
