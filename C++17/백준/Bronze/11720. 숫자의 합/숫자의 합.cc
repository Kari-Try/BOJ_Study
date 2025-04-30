#include <cstdio>

int main() {
    int N, sum = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        int d;
        scanf("%1d", &d);
        sum += d;
    }
    printf("%d", sum);
    return 0;
}