#include <iostream>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

void query(queue<int>& input, int operation, int x = 0)
{
    if (operation == 1) {
        // Them phan tu x vao cuoi day so
        input.push(x);
    } else if (operation == 2) {
        // Xoa phan tu dau tien cua day so
        input.pop();
    } else if (operation == 3) {
        // In phan tu dau tien cua day so
        cout << input.front() << endl;
    }
}

void printVector(vector<int> operations) {
    for (auto& element : operations) {
        cout << element << ' ';
    }
    cout << endl;
}

int main()
{
    queue<int> input{};
    int times{};
    cin >> times;
    vector<int> operations{};
    vector<int> number{};
    int index{0};

    for (int i = 0; i < times; i++) {
        // Doc ma lenh
        int value;
        cin >> value;
        operations.push_back(value);
        // Neu ma lenh bang 1 thi doc them phan tu
        if (operations[i] == 1) {
            cin >> value;
            number.push_back(value);
            index++;
        }
    }

    index = 0;
    // Thuc hien truy van
    for (int i = 0; i < times; i++) {
        if (operations[i] == 1) {
            query(input, operations[i], number[index]);
            index++;
        } else {
            query(input, operations[i]);
        }
    }
    // printVector(number);
    
    return 0;
}