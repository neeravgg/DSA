#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    int i = m - 1, j = n - 1;
    int *arr = new int[];
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[i + j + 1] = nums1[i];
            i--;
        }
        else
        {
            nums1[i + j + 1] = nums2[j];
            j--;
        }
    }
    while (j >= 0)
    {
        nums1[i + j + 1] = nums2[j];
        j--;
    }
}

int main()
{
    vector<int> m = {2, 3, 4};
    vector<int> n = {9, 15, 2, 5};

    merge(m, m.size(), n, n.size());
    return 0;
}