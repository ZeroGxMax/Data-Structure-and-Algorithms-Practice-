#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string>
using namespace std;

void solve(int n) {

  vector<int> points{};
  int total{0};
  while (n--) {
    string value{};
    getline(cin>>ws, value);

    if (value != "C" && value != "D" && value != "+") {
      int iValue = stoi(value);
      total += iValue;
      points.push_back(iValue);
    } else if (value == "C") {
      int lastPoint = points[points.size() - 1];
      total -= lastPoint;
      points.pop_back();
    } else if (value == "D") {
      int lastPoint = points[points.size() - 1];
      total += lastPoint * 2;
      points.push_back(lastPoint * 2);
    } else if (value == "+") {
      int lastPoint = points[points.size() - 1];
      int prevLastPoint = points[points.size() - 2];
      total += lastPoint + prevLastPoint;
      points.push_back(lastPoint + prevLastPoint);
    }
  }
  cout << total << endl;
}

int main()
{
  queue<string> gamePoints {};
  int n;
  cin >> n;
  int totalPoint{0};

  solve(n);

  return 0;
}