#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxarea = 0;
        int start = 0;
        int end = height.size() - 1;
        while (start < end)
        {
            int width = end - start;
            maxarea = max(maxarea, min(height[start], height[end]) * width);
            if (height[start] <= height[end])
                start++;
            else
                end--;
        }
        return maxarea;
    }
};

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    Solution obj;

    cout << obj.maxArea(height);
    return 0;
}