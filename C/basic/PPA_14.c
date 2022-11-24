#include <stdio.h>
int main(){
    int num;
     int i=1;
     int tab;
    printf("please the enter the numnber: ");
    scanf("%d", &num);
    while(i <=10){
        tab = i*num;
        printf("\n %d x %d = %d", num, i, tab);
        i++;
    }

    
}