#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)

                    change(matrix, i, j);
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    void change(vector<vector<int>> &matrix, int row, int col)
    {
        for (int i = 0; i < matrix.size(); i++)
        {

            matrix[row][i] = 0;
        }
        for (int i = 0; i < matrix[0].size(); i++)
        {

            matrix[i][col] = 0;
        }
    }
};

int main()
{
    vector<vector<int>> vec = {{1, 1, 1}, {1, 1, 0}, {1, 1, 1}};

    Solution obj;
    obj.setZeroes(vec);
    return 0;
}