#include<iostream>
using namespace std;
class test{
        public:
        test(int x, int y){
            int sum=x+y;
            cout<<"the value of sum is:"<<sum;
        }
};
int main(){

    test c(2,3);
    return 0;
}