#include <bits/stdc++.h>
using namespace std;

// 문제: 바탕화면 정리  (Lv1, 구현·격자)
// 링크: https://school.programmers.co.kr/learn/courses/30/lessons/161990?language=cpp
// 풀이 시간:      결과:  통과 / 실패 / 힌트

// 계획 (코드 쓰기 전에 한국어로, 5분):
// 초기화 : 최소값 2개는 lux, luy 고 최대값 2개는 rdx, rdy 로 구한다
// 모든 칸을 돌면서 #이면 : 행으로 lux, rdx 갱신, 열로 luy, rdy 를 갱신
// 반환 : 끝점 쪽 두 값에 +1 하고 lux, luy, rdx, rdy return

vector<int> solution(vector<string> wallpaper) {

    int lux=50; int luy=50; int rdx=0; int rdy = 0;

    for(int i = 0; i < wallpaper.size(); i++){
        for(int j = 0; j < wallpaper[i].size(); j++){
            char ch = wallpaper[i][j];

            if(ch == '#'){
                if(lux > i){
                    lux = i;
                }
                if(luy > j){
                    luy = j;
                }
                if(rdx < i){
                    rdx = i;
                }
                if(rdy < j){
                    rdy = j;
                }
            }

        }
    }

    return {lux, luy, rdx+1, rdy+1};
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
