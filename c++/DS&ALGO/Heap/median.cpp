#include <stdc++.h>
#include <queue>
#include <iostream>
#include <vector>
using namespace std;

class median
{
public:
    priority_queue<int, vector<int>> max;
    priority_queue<int, vector<int>, greater<int>> min;

    void create(int x);
    int value();
};
void median ::create(int x)
{

    if (max.size() == min.size())
    {
        if (max.size() == 0)
        {
            min.push(x);
            return;
        }

        if (x < max.top())
            max.push(x);

        else
            min.push(x);
    }
    else
    {

        if (max.size() > min.size())
        {

            if (x >= max.top())
            {
                min.push(x);
            }
            else
            {
                min.push(max.top());
                max.pop();
                max.push(x);
            }
        }
        else
        {
            if (x <= min.top())
            {
                max.push(x);
            }
            else
            {
                max.push(min.top());
                min.pop();
                min.push(x);
            }
        }
    }
}

int median::value()
{
    if (max.size() == min.size())
    {
        int item = max.top() + min.top() / 2;
        return item;
    }
    else if (max.size() > min.size())
        return max.top();
    else
        return min.top();

    return -1;
}

int main()
{
    return 0;
}