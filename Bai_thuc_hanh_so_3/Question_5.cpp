#include <iostream>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

void printStack(stack<int> myStack) {
    while (!myStack.empty()) {
        cout << myStack.top() << ' ';
        myStack.pop();
    }
    cout << endl;
}

int main()
{
    int m, n, p;
    cin >> m >> n >> p;
    int sumFirst{0};
    int sumSecond{0};
    int sumThird{0};

    vector<int> firstArr(m);
    vector<int> secondArr(n);
    vector<int> thirdArr(p);

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

    for (auto& element : thirdArr) {
        int value;
        cin >> value;
        element = value;
    }


    stack<int> firstSt{};
    stack<int> secondSt{};
    stack<int> thirdSt{};

    int height{0};
    for (int i = 0; i < m; i++) {
        int value = firstArr[firstArr.size()-1-i];
        height += value;
        firstSt.push(height);
    }

    height = 0;
    for (int i = 0; i < n; i++) {
        int value = secondArr[secondArr.size()-1-i];
        height += value;
        secondSt.push(height);
    }

    height = 0;
    for (int i = 0; i < p; i++) {
        int value = thirdArr[thirdArr.size()-1-i];
        height += value;
        thirdSt.push(height);
    }

    // cout << firstSt.top() << ' ' << secondSt.top() << ' ' << thirdSt.top() << endl;

    int maxHeight{};

    while (!firstSt.empty() && !secondSt.empty() && !thirdSt.empty()) {
        int firstHeight = firstSt.top();
        int secondHeight = secondSt.top();
        int thirdHeight = thirdSt.top();
        if (firstHeight == secondHeight && secondSt.top() == thirdHeight) {
            maxHeight = firstSt.top();
            break;
        }
        if (firstHeight >= secondHeight && firstHeight >= thirdHeight) {
            firstSt.pop();
        }
        else if (secondHeight >= firstHeight && secondHeight >= thirdHeight) {
            secondSt.pop();
        }
        else if (thirdHeight >= firstHeight && thirdSt.top() >= secondHeight) {
            thirdSt.pop();
        } 
    }

    cout << maxHeight;

    return 0;
}