#include <algorithm>
#include <iostream>
#include <string>
// #include <stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }
        string str = s, temp = t;
        bool count;
    loop:
        for (int i = 0; i < str.length(); i++)
        {
            for (int j = 0; j < temp.length(); j++)
            {
                if (str[i] == temp[j])
                {
                    str.erase(i, 1);
                    temp.erase(j, 1);
                    cout << str << endl;
                    cout << temp << endl;
                    count = true;
                    goto loop;
                }
                else
                    count = false;
            }
            if (count == false)
            {
                return false;
            }
        }
        if (count == true)
            return true;
        else
            return false;
    }
};
int main()
{
    Solution obj;
    cout << obj.isAnagram("aacc", "ccac");
    return 0;
}