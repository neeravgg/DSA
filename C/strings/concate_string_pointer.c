#include<stdio.h>
void main(){
    char str1[100] = "live in peace,";
    char str2[100]= " life is beautiful.";
    int i=0; char res[100];
    char *m1=str1;
    char *m2 = str2;
    while(str1[i]!= '\0'){
        m1++;
        i++; 
    }
    i=0;
    while(str2[i]!='\0'){
    *m1 = *m2;
    m1++; m2++;
        i++;
    }
    printf("%s", str1);
}