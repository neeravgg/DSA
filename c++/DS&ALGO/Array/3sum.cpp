#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        unordered_map<int, int> mp;
        int temp = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                temp = -nums[i] - nums[j];
                if (mp[temp] > 0)
                    res.push_back({temp, nums[i], nums[j]});
            }
            mp[nums[i]] = 1;
        }
        return res;
    }
};

int main()
{
    vector<int> nums = {0, 1, -1};
    Solution obj;
    vector<vector<int>> res = obj.threeSum(nums);
    cout << res[0][1];
    return 0;
}