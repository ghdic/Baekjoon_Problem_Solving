/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV4suNtaXFEDFAUf

1767. [SW Test 샘플문제] 프로세서 연결하기
※ SW Expert 아카데미의 문제를 무단 복제하는 것을 금지합니다.

삼성에서 개발한 최신 모바일 프로세서 멕시노스는 가로 N개 x 세로 N개의 cell로 구성되어 있다.



1개의 cell에는 1개의 Core 혹은 1개의 전선이 올 수 있다.


멕시노스의 가장 자리에는 전원이 흐르고 있다.

Core와 전원을 연결하는 전선은 직선으로만 설치가 가능하며,


전선은 절대로 교차해서는 안 된다.

초기 상태로는 아래와 같이 전선을 연결하기 전 상태의 멕시노스 정보가 주어진다.


(멕시노스의 가장자리에 위치한 Core는 이미 전원이 연결된 것으로 간주한다.)






▶ 최대한 많은 Core에 전원을 연결하였을 경우, 전선 길이의 합을 구하고자 한다.

   단, 여러 방법이 있을 경우, 전선 길이의 합이 최소가 되는 값을 구하라.

위 예제의 정답은 12가 된다.



[제약 사항]

1. 7 ≤  N ≤ 12

2. Core의 개수는 최소 1개 이상 12개 이하이다.

3. 최대한 많은 Core에 전원을 연결해도, 전원이 연결되지 않는 Core가 존재할 수 있다.



[입력]

입력의 가장 첫 줄에는 총 테스트 케이스의 개수 T가 주어지며 그 다음 줄부터 각 테스트 케이스가 주어진다.

각 테스트 케이스의 첫 줄에는 N값이 주어지며, 다음 N줄에 걸쳐서 멕시노스의 초기 상태가 N x N 배열로 주어진다.

0은 빈 cell을 의미하며, 1은 core를 의미하고, 그 외의 숫자는 주어지지 않는다.



[출력]

각 테스트 케이스마다 '#X'를 찍고, 한 칸 띄고, 정답을 출력한다.

(X는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)

 
입력
3  
7    
0 0 1 0 0 0 0
0 0 1 0 0 0 0
0 0 0 0 0 1 0
0 0 0 0 0 0 0
1 1 0 1 0 0 0
0 1 0 0 0 0 0
0 0 0 0 0 0 0
9  
0 0 0 0 0 0 0 0 0
0 0 1 0 0 0 0 0 1
1 0 0 0 0 0 0 0 0
0 0 0 1 0 0 0 0 0
0 1 0 0 0 0 0 0 0
0 0 0 0 0 0 1 0 0
0 0 0 1 0 0 0 0 0
0 0 0 0 0 0 0 1 0
0 0 0 0 0 0 0 0 1
11 
0 0 1 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 1
0 0 0 1 0 0 0 0 1 0 0
0 1 0 1 1 0 0 0 1 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 1 0 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 1 0 0
0 0 0 0 0 0 1 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0
sample_input.txt
출력
#1 12
#2 10 
#3 24 
sample_output.txt
*/

/*
n*n 코어 또는 전선이 올수있는 셀이 있음
가장자리에 전원이 흐르고 있음
코어와 연결하는 전선은 직선으로만 설치 가능(교차x)
edge부분에 있는 코어는 이미 연결된거로 간주
최대한 많은 코어에 전원을 연결했을 경우 전선 길이의 합?
여러 방법이 있을 경우 전선의 길이의 합이 최소가 되게 하여라
/
*/

#include <iostream>
#include <vector>
#include <utility>
#include <cstring>
#include <algorithm>
using namespace std;

int n;
int map[14][14];
vector<pair<int, int>> cores;
int choose = 0, result = 54321;
int Y[4] = { 0, -1, 1, 0 }, X[4] = { -1, 0, 0, 1 };

void dfs(int pos, int choice, int sum, bool visited[14][14]) {
	if (pos == cores.size()) {
		if (choose == choice) {
			result = min(result, sum);
		}
		else if (choose < choice) {
			result = min(54321, sum);
		}
		return;
	}
	bool nvisited[14][14];
	
	// 해당 코어를 고르지 않을 경우
	dfs(pos + 1, choice, sum, visited);
	// 해당 코어 4방향으로 뻗는 경우
	for (int i = 0; i < 4; ++i) {
		int y = cores[pos].first + Y[i], x = cores[pos].second + X[i];
		bool check = false;
		while (true) {
			if (map[y][x] == -1) {// edge와 만남
				check = true; break;
			} 
			if (visited[y][x])break; // 이미 방문함
			y += Y[i], x += X[i];
		}
		if (check) { // 해당 방향 전선 연결이 될 수 있는 경우 방문 처리후 dfs
			y = cores[pos].first + Y[i], x = cores[pos].second + X[i];
			memcpy(nvisited, visited, sizeof(visited));
			int cnt = 0;
			while (map[y][x]!=-1) {
				++cnt;
				nvisited[y][x] = true;
				y += Y[i], x += X[i];
			}
			dfs(pos + 1, choice + 1, sum + cnt, nvisited);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cores.reserve(12);
	int T;
	bool visit[14][14] = {};
	cin >> T;
	for (int t = 1; t <= T; ++t) {
		choose = 0, result = 54321;
		cores.clear();
		cin >> n;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				cin >> map[i][j];
				if (map[i][j] == 1) {
					cores.push_back(make_pair(i, j));
					visit[i][j] = true;
				}
			}
			map[i][0] = map[i][n + 1] = map[0][i] = map[n + 1][i] = -1;
		}
		dfs(0, 0, 0, visit);
		cout << "#" << t << " " << result << "\n";
	}
	return 0;
}
