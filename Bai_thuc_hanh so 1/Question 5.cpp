#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
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
    int average = accumulate(begin(input), end(input), 0)/static_cast<double>(input.size());
    int count{0};
    for (auto element : input)
    {
        if (element > average)
            count++;
    }
    cout << count << endl;
    return 0;
}
