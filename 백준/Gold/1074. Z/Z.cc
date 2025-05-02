#include <iostream>

using namespace std;

int main() {

    int N;
    long long r, c;
    cin >> N >> r >> c;

    long long order = 0;

    for (int k = N; k > 0; --k) {
        long long half = 1LL << (k - 1);
        int rowBlock = r / half;
        int colBlock = c / half;
        int quadrant = rowBlock * 2 + colBlock;
        order += quadrant * (half * half);
        r %= half;
        c %= half;
    }

    cout << order;
    return 0;
}
