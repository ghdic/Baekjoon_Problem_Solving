/*
https://www.acmicpc.net/problem/2583

&Title
2583번 - 영역 구하기

&Question
눈금의 간격이 1인 M×N(M,N≤100)크기의 모눈종이가 있다. 이 모눈종이 
위에 눈금에 맞추어 K개의 직사각형을 그릴 때, 이들 K개의 
직사각형의 내부를 제외한 나머지 부분이 몇 개의 분리된 영역으로 
나누어진다.예를 들어 M=5, N=7 인 모눈종이 위에 <그림 1>과 
같이 직사각형 3개를 그렸다면, 그 나머지 영역은 <그림 2>와 
같이 3개의 분리된 영역으로 나누어지게 된다.<그림 2>와 같이 분리된 
세 영역의 넓이는 각각 1, 7, 13이 된다.M, N과 
K 그리고 K개의 직사각형의 좌표가 주어질 때, K개의 직사각형 
내부를 제외한 나머지 부분이 몇 개의 분리된 영역으로 나누어지는지, 
그리고 분리된 각 영역의 넓이가 얼마인지를 구하여 이를 출력하는 
프로그램을 작성하시오. 

&Input
첫째 줄에 M과 N, 그리고 K가 빈칸을 사이에 
두고 차례로 주어진다. M, N, K는 모두 100 이하의 
자연수이다. 둘째 줄부터 K개의 줄에는 한 줄에 하나씩 직사각형의 
왼쪽 아래 꼭짓점의 x, y좌표값과 오른쪽 위 꼭짓점의 x, 
y좌표값이 빈칸을 사이에 두고 차례로 주어진다. 모눈종이의 왼쪽 아래 
꼭짓점의 좌표는 (0,0)이고, 오른쪽 위 꼭짓점의 좌표는(N,M)이다. 입력되는 K개의 
직사각형들이 모눈종이 전체를 채우는 경우는 없다. 

&Output
첫째 줄에 분리되어 나누어지는 영역의 개수를 출력한다. 둘째 
줄에는 각 영역의 넓이를 오름차순으로 정렬하여 빈칸을 사이에 두고 
출력한다. 

&Example
-input
5 7 3
0 2 4 4
1 1 2 5
4 0 6 2

-output
3
1 7 13


*/

/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, k;
int map[100][100];
bool visited[100][100];
int dy[4] = { -1, 0, 1, 0 }, dx[4] = { 0, 1, 0, -1 };
vector<int> item;

int dfs(int y, int x) {
	visited[y][x] = true;
	int res = 1;
	for (int i = 0; i < 4; ++i) {
		int ty = y + dy[i], tx = x + dx[i];
		if (ty < 0 || ty >= n || tx < 0 || tx >= m)continue;
		if (map[ty][tx] == 1)continue;
		if (visited[ty][tx])continue;
		res += dfs(ty, tx);
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m >> k;
	while (k--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		for (int i = b; i < d; ++i)
			for (int j = a; j < c; ++j)
				map[i][j] = 1;
	}
	int res = 0;
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j)
			if (map[i][j] == 0 && !visited[i][j]) {
				++res;
				item.push_back(dfs(i, j));
			}
	sort(item.begin(), item.end());
	cout << res << "\n";
	for (int v : item)
		cout << v << ' ';
	cout << endl;
	return 0;
}
*/