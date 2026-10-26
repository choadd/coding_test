#include <bits/stdc++.h>
using namespace std;

// 재풀이: 이웃한 칸  (15분, 원래 파일·대화 보지 않기)
// 링크: https://school.programmers.co.kr/learn/courses/30/lessons/250125?language=cpp
// 시작:      끝:      결과:  통과 / 15분 초과

// 계획:
// 1. 보드에서 상하좌우를 탐색한다. dw={0,0,-1,1} dh={-1,1,0,0}
// 2. 현재색과 주변이 같은색인지 탐색하여 count를 증가시킨다
// 3.

int solution(vector<vector<string>> board, int h, int w) {

    int dw[]={0,0,-1,1};
    int dh[]={-1,1,0,0};

    int count = 0;

    for(int i = 0; i < 4; i++){
        int nh = h + dh[i];
        int nw = w + dw[i];

        if(board[h][w] == board[nh][nw]){
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
