#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    if (prices.size() <= 1)
        return 0;

    int min_num = INT_MAX, res = 0;

    for (int i = 0; i < prices.size(); i++)
    {
        min_num = min(min_num, prices[i]);
        if (min_num < prices[i])
        {
            res = max(prices[i] - min_num, res);
        }
    }
    return res;
}
int main()
{
    vector<int> a = {7, 6, 4, 3, 1};

    cout << maxProfit(a);
    return 0;
}