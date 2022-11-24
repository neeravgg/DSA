#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]] = mp[nums[i]] + 1;

            if (mp[nums[i]] > 1)
                return true;
        }
        return false;
    }
};

int main()
{
    vector<int> vec = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    Solution obj;
    cout << obj.containsDuplicate(vec);
    return 0;
}