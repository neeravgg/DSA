#include <iostream>
using namespace std;

int main()
{
    int x, k;
    int min = 0;
    cin >> x >> k;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        if (arr[i]>k)
        {
            min += arr[i] - k;
        }
    }
    cout << min;

    return 0;
}