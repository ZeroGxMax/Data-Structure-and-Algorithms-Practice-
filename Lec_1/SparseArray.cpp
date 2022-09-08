#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;

void matchingString(vector<string>& input, vector<string> query)
{
  for (auto& queryElement : query)
  {
    cout << count(begin(input), end(input), queryElement) << endl;
  }
}

int main()
{
    int inputSize;
    cin >> inputSize;
    vector<string> input(inputSize);
    for (auto& element : input)
    {
        string value;
        cin >> value;
        element = value;
    }

    int querySize;
    cin >> querySize;
    vector<string> query(querySize);
    for (auto& element : query)
    {
        string value;
        cin >> value;
        element = value;
    }

    matchingString(input, query);

    return 0;
}