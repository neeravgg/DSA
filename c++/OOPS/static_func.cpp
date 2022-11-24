#include <iostream>
using namespace std;

class Test
{
public:
    static void read(int x, int y) // static member function
    {
        if (x > y)
            cout << "x is greater" ;
        else if (y > x)
            cout << "y is greater" ;
        else
            cout <<  "Both are equal :";
    }
};
int main()
{
    // Test t;
    // t.read(10, 7);
Test :: read (20, 30);
// Test :: read (5, 5); 
return 0;
}