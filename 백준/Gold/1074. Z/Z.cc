#include <iostream>
using namespace std;

int main() {
    int N;
    long long r, c;
    cin >> N >> r >> c;

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        long long rb = (r >> i) & 1LL;
        long long cb = (c >> i) & 1LL;
        ans |= (rb << (2 * i + 1));
        ans |= (cb << (2 * i));
    }

    cout << ans;
    return 0;
}