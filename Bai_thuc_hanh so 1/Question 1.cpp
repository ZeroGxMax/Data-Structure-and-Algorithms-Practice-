#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(vector<int>& myVector)
{
    for (auto element : myVector)
    {
        cout << element << ' ';
    }
    cout << endl;
}

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

    int position{};
    int insertValue{};
    cin >> insertValue >> position;

    input.insert(begin(input)+position-1, insertValue);

    printVector(input);

    return 0;
}
