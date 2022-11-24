#include <bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m)
{
    if (n < m )
        return -1;

    sort(a.begin(), a.end());
    long long res = INT_MAX;
    for (int i = 0; i < n - m + 1; i++)
    {
        res = min(a[i + m - 1] - a[i], res);
    }
    return res;
}
int main()
{
    vector<long long> a = {3, 4, 1, 9, 56, 7, 9, 12};
    long long m = 5;

    cout << findMinDiff(a, a.size(), m);
    return 0;
}