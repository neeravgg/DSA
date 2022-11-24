#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
// #include <stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int i = 0, res = 0;
        unordered_map<char, int> mp;

        for (int j = 0; j < s.length(); j++)
        {
            if (mp[s[j]] > 0)
                i = max(mp[s[j]], i);

            res = max(res, j - i + 1);
            mp[s[j]] = j + 1;
        }
        return res;
    }
};

int main()
{
    Solution obj;
    cout << obj.lengthOfLongestSubstring("abcabcbb");
    return 0;
}