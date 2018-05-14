/*
https://www.acmicpc.net/problem/2667

&Title
2667�� - ������ȣ���̱�

&Question
<�׸� 1>�� ���� ���簢�� ����� ������ �ִ�. 1�� 
���� �ִ� ����, 0�� ���� ���� ���� ��Ÿ����. ö���� 
�� ������ ������ ����� ������ ������ ������ �����ϰ�, ������ 
��ȣ�� ���̷� �Ѵ�. ���⼭ ����Ǿ��ٴ� ���� � ���� �¿�, 
Ȥ�� �Ʒ����� �ٸ� ���� �ִ� ��츦 ���Ѵ�. �밢���� ���� 
�ִ� ���� ����� ���� �ƴϴ�. <�׸� 2>�� <�׸� 1>�� 
�������� ��ȣ�� ���� ���̴�. ������ �Է��Ͽ� �������� ����ϰ�, �� 
������ ���ϴ� ���� ���� ������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 


&Input
ù ��° �ٿ��� ������ ũ�� N(���簢���̹Ƿ� ���ο� ������ 
ũ��� ������ 5��N��25)�� �Էµǰ�, �� ���� N�ٿ��� ���� N���� 
�ڷ�(0Ȥ�� 1)�� �Էµȴ�. 

&Output
ù ��° �ٿ��� �� �������� ����Ͻÿ�. �׸��� �� 
������ ���� ���� ������������ �����Ͽ� �� �ٿ� �ϳ��� ����Ͻÿ�. 


&Example
-input
7
0110100
0110101
1110101
0000111
0100000
0111110
0111000
-output
3
7
8
9

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	int N, arr[26][26] = {};
	bool check[26][26] = {};
	int count[625] = {};
	queue <pair<int, int>> q;
	scanf("%d", &N);
	for (int y = 1; y <= N; y++) {
		for (int x = 1; x <= N; x++) {
			scanf("%1d", &arr[y][x]);
		}
	}

	int cnt = 0;
	int index = 0;
	int X[4] = { -1,0,0,1 };
	int Y[4] = { 0,1,-1,0 };

	for (int y = 1; y <= N; y++) {
		for (int x = 1; x <= N; x++) {
			if (arr[y][x] == 1) {
				q.push(make_pair(y, x));
				check[y][x] = true;
				cnt++;
				while (!q.empty()) {
					pair<int, int> current_node = q.front();
					q.pop();
					arr[current_node.first][current_node.second] = 2;
					for (int i = 0; i < 4; i++) {
						pair<int, int> next_node = 
							make_pair(current_node.first + Y[i],
								current_node.second + X[i]);
						if (!(next_node.first >= 1 && next_node.first <= N 
							&& next_node.second >= 1 && next_node.second <= N))
							continue;
						if (arr[next_node.first][next_node.second] == 1 &&
							check[next_node.first][next_node.second] == false) {
							q.push(next_node);
							check[next_node.first][next_node.second] = true;
							cnt++;
						}
					}
				}
				count[index++] = cnt;
				cnt = 0;
			}
		}
	}
	sort(count, count + index);
	printf("%d\n", index);
	for (int i = 0; i < index; i++)
		printf("%d\n", count[i]);
	return 0;
}
*/