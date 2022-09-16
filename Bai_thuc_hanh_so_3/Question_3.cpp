#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> input{};
    set<int> numbers{};
    vector<int> output{};
    while (n > 0) {
        int operation;
        cin >> operation;
        switch (operation)
        {
        case 1:
            int value;
            cin >> value;
            input.push_back(value);
            numbers.insert(value);
            break;
        case 2:
            numbers.erase(*(input.end()-1));
            input.pop_back();
            break;
        case 3:
            output.push_back(*numbers.begin());
            break;
        }
        n--;
    }

    for (auto element : output) {
        cout << element << endl;
    }

    return 0;
}