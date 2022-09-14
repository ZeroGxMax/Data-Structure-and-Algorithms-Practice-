#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> input(n);
    for (auto& element : input)
    {
        int value;
        cin >> value;
        element = value;
    }
    sort(begin(input), end(input));
    int length = input.size();
    if (length % 2 == 0)
    {
        int middleSecond = length/2;
        int middleFirst = middleSecond-1;
        cout << (static_cast<double>(input[middleFirst])+input[middleSecond])/2 << endl;
    }
    else
    {
        cout << input[length/2] << endl;
    }
    return 0;
}
