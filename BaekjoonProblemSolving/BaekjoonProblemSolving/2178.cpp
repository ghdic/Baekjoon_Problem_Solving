/*
https://www.acmicpc.net/problem/2178

&Title
2178�� - �̷� Ž��

&Question
N��Mũ���� �迭�� ǥ���Ǵ� �̷ΰ� �ִ�.101111101010101011111011�̷ο��� 1�� �̵��� �� 
�ִ� ĭ�� ��Ÿ����, 0�� �̵��� �� ���� ĭ�� ��Ÿ����. 
�̷��� �̷ΰ� �־����� ��, (1, 1)���� ����Ͽ� (N, M)�� 
��ġ�� �̵��� �� ������ �ϴ� �ּ��� ĭ ���� ���ϴ� 
���α׷��� �ۼ��Ͻÿ�.���� �������� 15ĭ�� ������ (N, M)�� ��ġ�� �̵��� 
�� �ִ�. ĭ�� �� ������ ���� ��ġ�� ���� ��ġ�� 
�����Ѵ�. 

&Input
ù° �ٿ� �� ���� N, M(2��N, M��100)�� �־�����. 
���� N���� �ٿ��� M���� ������ �̷ΰ� �־�����. ������ ������ 
�پ �Է����� �־�����. 

&Output
ù° �ٿ� ������ �ϴ� �ּ��� ĭ ���� ����Ѵ�. 
�׻� ������ġ�� �̵��� �� �ִ� ��츸 �Է����� �־�����. 

&Example
-input
4 6
101111
101010
101011
111011

-output
15
-input
4 6
110110
110110
111111
111101

-output
9


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <queue>

using namespace std;

int main() {
	int N, M;
	int arr[101][101] = {};
	queue<pair<int, int>> q;

	scanf("%d %d", &N, &M);
	for (int y = 1; y <= N;y++) {
		for (int x = 1; x <= M; x++) {
			scanf("%1d", &arr[y][x]);
		}
	}

	int X[4] = { -1, 0, 0, 1 };
	int Y[4] = { 0, 1, -1, 0 };
	q.push(make_pair(1, 1));
	while (!q.empty()) {
		pair<int, int> p = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nextX = p.second + X[i], nextY = p.first+ Y[i];
			if (nextX >= 1 && nextX <= M && nextY >= 1 && nextY <= N) {
				if (arr[nextY][nextX] == 1) {
					q.push(make_pair(nextY, nextX));
					arr[nextY][nextX] = arr[p.first][p.second] + 1;
				}
			}
		}
	}
	printf("%d\n", arr[N][M]);
	return 0;
}
*/