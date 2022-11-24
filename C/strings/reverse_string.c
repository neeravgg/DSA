#include <stdio.h>
#include <string.h>
void rev_str(char str[], int start, int end)
{
    char temp;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
void main(){
    char para[]= "live in peace";
    int len = strlen(para);
    int i=0; int j=0;
    while(j<=len-1){
      for(j=i;para[j]&&para[j]!=' ';j++);
    rev_str(para,i,j-1);
     i=j+1;
    }
    printf("%s ", para);
}