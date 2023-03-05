#include <bits/stdc++.h>
using namespace std;

int kadane(int a[], int size)
{

    int max = 0, curr = 0;
    for (int i = 0; i < size; i++)
    {
        curr += a[i];
        if (curr > max)
            max = curr;
        else if (curr < 0)
            curr = 0;
    }
    return max;
}
int main()
{
    int a[] = {2, 3, -1};
    int n = sizeof(a) / sizeof(a[0]);

    // Function Call
    int max_sum = kadane(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}