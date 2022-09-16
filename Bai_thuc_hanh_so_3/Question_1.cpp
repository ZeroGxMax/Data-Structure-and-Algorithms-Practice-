#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int twoStacks(vector<int> firstArr, vector<int> secondArr, int terminate) {
    int result{0};
    int firstIndex{0};
    int secondIndex{0};
    int total{0};

    for (auto& element : firstArr) {
        if (total + element > terminate) {
            break;
        } else {
            total += element;
            firstIndex++;
        }
    }

    result = firstIndex;

    for (auto& element : secondArr) {
        total += element;
        secondIndex++;
        while (total > terminate && firstIndex > 0) {
            total -= firstArr.at(firstIndex-1);
            firstIndex--;
        }
        result = (total <= terminate) ?
            max({firstIndex + secondIndex, result}) : result;
    }
    return result;
}

int main()
{
    int m {};
    int n {};
    int terminate {};
    cin >> m >> n >> terminate;

    vector<int> firstArr(m);
    vector<int> secondArr(n);

    for (auto& element : firstArr) {
        int value;
        cin >> value;
        element = value;
    }

    for (auto& element : secondArr) {
        int value;
        cin >> value;
        element = value;
    }

    cout << twoStacks(firstArr, secondArr, terminate);
    
    return 0;
}