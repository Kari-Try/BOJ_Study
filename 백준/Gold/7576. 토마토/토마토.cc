#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

    int M, N;
    cin >> M >> N;

    vector<vector<int>> grid(N, vector<int>(M));
    vector<vector<int>> dist(N, vector<int>(M, -1));
    queue<pair<int, int>> q;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 1) {
                dist[i][j] = 0;
                q.emplace(i, j);
            }
        }
    }

    const int dr[4] = { -1, 1, 0, 0 };
    const int dc[4] = { 0, 0, -1, 1 };

    int maxDay = 0;

    while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        int r = cur.first;
        int c = cur.second;
        for (int d = 0; d < 4; d++) {
            int nr = r + dr[d], nc = c + dc[d];

            if (nr < 0 || nr >= N || nc < 0 || nc >= M) continue;
            if (grid[nr][nc] != 0) continue;

            grid[nr][nc] = 1;
            dist[nr][nc] = dist[r][c] + 1;
            maxDay = max(maxDay, dist[nr][nc]);
            q.emplace(nr, nc);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (grid[i][j] == 0) {
                cout << -1 << "\n";
                return 0;
            }
        }
    }

    cout << maxDay << "\n";
    return 0;
}
