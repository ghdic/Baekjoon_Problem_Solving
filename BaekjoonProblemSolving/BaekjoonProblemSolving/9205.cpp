/*
https://www.acmicpc.net/problem/9205

&Title
9205번 - 맥주 마시면서 걸어가기

&Question
송도에 사는 상근이와 친구들은 송도에서 열리는 펜타포트 락 
페스티벌 가려고 한다. 올해는 맥주를 마시면서 걸어가기로 했다. 출발은 
상근이네 집에서 하고, 맥주 한 박스를 들고 출발한다. 맥주 
한 박스에는 맥주가 20개 들어있다. 목이 마르면 안되기 때문에 
50미터에 한 병씩 마시려고 한다.상근이의 집에서 페스티벌이 열리는 곳은 
매우 먼 거리이다. 따라서, 맥주를 더 구매해야 할 수도 
있다. 미리 인터넷으로 조사를 해보니 다행히도 맥주를 파는 편의점이 
있다. 편의점에 들렸을 때, 빈 병은 버리고 새 맥주 
병을 살 수 있다. 하지만, 박스에 들어있는 맥주는 20병을 
넘을 수 없다.편의점, 상근이네 집, 펜타포트 락 페스티벌의 좌표가 
주어진다. 상근이와 친구들이 행복하게 페스티벌에 도착할 수 있는지 구하는 
프로그램을 작성하시오. 

&Input
첫째 줄에 테스트 케이스의 개수 t가 주어진다. (t 
≤ 50)각 테스트 케이스의 첫째 줄에는 맥주를 파는 편의점의 
개수 n이 주어진다. (0 ≤ n ≤ 100).다음 n+2개 
줄에는 상근이네 집, 편의점, 펜타포트 락 페스티벌 좌표가 주어진다. 
각 좌표는 두 정수 x와 y로 이루어져 있다. (두 
값 모두 미터, -32768 ≤ x, y ≤ 32767)송도는 
직사각형 모양으로 생긴 도시이다. 두 좌표 사이의 거리는 x 
좌표의 차이 + y 좌표의 차이 이다. (맨해튼 거리) 


&Output
각 테스트 케이스에 대해서 상근이와 친구들이 행복하게 페스티벌에 
갈 수 있으면 "happy", 중간에 맥주가 바닥나면 "sad"를 출력한다. 


&Example
-input
2
2
0 0
1000 0
1000 1000
2000 1000
2
0 0
1000 0
2000 1000
2000 2000

-output
happy
sad


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits.h>
using namespace std;

typedef struct pos {
	int y;
	int x;
}pos;

pos make_pos(int y, int x) {
	pos a;
	a.y = y;
	a.x = x;
	return a;
}
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		int n;
		scanf("%d", &n);
		vector<pos> v(n + 2);
		vector<vector<pair<int, int> > > graph(n + 2);

		for (int j = 0; j < n + 2; j++) {
			scanf("%d %d", &v[j].y, &v[j].x);
		}
		for (int j = 0; j < n + 2; j++) {
			for (int k = 0; k < n + 2; k++) {
				if (j == k)continue;
				int dist = abs(v[j].y - v[k].y) + abs(v[j].x - v[k].x);
				if (dist <= 1000)
					graph[j].push_back(make_pair(k, dist));
			}
		}
		queue<int> q;
		q.push(0);
		vector<int> dis(n + 2, INT_MAX);
		dis[0] = 0;
		while (!q.empty()) {
			int cur_node = q.front();
			q.pop();
			for (int i = 0; i < graph[cur_node].size(); ++i) {
				int next_node = graph[cur_node][i].first;
				int cost = dis[cur_node] + graph[cur_node][i].second;
				if (dis[next_node] > cost) {
					dis[next_node] = cost;
					q.push(next_node);
				}
			}
		}
		if (dis[n + 1] != INT_MAX)printf("happy\n");
		else printf("sad\n");
	}

	return 0;
}
*/