#include <bits/stdc++.h>
using namespace std;

// 문제: 바탕화면 정리  (Lv1, 구현·격자)
// 링크: https://school.programmers.co.kr/learn/courses/30/lessons/161990?language=cpp
// 풀이 시간:      결과:  통과 / 실패 / 힌트

// 계획 (코드 쓰기 전에 한국어로, 5분):
// 1.
// 2.
// 3.

vector<int> solution(vector<string> wallpaper) {

    return {};
}

#ifdef LOCAL
template <class T> void show(const vector<T>& v) {
    for (auto& x : v) cout << x << ' ';
    cout << '\n';
}
int main() {
    show(solution({".#...", "..#..", "...#."}));                                              // 기대값: 0 1 3 4
    show(solution({"..........", ".....#....", "......##..", "...##.....", "....#....."}));    // 기대값: 1 3 5 8
    show(solution({".##...##.", "#..#.#..#", "#...#...#", ".#.....#.", "..#...#..", "...#.#...", "....#...."}));  // 기대값: 0 0 7 9
    show(solution({"..", "#."}));                                                              // 기대값: 1 0 2 1
}
#endif
