#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        if(nums.size() <=1){
            return nums;
        }
        vector<int> res;
        res.push_back(nums[0]);
        int product = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            res.push_back(res[i - 1] * nums[i]);
        }
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (i == 0)
                res[i] = product;
            else
                res[i] = res[i - 1] * product;
            product *= nums[i];
        }

        return res;
    }
};

int main()
{
    vector<int> height = {1, 2, 3, 4};

    Solution obj;

    cout << obj.productExceptSelf(height)[0];
    return 0;
}