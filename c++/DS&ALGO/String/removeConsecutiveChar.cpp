#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() <= 1)
            return strs.front();

        string s = strs.front(), temp;
        for (int i = 1; i < strs.size(); i++)
        {
            temp = strs[i];
            if (s.length() < temp.length())
            {
                checkStr(temp, s);
                s = temp;
            }
            else
            {
                checkStr(s, temp);
            }
        }
        return s;
    }
    void checkStr(string &res, string &temp)
    {
    loop:
        for (int i = 0; i < res.length(); i++)
        {

            if (res[i] != temp[i])
            {
                res.erase(i);

                goto loop;
            }
        }
    }
};

int main()
{
    Solution obj;
    vector<string> strs;
    strs.push_back("fl");
    strs.push_back("f");
    // strs.push_back("fltryut");

    cout << obj.longestCommonPrefix(strs);
    return 0;
}