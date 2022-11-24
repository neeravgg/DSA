#include <iostream>
using namespace std;

class Time
{
private:
    int hh;
    int mm;

public:
    Time()
    {
        hh = 0;
        mm = 0;
    }
    void read()
    {
        cout << "\n Enter Hours: ";
        cin >> hh;
        cout << "\n Enter Minutes: ";
        cin >> mm;
    }
    void display()
    {
        cout << hh << ":" << mm;
    }
};

void main(){
    Time t1, t2, t3;
    t1.read();
    t1.display();
    t2.read();
    t2.display();
    
}
void add(Time a, Time b){

}