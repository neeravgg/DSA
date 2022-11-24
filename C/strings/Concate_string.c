#include<stdio.h>
void main(){
    char str1[100] = "live in peace,";
    char str2[100]= " life is beautiful.";
    int i=0, j=0; char res[100];
    while(str1[i]!= '\0'){
        res[j] = str1[i];
        i++; j++;
    }
    i=0;
    while(str2[i]!='\0'){
        res[j] = str2[i];
        i++; j++;
    }
    printf("%s", res);
}