#include <bits/stdc++.h>
using namespace std;

// 문제: [PCCE 기출문제] 9번 / 이웃한 칸  (Lv1, 구현·격자)
// 링크: https://school.programmers.co.kr/learn/courses/30/lessons/250125?language=cpp
// 풀이 시간:      결과:  통과 / 실패 / 힌트

// 계획 (코드 쓰기 전에 한국어로, 5분):
// 1. 준비: 고른 칸의 색 = board[h][w], count = 0,
//          dr = {-1, 1, 0, 0}, dc = {0, 0, -1, 1}
// 2. 네 방향 반복 (i = 0~3): 이웃 좌표 = (h + dr[i], w + dc[i])
//    - 이웃이 보드 밖이면 (0보다 작거나 n 이상) 건너뜀
//    - 이웃 색이 고른 칸 색과 같으면 count 증가
// 3. count 반환

int solution(vector<vector<string>> board, int h, int w) {

    int count = 0;
    int dr[] = {-1,1,0,0};
    int dc[] = {0,0,-1,1};
    int n = board.size();

    for(int i = 0; i < 4; i++){
        int nh = h + dr[i];
        int nw = w + dc[i];


        if(nh < 0 || nh >= n || nw < 0 || nw >= n) continue;

        if(board[h][w] == board[h + dr[i]][w + dc[i]]){
            count++;
        }
    }

    return count;
}

#ifdef LOCAL
int main() {
    cout << solution({{"blue", "red", "orange", "red"},
                      {"red", "red", "blue", "orange"},
                      {"blue", "orange", "red", "red"},
                      {"orange", "orange", "red", "blue"}}, 1, 1) << '\n';   // 기대값: 2
    cout << solution({{"yellow", "green", "blue"},
                      {"blue", "green", "yellow"},
                      {"yellow", "blue", "blue"}}, 0, 1) << '\n';            // 기대값: 1
}
#endif
