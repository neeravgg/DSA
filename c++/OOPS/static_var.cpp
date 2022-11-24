#include <iostream>
using namespace std;

class test
{
public:
    static int a;
    void get_a()
    {
        cout << "a ="  << a;
    }
};
int test :: a=10;
int main()
{
// test :: a = 100;
    cout << "a = " << test::a << endl;
    test t;
    t.get_a();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{


return 0;
}
