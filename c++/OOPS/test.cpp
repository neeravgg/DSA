#include<iostream>
using namespace std;
int main()
{
int a[5]={1,3,5,7,9};
int b[9]={2,4,6,8,10,11,12,13,14};
int n1=5; int n2=9;

int *arr = new int[n1+n2];

int i=0,j=0,k=0;

while(i<n1 && j<n2)   {
    arr[k++]= a[i++];
    arr[k++]= b[j++];
}

while(i<n1){
    arr[k++]= a[i++];

}
while(j<n2){
    arr[k++]= b[j++];

}

for(int i=0; i<n1+n2; i++){
    cout<<arr[i]<<" ";
}
 return 0;
}