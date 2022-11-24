#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    pair<long long, long long> getMinMax(long long a[], int n)
    {
        pair<long long, long long> minmax;

        minmax.first = a[0];
        minmax.second = a[0];
        for (int i = 0; i < n; i++)
        {
            minmax.second = max(minmax.second, a[i]);
            minmax.first = min(minmax.first, a[i]);
            
        }
        return minmax;
    }
};

int main()
{
    // Solution obj;
    // cout << obj.getMinMax([10,1,5]);
    return 0;
}