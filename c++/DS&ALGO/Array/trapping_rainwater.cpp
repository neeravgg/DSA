#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int size = height.size(), res = 0, j = size - 2;
        int left[size], right[size];
        left[0] = height[0];
        right[size - 1] = height[size - 1];

        for (int i = 1; i < size; i++)
        {
            left[i] = max(left[i - 1], height[i]);
            right[j] = max(right[j + 1], height[j]);
            j--;
        }
        for (int i = 0; i < size; i++)
        {
            res += min(left[i], right[i]) - height[i];
        }
        return res;
    }
};

int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    Solution obj;

    cout << obj.trap(height);
    return 0;
}