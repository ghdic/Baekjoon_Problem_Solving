/*
https://www.acmicpc.net/problem/3850

&Title
3850번 - Jumping monkey

&Question
You are a hunter chasing a monkey in 
the forest, trying to shoot it down with your 
all-powerful automatic machine gun. The monkey is hiding somewhere 
behind the branches of one of the trees, out 
of your sight. You can aim at one of 
the trees and shoot; your bullets are capable of 
going through the branches and killing the monkey instantly 
if it happens to be in that tree. If 
it isn’t, the monkey takes advantage of the time 
it takes you to reload and takes a leap 
into a neighbouring tree without you noticing. It never 
stays in the same place after a shot. You 
would like to find out whether there is an 
strategy that allows you to capture the monkey for 
sure, irrespective of its initial location and subsequent jumps. 
If so, you need to determine the shortest sequence 
of shots guaranteeing this.Figure 2As an example, consider the 
situation in which there are only two neighboring trees 
in the forest (left hand side of Figure 2). 
It is then possible to make sure you capture 
the monkey by shooting twice at the same tree. 
Your first shot succeeds if the monkey happened to 
be there in the first place. Otherwise, the monkey 
was behind the other tree and it will necessarily 
have moved when you shoot for the second time.However, 
depending on the shape of the forest it may 
not possible for you to ensure victory. One example 
of this is if there are three trees, all 
connected to one another (right hand side of Figure 
2). No matter where you aim at, there are 
always two possible locations for the monkey at any 
given moment. (Note that here we are concerned with 
the worst-case scenario where the monkey may consistently guess 
your next target tree). 

&Input
The input consists of several test cases, separated 
by single blank lines. Each test case begins with 
a line containing two integers n and m (1 
≤ n ≤ 21); n is the number of 
trees in the forest, and m is the number 
of adjacency relations between trees. Each of the following 
m lines contains two distinct integers between 0 and 
n − 1 (inclusive), the identifiers of the trees 
in an adjacent pair. The order of both trees 
within a pair carries no meaning, and no pair 
appears more than once. You may further assume that 
no tree is adjacent to itself, and there is 
always a path between any two trees in the 
forest.The test cases will finish with a line containing 
only two zeros (also preceded with a blank line). 


&Output
Print a line for each test case. The 
line should contain the single word Impossible if the 
task is impossible. Otherwise, it must contain the shortest 
sequence of shots with the required property, in the 
format L: V1V2...VL, where L is the length of 
the sequence, and V1, V2, ... , VL are 
space-separated integers containing the identifiers of the trees to 
shoot at in the right order. If several shortest 
sequences exist, print the lexicographically smallest one. (A sequence 
is smaller than another in lexicographic order if the 
first element on which they differ is smaller in 
the first one). 

&Example
-input
2 1
0 1

3 3
0 1
1 2
2 0

4 3
0 1
2 3
1 3

0 0

-output
2: 0 0
Impossible
4: 1 3 3 1


*/

/* 
모든 장소를 시작점으로 잡아서 시작 dfs
   시작지점 제외 나머지 모든 장소에 원숭이 넣어줌(지역변수배열 1차원map형태로 bool) -> !!bitset으로 바꿈
   사수 현재위치+상하좌우 움직임(visited는 따로없음->되돌아가는경우 때문)
       이때 해당 방향 원소가 이미 시행한적 있다면 해당방향 + 1
   원숭이는 상하좌우 움직임 이때!! 원숭이가 갈 수 있는 곳을 1차원 map형태로 bool
   (dfs나 bfs no! 근데 이때 원숭이 복사가 생기는 문제가 생김... 십자가 모형이면 무한증식..;;)
impossible의 경우는 어쩌지..??
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

#define MAXN 21
#define INF 1e9

int dist[1 << MAXN]; // 해당 경우 방문확인 및 dp
int pre[1 << MAXN]; // 이전 상태 저장
int shoot[1 << MAXN]; // 총을 쏜 원숭이 저장
int n, m;
vector<int> adjacent[MAXN]; // 인접한 노드 저장
int counter[MAXN]; // 카운터

int bfs() {
	int cur_state, next_state, i, j;
	queue<int> q;
	memset(dist, -1, sizeof(dist)); // 해당 경우가 이미 있었는지 확인하기 위해 -1 초기화
	dist[(1 << n) - 1] = 0; // 모든 나무에 원숭이가 있다는 가정하에서 start n=5일때 11111
	q.push((1 << n) - 1);
	while (!q.empty()) {
		int p = q.front();
		cur_state = 0;
		q.pop();
		memset(counter, 0, sizeof(counter));
		// 살아있을 가능성이 있는 원숭이들이 다음에 있을 수 있는 위치
		for (i = 0; i < n; ++i) {
			if (p & (1 << i)) { // 해당 위치에 원숭이가 살아 있는가?
				for (int next : adjacent[i]) { // 해당 원숭이가 갈 수 있는 곳 cur_state에 마킹
					counter[next]++;
					cur_state |= (1 << next); // 해당 비트 채워줌
				}
			}
		}
		for (i = 0; i < n; ++i) {
			if (p & (1 << i)) {
				next_state = cur_state;
				for (int next : adjacent[i]) {
					if (counter[next] - 1 <= 0) // 해당 위치에 원숭이가 가는 경우가 한번 이하면
						next_state &= ~(1 << next); // 해당 비트 지워줌, 방문 불가
				}
				if (dist[next_state] == -1) { // 해당 경우가 처음이라면
					dist[next_state] = dist[p] + 1; // 이전 경우에서 + 1
					q.push(next_state); // 다음 상태 넣어줌
					pre[next_state] = p; // 이전 경우 넣어줌
					shoot[next_state] = i; // 어디를 쏘고있는지 저장
					if (next_state == 0)return dist[next_state]; // 모든 원숭이가 죽었다면 finish
				}
			}
		}
	}
	return INF; // 원숭이를 모두 죽이지 못한채 queue가 비었다면 실패
}


void print(int st) {
	if (st == (1 << n) - 1)return;
	print(pre[st]);
	cout << ' ' << shoot[st];
}

int main() {
	int res;
	while (true) {
		cin >> n >> m;
		if (n == 0 && m == 0)break;
		for (int i = 0; i < n; ++i)
			adjacent[i].clear();
		int a, b;
		for (int i = 0; i < m; ++i) {
			cin >> a >> b;
			adjacent[a].push_back(b);
			adjacent[b].push_back(a);
		}

		if (m != n - 1) {
			cout << "Impossible\n";
			continue;
		}
		res = bfs();

		if (res == INF) {
			cout << "Impossible\n";
			continue;
		}
		cout << res << ':';
		print(0);
		cout << '\n';
	}
	return 0;
}
*/