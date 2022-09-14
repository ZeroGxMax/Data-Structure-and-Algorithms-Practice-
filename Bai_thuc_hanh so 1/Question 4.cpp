#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int sumOfColumn(vector<vector<int>>& input, int column, int numRow)
{
    int sum{0};
    for (int row = 0; row < numRow; row++)
    {
        sum += input[row][column];
    }
    return sum;
}

int main()
{
    int numRow{};
    int numColumn{};
    cin >> numRow >> numColumn;
    vector<vector<int>> input(numRow);
    for (int row = 0; row < numRow; row++)
    {
        for (int column = 0; column < numColumn; column++)
        {
            int value;
            cin >> value;
            input[row].push_back(value);
        }
    }
    for (int column = 0; column < numColumn; column++)
    {
        cout << sumOfColumn(input, column, numRow) << ' ';
    }
    cout << endl;

    return 0;
}
