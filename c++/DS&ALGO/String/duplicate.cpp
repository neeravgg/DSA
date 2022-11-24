#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
// #include <stdc++.h>
using namespace std;

class Solution
{
public:
    string printDuplicate(string str)
    {
        char c;
        string s = str, res;
        bool flag = false;

        for (int i = 0; i < s.length() - 1; i++)
        {
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    flag = true;
                    c = s[i];
                    s.erase(j, 1);
                }
            }
            if (flag)
            {
                res.push_back(c);
                flag = false;
            }
        }
        return res;
    }
};

int main()
{
    Solution obj;
    cout << obj.printDuplicate("aadfbss");
    return 0;
}