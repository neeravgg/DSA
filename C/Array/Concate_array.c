#include <stdio.h>
#include <stdbool.h>
void main(){
     int n1=5; int n2=4;
int a[n1];
input(a[n1], n1);
int d[n2];
input(d[n2], n2);
concate(a,d,n1,n2);

}
void input(int a[], int n){ 

printf("\nEnter the the array : ");
for(int i=0; i<n;i++){
    scanf("%d",&a[i]);
}
}
void concate(int a[], int d[], int n1, int n2){
int max_l; int min_l; int count=0; int size=n1+n2;  int c[size];
 bool big = false;

if(n1>n2){
 max_l =n1; 
 big =true;
 }
else{
max_l=n2;} 

for(int i=0; i<max_l; i++){
if(count<=min_l){
    if(a[i]< d[i]){
        c[count++] = a[i];
        c[count++] = d[i];
    }
   if(a[i]> d[i]){
       c[count++] = d[i];
       c[count++] = a[i];
    }
}
if(big){
c[count++] = a[i];
}
else
c[count++] = d[i];
show(c[size], size);
}
}
void show(int a[], int n){
     for (int i=0; i<n;i++){
        printf("\t%d", a[i]);
    }
}
