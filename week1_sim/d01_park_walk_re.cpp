#include <bits/stdc++.h>
using namespace std;

// 재풀이: 공원 산책  (15분, 원래 파일·대화 보지 않기)
// 링크: https://school.programmers.co.kr/learn/courses/30/lessons/172928?language=cpp
// 시작:      끝:      결과:  통과 / 15분 초과

// 계획:
// 1. start 위치 찾기
// 2. 현재 가려는 방향에 장애물이 있는지 판별하여 가거나 취소
// 3. 마지막 좌표 return

vector<int> solution(vector<string> park, vector<string> routes) {

    int sx = 0; int sy =0;

    for(int i = 0; i < park.size(); i++){
        for(int j = 0; j < park[0].size(); j++){
            if(park[i][j] == 'S'){
                sx = j;
                sy = i;
            }
        }
    }

    //NEWS
    // int dr[] = {-1,0,1,0};
    // int dc[] = {0,1,0,-1};


    for(int i = 0; i < routes.size(); i++){
        char d = routes[i][0];
        int n = stoi(routes[i].substr(2));

        int dr,dc =0;

        if(d=='N')dr-=1;
        if(d=='E')dc+=1;
        if(d=='W')dr+=1;
        if(d=='S')dc-=1;




    }

    return {};
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
