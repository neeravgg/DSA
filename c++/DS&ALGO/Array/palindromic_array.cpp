#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int PalinArray(int a[], int n)
    {
        int left = 0, right = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (a[left] == a[right])
            {
                left++;
                right--;
            }
            else
                return 0;
        }
        return 1;
    }
    int checkArray(int num){
        string str = to_string(num);
        int left = 0, right = str.length() - 1;
        while(left == right)
        {
            if (a[left] == a[right])
            {
                left++;
                right--;
            }
            else
                return 0;
        }
        return 1;
    }
};

int main()
{
    int a[] = {111, 222, 333, 444, 555};
    int n = sizeof(a) / sizeof(int);
    Solution obj;

    cout << obj.PalinArray(a, n);

    return 0;
}