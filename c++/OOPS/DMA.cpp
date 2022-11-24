#include <iostream>
using namespace std;

class dynamic{
    int *ptr;
    int size;
    public:
    dynamic(int p){
        size= p;
        ptr = new int[size];
    }
    void read(){
        for(int i=0; i<size; i++){
            cin>>ptr[i];
        }
    }
    void display(){
        for(int i=0; i<size; i++){
            cout<<ptr[i];
        }
    }
    ~dynamic(){
        delete ptr;
        
    }
};

int main(){
    int z;
    cin>>z;
    dynamic obj(z);
    obj.read();
    obj.display();
return 0;
}