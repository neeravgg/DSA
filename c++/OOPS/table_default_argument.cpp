#include <iostream>
using namespace std;

class table{
    public:
    int x;
    void mul(){
        for(int i=0; i<10; i++){
            cout<<"\n"<<x*i;
        }
    }
};

int main(){
    table obj(5);
    return 0;
}