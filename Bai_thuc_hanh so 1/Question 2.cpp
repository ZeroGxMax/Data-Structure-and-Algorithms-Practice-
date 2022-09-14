#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int localMax(vector<int>& subArray)
{
    if ((subArray[1] > subArray[0]) && (subArray[1] > subArray[2]))
    {
        return subArray[1];
    }
    else return 0;
}

int sumLocalMax(vector<int>& input, int index)
{
    static int sum{0};
    int first_index{0};
    int last_index = input.size()-1;
    if (index < last_index)
    {
        vector<int> subArray(3);
        subArray.insert(begin(subArray), begin(input)+index-1, begin(input)+index+2);
        sum += localMax(subArray);
        return sumLocalMax(input, ++index);
    }
    else
        return sum;
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
    cout << sumLocalMax(input, 1);
    return 0;
}
