#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int minimumDistances(vector<int>& input)
{
    int length = input.size();
    int minimum{10000};
    bool beFound{false};
    for (int index = 0; index < length; index++)
    {
        auto found{find(begin(input)+index+1, end(input),input[index])};
        if (found != end(input))
        {
          int difference = distance(begin(input)+index, found);
          if ((difference < minimum) && (difference > 0))
          {
            minimum = difference;
            beFound = true;
          }
        }
    }
    if (!beFound)
      return -1;
    else
    {
      return minimum;
    }
}

int main()
{
    int length{};
    cin >> length;
    vector<int> input(length);
    for (auto& element : input)
    {
        int value;
        cin >> value;
        element = value;
    }
    cout << minimumDistances(input);
    return 0;
}