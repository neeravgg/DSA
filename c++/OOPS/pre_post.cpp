#include <iostream>
using namespace std;

class op
{
public:
    int x;
    op()
    {
        x = 0;
    }
    int operator ++()
    {
        return x++;
    }
    int operator ++(int)
    {
        return ++x;
    }
    void display()
    {
        cout << x;
    }
};
int main()
{
    op obj;
    obj++;
    ++obj;
    obj.display();
}