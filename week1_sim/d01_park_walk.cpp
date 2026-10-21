#include <bits/stdc++.h>
using namespace std;

// 문제: 공원 산책  (Lv1, 구현·시뮬레이션)
// 링크: https://school.programmers.co.kr/learn/courses/30/lessons/172928
// 풀이 시간:      결과:  통과 / 실패 / 힌트

vector<int> solution(vector<string> park, vector<string> routes) {
    int H = park.size(), W = park[0].size();

    // 1단계: S 위치 찾기
    int r = 0, c = 0;
    for (int i = 0; i < H; i++)
        for (int j = 0; j < W; j++)
            if (park[i][j] == 'S') { r=i; c=j; }

    // 2단계: 명령 하나씩
    for (string& cmd : routes) {
        char d = cmd[0];
        int n = stoi(cmd.substr(2));

        int dr = 0, dc = 0;               // 한 칸 갈 때 행/열 변화량
        if (d == 'N') dr = -1;
        if (d == 'S') dr += 1;
        if (d == 'W') dc -= 1;
        if (d == 'E') dc += 1;
        // TODO: S, W, E 도 채우기

        bool ok = true;
        int nr = r, nc = c;
        for (int k = 0; k < n; k++) {      // 한 칸씩 가보면서 검사
            nr += dr; nc += dc;
            if (nr < 0 || nr >= H || nc < 0 || nc >= W || park[nr][nc] == 'X') {
                nr -= dr; nc -= dc;
                ok = false;
                break;
            }
            // TODO: 밖으로 나갔거나 'X'면  ok = false; break;
        }
        if (ok) { /* TODO: r, c를 nr, nc로 */ 
            r=nr; c=nc;
        }
    }

    // 3단계
    return {r, c};
}
#ifdef LOCAL
template <class T> void show(const vector<T>& v) {
    for (auto& x : v) cout << x << ' ';
    cout << '\n';
}
int main() {
    show(solution({"SOO", "OOO", "OOO"},        {"E 2", "S 2", "W 1"}));   // 기대값: 2 1
    show(solution({"SOO", "OXX", "OOO"},        {"E 2", "S 2", "W 1"}));   // 기대값: 0 1
    show(solution({"OSO", "OOO", "OXO", "OOO"}, {"E 2", "S 3", "W 1"}));   // 기대값: 0 0
}
#endif
