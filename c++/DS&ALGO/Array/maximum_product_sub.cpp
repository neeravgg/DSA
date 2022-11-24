#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    if (nums.size() <= 1)
        return nums[0];

    int currmax = nums[0], currmin = nums[0], res = nums[0], temp;
    for (int i = 1; i < nums.size(); i++)
    {

        temp = currmax;
        currmax = max({currmax * nums[i], currmin * nums[i], nums[i]});
        currmin = min({temp * nums[i], currmin * nums[i], nums[i]});
        res = max(currmax, res);
    }
    return res;
}

int main()
{
    vector<int> nums = {-2, 3, -4};

    cout << maxProduct(nums);
    return 0;
}