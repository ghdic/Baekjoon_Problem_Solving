/*
https://www.acmicpc.net/problem/1697

&Title
1697�� - ���ٲ���

&Question
�����̴� ������ ���ٲ����� �ϰ� �ִ�. �����̴� ���� �� 
N(0 �� N �� 100,000)�� �ְ�, ������ �� K(0 
�� K �� 100,000)�� �ִ�. �����̴� �Ȱų� �����̵��� �� 
�� �ִ�. ����, �������� ��ġ�� X�� �� �ȴ´ٸ� 1�� 
�Ŀ� X-1 �Ǵ� X+1�� �̵��ϰ� �ȴ�. �����̵��� �ϴ� ��쿡�� 
1�� �Ŀ� 2*X�� ��ġ�� �̵��ϰ� �ȴ�.�����̿� ������ ��ġ�� �־����� 
��, �����̰� ������ ã�� �� �ִ� ���� ���� �ð��� 
�� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù ��° �ٿ� �����̰� �ִ� ��ġ N�� ������ 
�ִ� ��ġ K�� �־�����. N�� K�� �����̴�. 

&Output
�����̰� ������ ã�� ���� ���� �ð��� ����Ѵ�. 

&Example
-input
5 17

-output
4


*/

/*
//��Ʈ��ŷ�̶��� �Ẹ�� ������ ���� ��������..
//���� ��带 üũ�� ������ ��ã����..
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <queue>
using namespace std;

int N, K, visited[100001] = {};
queue<int> q;

int bfs() {
	q.push(N);
	visited[N] = 0;

	while (!q.empty()) {
		int cur_node = q.front();
		q.pop();

		if (cur_node == K)
			return visited[cur_node];

		if (cur_node - 1 >= 0 && cur_node - 1 <= 100000 && visited[cur_node - 1] == 0) {
			q.push(cur_node - 1);
			visited[cur_node - 1] = visited[cur_node] + 1;
		}

		if (cur_node + 1 <= 100000 && visited[cur_node + 1] == 0) {
			q.push(cur_node + 1);
			visited[cur_node + 1] = visited[cur_node] + 1;
		}

		if (cur_node * 2 <= 100000 && visited[cur_node * 2] == 0) {
			q.push(cur_node * 2);
			visited[cur_node * 2] = visited[cur_node] + 1;
		}
	}
}

int main() {
	scanf("%d %d", &N, &K);
	printf("%d\n", bfs());
}
*/