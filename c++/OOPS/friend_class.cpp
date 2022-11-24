#include <iostream>
using namespace std;
class A
{
    int y = 4;
    friend class B; // friend class
};
class B
{
private:
    int x = 5;

public:
    void print()
    {
        A a;
        cout << a.y << x;
    }
    //    void display (A &a)
    //      {
    //         cout<<”value of x is:” <<a.x;
    //      }
};
int main()
{
    //    A a;
    B b;
    //    b. display (a);
    b.print();
    return 0;
}