#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(const vector<int>& input)
{
    for (auto element : input)
    {
        cout << element << ' ';
    }
    cout << endl;
}

void rotateVector(const vector<int>& input, int times)
{
    int numSize = input.size();
    vector<int> afterRotate(numSize);
    for (int index = 0; index < numSize; index++)
    {
        afterRotate[index] = input[(index+times) % numSize];
    }
    printVector(afterRotate);
}

int main()
{
    int numSize;
    int rotateTimes;
    cin >> numSize >> rotateTimes;
    vector<int> input(numSize);
    for (auto& element : input)
    {
        int value;
        cin >> value;
        element = value;
    }

    rotateVector(input, rotateTimes);

    return 0;
}
