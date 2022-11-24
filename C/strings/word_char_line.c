#include<stdio.h>
void main(){
    char str1[100] = "live in peace, life is beautiful. \n heyyy there";
    int i=0, ch=0, word=0, line=0;
  
    while(str1[i]!= '\0'){
        if(str1[i] == '\n' || str1[i]=='.'){
             line++;
        }
        
        if(str1[i] == ' ' || str1[i]=='\t' ){
            word++;
        }
        
        ch++;
        i++;
    }
 printf("\nCharacter counts = %d\n", ch);
   printf("Word counts = %d\n", word);
   printf("Line counts = %d\n", line);
}