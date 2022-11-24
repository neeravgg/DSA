#include <iostream>
using namespace std;

void heapify(int arr[], int n, int root)
{
    int larger = root;
    int L = 2 * root + 1;
    int R = 2 * root + 2;

    if (R < n && arr[R] < arr[larger])
        larger = R;
    if (L < n && arr[L] < arr[larger])
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
void deleteHeap(int arr[], int &n)
{
    swap(arr[0], arr[n - 1]);
    n--;
    heapify(arr, n, 0);
}

int rope(int arr[], int n)
{
    int sum, cost = 0;
    int count = 0;
    while (n > 0)
    {
        sum += arr[0];
        deleteHeap(arr, n);
        count++;
        if (count > 1)
        {
            cost += sum;
            count = 0;
            sum = 0;
        }
    }
    return cost;
}

int main()
{
    int arr[] = {2, 5, 4, 8, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    rope(arr, n); 
    return 0;
}