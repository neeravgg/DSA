#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {

        vector<vector<string>> s;
        vector<string> v;

        for (int i = 0; i < strs.size(); i++)
        {
            sort(strs[i].begin(), strs[i].end());
            v.push_back(strs[i]);

            for (int j = i + 1; j < strs.size(); j++)
            {
                sort(strs[j].begin(), strs[j].end());

                if (strs[i] == strs[j])
                {
                    v.push_back(strs[j]);
                }
            }
            s.push_back(v);
        
            v.clear();
        }
        return s;
    }
};

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    Solution obj;
    obj.groupAnagrams(strs);
    return 0;
}