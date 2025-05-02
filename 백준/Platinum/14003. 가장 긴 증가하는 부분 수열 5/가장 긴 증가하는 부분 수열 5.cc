#include <iostream>
#include <vector>
using namespace std;

int main() {

    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];


    vector<long long> d;
    d.reserve(N);
    vector<int> d_idx;
    d_idx.reserve(N);

    vector<int> pos(N), parent(N, -1);

    for (int i = 0; i < N; ++i) {
        long long x = A[i];
        auto it = lower_bound(d.begin(), d.end(), x);
        int idx = it - d.begin();

        if (it == d.end()) {
            d.push_back(x);
            d_idx.push_back(i);
        }
        else {
            *it = x;
            d_idx[idx] = i;
        }

        pos[i] = idx + 1;
        if (idx > 0) parent[i] = d_idx[idx - 1];
    }

    int length = d.size();
    cout << length << '\n';


    vector<long long> lis;
    int cur = d_idx[length - 1];
    while (cur != -1) {
        lis.push_back(A[cur]);
        cur = parent[cur];
    }

    vector<long long> reversed(lis.size());

    for (int i = 0; i < lis.size();i++) {
        reversed[i] = lis[lis.size() - i -1];
    }

    for (auto v : reversed) cout << v << ' ';
    return 0;
}
