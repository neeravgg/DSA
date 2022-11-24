#include <iostream>
using namespace std;

class cons{

    protected: 
    int x;
    public:
    cons(){
        x=0;
    }

};
class derived: protected cons{
    protected:
    int y;
    public:
    derived(){
        y=0;
        cout<<x<<"\n"<<y;
    }
};
int main(){
    derived obj1;
    return 0;
}