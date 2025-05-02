#include <iostream>
using namespace std;

int main() {


    int N;
    int r, c;
    cin >> N >> r >> c;

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int rb = (r >> i) & 1LL;
        int cb = (c >> i) & 1LL;
        ans |= (rb << (2 * i + 1));
        ans |= (cb << (2 * i));
    }

    cout << ans;
    return 0;
}