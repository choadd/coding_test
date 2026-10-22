#include <bits/stdc++.h>
using namespace std;

// 문제: [PCCE 기출문제] 9번 / 이웃한 칸  (Lv1, 구현·격자)
// 링크: https://school.programmers.co.kr/learn/courses/30/lessons/250125?language=cpp
// 풀이 시간:      결과:  통과 / 실패 / 힌트

// 계획 (코드 쓰기 전에 한국어로, 5분):
// 1.
// 2.
// 3.

int solution(vector<vector<string>> board, int h, int w) {

    return 0;
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
