#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        vector<int> temp = intervals[0];

        for (auto i : intervals)
        {
            if (i[0] <= temp[1])
            {
                temp[1] = max(temp[1], i[1]);
            }
            else
            {
                res.push_back(temp);
                temp = i;
            }
        }
        res.push_back(temp);
        return res;
    }
};

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    Solution obj;

    for (vector<int> i : obj.overlappedInterval(intervals))
        for (int j : i)
            cout << j << endl;
    return 0;
}