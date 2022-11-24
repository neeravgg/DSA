#include <iostream>
using namespace std;
class one{
    protected:
    int num1;
    public:
    void get1(){
        cout<<"Enter num1: ";
        cin>>num1;
    }
    
};
class two: protected virtual one{
 protected:
    int num2;
    public:
    void get2(){
        one::get1();
        cout<<"Enter num2: ";
        cin>>num2;
    }
};
class three: protected virtual one{
 protected:
    int num3;
    public:
    void get3(){
        cout<<"Enter num3: ";
        cin>>num3;
    }
};
class four: private two, private three{
 protected:
    int num4;
    public:
    void get4(){
        two::get2();
        three::get3();

        cout<<"Enter num4: ";
        cin>>num4;
    }
    void sum(){
        int sum = num1+num2+num3+num4;
        cout<<"the sum is:"<<sum;
    }
};

int main(){
    four obj;
    obj.get4();
    obj.sum();
    }