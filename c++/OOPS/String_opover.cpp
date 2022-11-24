#include <iostream>
#include <string>
using namespace std;

class String
{
protected:
    string str;

public:
    String()
    {
        str = "Nothing to say here";
    }
    String(string str)
    {
        this->str = str;
    }
    String operator +(String s){
        str= str + s.str;
        return(*this);
    }
    void display()
    {
        cout << this->str;
    }
};
int main()
{
    String str1("Welcome"), str2(" to operator overloading."), str3;
    str3 = str1+str2;
    str3.display();
    return 0;
}