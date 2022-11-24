#include <stdio.h>
void main(){

}
int simpleSearch(int[] a, int l, int e, int x){
    while(l<=e){
        int m = l+(e-l)/2;
        if(a[m] == x){
            return m;
        }
        else if(a[m]<x){
            l=m+1;
        }
        else if(a[m]>x){
            e=m-1;
        }
    }
return -1;
}
int recursionSearch(int[] a, int l, int e, int x){
         if(l<=e)
            int m = l+(e-l)/2;
        if(a[m] == x){
            return m;
        }
        else if(a[m]<x){
            return recursionSearch(a, m+1, e, x);
        }
        else if(a[m]>x){
            return recursionSearch(a, l, m-1, x);
        }
        return -1;
}