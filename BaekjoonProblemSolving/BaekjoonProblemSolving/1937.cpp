/*
https://www.acmicpc.net/problem/1937

&Title
������� �Ǵ�

&Question
n*n�� ũ���� �볪�� ���� �ִ�. ������� �Ǵٴ� � �������� �볪���� �Ա� �����Ѵ�. �׸��� �� ���� �볪���� �� �Ծ� ġ��� ��, ��, ��, �� �� �� ������ �̵��� �Ѵ�. �׸��� �� �װ����� �볪���� �Դ´�. �׷��� �� ������ �ִ�. �� �Ǵٴ� �ſ� ����� ���Ƽ� �볪���� �԰� �ڸ��� �ű�� �� �ű� ������ �� �� �������� �볪���� ���� �־�� �Ѵ�. ���࿡ �׷� ������ ������ �� �Ǵٴ� �Ҹ��� ������ �ܽ� ������ �ϴٰ� �װ� �ȴ�(-_-)

�� �Ǵ��� ������� �̷� �Ǵٸ� �볪�� ���� Ǯ�� ���ƾ� �ϴµ�, � ������ ó���� Ǯ�� ���ƾ� �ϰ�, � ������ �̵��� ���Ѿ� �� �� ������ ���������� �Ǵٰ� �ִ��� ���� �� �� �ִ��� ��ο� ���� �ִ�. �츮�� �ӹ��� �� �����縦 �����ִ� ���̴�. n*n ũ���� �볪�� ���� �־��� ���� ��, �� �Ǵٰ� �ִ��� ���� ����� � ��θ� ���Ͽ� �������� �ϴ��� ���Ͽ���.

&Input
ù° �ٿ� �볪�� ���� ũ�� n(1<=n<=500)�� �־�����. �׸��� ��° �ٺ��� 1+n��° �� ���� �볪�� ���� ������ �־�����. �볪�� ���� ������ ������ ���̷� �ΰ� �� ������ �볪���� ���� ���� ������ �־�����. �볪���� ���� 1,000,000���� �۰ų� ���� �ڿ����̴�.

&Output
ù° �ٿ��� �Ǵٰ� �ִ��� �� �� �ִ� �ϼ�(K)�� ����Ѵ�.

&Example
-input
4
14 9 12 10
1 11 5 4
7 15 2 13
6 3 16 8
-output
4

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N;
int map[501][501] = { 0 };
int visit[501][501] = { 0 };
int max = 0;
int vectX[4] = { -1,0,0,1 };
int vectY[4] = { 0,1,-1,0 };

void dfsmap(int x,int y) {
	int nextX, nextY;
	int value = 0;
	for (int i = 0; i < 4; ++i) {
		nextX = x + vectX[i];
		nextY = y + vectY[i];

		if (nextX < 0 || nextX >= N || nextY < 0 || nextY >= N)
			continue;

		if (map[nextX][nextY] < map[x][y]) {
			if (visit[nextX][nextY] == 0)
				dfsmap(nextX, nextY);

			if (visit[nextX][nextY] > 0)
				value = visit[nextX][nextY];
		}
	}
	visit[x][y] = value + 1;

	if (max < visit[x][y])
		max = visit[x][y];
}

int main() {


	scanf("%d", &N);

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			scanf("%d", &map[i][j]);

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			dfsmap(i, j);

	printf("%d\n", max);
	return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
using namespace std;

int n;
int map[500][500];
int dp[500][500];
int dy[4] = { -1, 0, 1, 0 }, dx[4] = { 0, 1, 0, -1 };

int dfs(int y, int x) {
	if (dp[y][x])return dp[y][x]; // �̹� �湮���� �ִٸ� �� �� ����

	dp[y][x] = 1;

	for (int i = 0; i < 4; ++i) {
		int ty = y + dy[i], tx = x + dx[i]; // ���� y,x��ǥ
		if (ty < 0 || ty >= n || tx < 0 || tx >= n)continue;
		if (map[y][x] >= map[ty][tx])continue; // �������� ���°��� ���̰� �� ���ƾߴ�
		dp[y][x] = max(dp[y][x], dfs(ty, tx) + 1);
	}
	return dp[y][x];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cin >> map[i][j];
	}

	int ans = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			ans = max(ans, dfs(i, j));
	cout << ans << endl;
	return 0;
}
*/