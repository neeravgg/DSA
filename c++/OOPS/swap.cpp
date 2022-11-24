#include <iostream>
using namespace std;

// void swap(int &x, int &y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }
class swapping
{
private:
    int x;
    int y;

public:
    void swap()
    {
        int temp = x;
        x = y;
        y = temp;
    }
    void set()
    {
        cout << "Enter the First variable: ";
        cin >> x;
        cout << "Enter the Second variable: ";
        cin >> y;
    }
    void get()
    {
        cout << "First variable: " << x << "\t";
        cout << "Second variable: " << y << "\t";
    }
};

int main()
{

    swapping obj;
    // obj.x= *n;
    // obj.y= *y;
    obj.set();
    obj.swap();
    obj.get();

    return 0;
}