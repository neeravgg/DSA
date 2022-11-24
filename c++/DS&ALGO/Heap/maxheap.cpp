#include <iostream>
// #include <stdc++.h>
using namespace std;

void heapify(int arr[], int n, int root)
{
    int larger = root;
    int L = 2 * root + 1;
    int R = 2 * root + 2;

    if (R < n && arr[R] > arr[larger])
        larger = R;
    if (L < n && arr[L] > arr[larger])
        larger = L;

    if (larger != root)
    {
        swap(arr[root], arr[larger]);
        heapify(arr, n, larger);
    }
}
void create(int arr[], int n)
{

    int root = (n / 2) - 1;
    for (int i = root; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}
void printheap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    create(arr, n);
    printheap(arr, n);
    return 0;
}