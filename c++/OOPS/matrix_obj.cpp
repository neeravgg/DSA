#include <iostream>
using namespace std;
#define a 3
#define b 3


class matrix
{
public:

    int arr[a][b];

    
    void input()
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << "\t" << arr[i][j];
            }
            cout << "\n";
        }
    }
};

int main()
{
    matrix obj;
    obj.input();
    obj.display();
}