#include <iostream>
using namespace std;
class time
{

private:
    int hh, ss;

public:
    void get()
    {
        cout << "enter the hour";
        cin >> hh;
        cout << "enter the second";
        cin >> ss;
    }
    void show()
    {
        cout << "hh=" << hh << endl;
        cout << "ss=" << ss << endl;
    }
    // time operator +(time m)
    // {
    //     hh=hh+m.hh;
    //     ss=ss+m.ss;
    //     return(*this);

    // }
     time operator+=(time m)
    {
        this->hh += m.hh;
        this->ss += m.ss;
        return (*this);
    }
};
int main()
{
    time t1, t2;
    t1.get();
    t1.show();
    t2.get();
    t2.show();
    // t1=t1+t2;
    t1 += t2;
    t1.show();
    return 0;
}