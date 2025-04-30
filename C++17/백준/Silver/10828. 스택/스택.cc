#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> Stack;
    while (N--) {
        string Op;
        cin >> Op;

        if (Op == "push") {
            int x;
            cin >> x;
            Stack.push_back(x);
        }
        else if (Op == "pop") {
            if (Stack.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << Stack.back() << '\n';
                Stack.pop_back();
            }
        }

        else if (Op == "top") {
            if (Stack.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << Stack.back() << '\n';
            }
        }
        else if (Op == "size") {
            cout << Stack.size() << '\n';
        }
        else if (Op == "empty") {
            cout << (Stack.empty() ? 1 : 0) << '\n';
        }
    }
    return 0;
}
