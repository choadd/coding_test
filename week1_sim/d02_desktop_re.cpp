#include <bits/stdc++.h>
using namespace std;

// 재풀이: 바탕화면 정리  (15분, 원래 파일·대화 보지 않기)
// 링크: https://school.programmers.co.kr/learn/courses/30/lessons/161990?language=cpp
// 시작:      끝:      결과:  통과 / 15분 초과

// 계획:
// 1. 각 줄을 순회하면서, r과 c의 최대 최소값을 구한다
// 2. 시작점과 끝점에 대한 좌표를 정의
// 3. 시작점, 끝점 return

vector<int> solution(vector<string> wallpaper) {
    int sx =50, sy = 50;
    int ex =0, ey = 0;

    for(int i = 0; i < wallpaper.size(); i++){
        for(int j = 0; j < wallpaper[0].size(); j++){
            char ch = wallpaper[i][j];

            if(ch == '#'){
                if(sx > i){
                    sx = i;
                }
                if(sy > j){
                    sy = j;
                }
                if(ex < i){
                    ex = i;
                }
                if(ey < j){
                    ey = j;
                }
            }

        }
    }

    return {sx, sy, ex+1, ey+1};
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
