#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
// #include <stdc++.h>
using namespace std;

class Solution
{
public:
    vector<char> vec;
    bool isValid(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case ')':
                if (vec.empty() || vec.back() != '(')
                    return false;
                else if (vec.back() == '(')
                    vec.pop_back();
                break;
            case '}':
                if (vec.empty() || vec.back() != '{')
                    return false;
                else if (vec.back() == '{')
                    vec.pop_back();
                break;
            case ']':
                if (vec.empty() || vec.back() != '[')
                    return false;
                else if (vec.back() == '[')
                    vec.pop_back();
                break;

            default:
                vec.push_back(s[i]);
                break;
            }
        }
        if (vec.empty())
            return true;
        else
            return false;
    }
};

int main()
{
    Solution obj;
    cout << obj.isValid("(])");
    return 0;
}