#include <algorithm>
#include <iostream>
#include <string>
// #include <stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string str = s;

        str.erase(remove_if(str.begin(), str.end(),
                            [](char c)
                            { return isspace(c) || !isalnum(c); }),
                  str.end());

        string temp = str;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        reverse(str.begin(), str.end());

        cout << str << endl;
        cout << temp;
        if (str == temp)
            return true;
        else
            return false;
    }
};
int main()
{
    Solution obj;
    obj.isPalindrome("A man, a plan, a canal: Panama");
    return 0;
}