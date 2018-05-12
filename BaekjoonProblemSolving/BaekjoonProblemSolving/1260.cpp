/*
https://www.acmicpc.net/problem/1260

&Title
1260�� - DFS�� BFS

&Question
�׷����� DFS�� Ž���� ����� BFS�� Ž���� ����� ����ϴ� 
���α׷��� �ۼ��Ͻÿ�. ��, �湮�� �� �ִ� ������ ���� ���� 
��쿡�� ���� ��ȣ�� ���� ���� ���� �湮�ϰ�, �� �̻� 
�湮�� �� �ִ� ���� ���� ��� �����Ѵ�. ���� ��ȣ�� 
1������ N�������̴�. 

&Input
ù° �ٿ� ������ ���� N(1 �� N �� 
1,000), ������ ���� M(1 �� M �� 10,000), Ž���� 
������ ������ ��ȣ V�� �־�����. ���� M���� �ٿ��� ������ 
�����ϴ� �� ������ ��ȣ�� �־�����. �� ������ ���� �� 
�־��� ���� �ִµ�, ������ �ϳ��� �ִ� ������ �����ϸ� �ȴ�. 
�Է����� �־����� ������ ������̴�. 

&Output
ù° �ٿ� DFS�� ������ �����, �� ���� �ٿ��� 
BFS�� ������ ����� ����Ѵ�. V���� �湮�� ���� ������� ����ϸ� 
�ȴ�. 

&Example
-input
4 5 1
1 2
1 3
1 4
2 4
3 4

-output
1 2 4 3
1 2 3 4


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

void dfs(int start, vector<int> graph[], bool check[]) {
	stack<int> s;
	s.push(start);
	check[start] = true;
	printf("%d", start);

	while (!s.empty()) {//���̻� �湮�� ��尡 ���� ���
		int current_node = s.top();
		s.pop();

		for (int i = 0; i < graph[current_node].size(); i++) {
			int next_node = graph[current_node][i];
			if (check[next_node] == false) {
				printf(" %d", next_node);
				check[next_node] = true;
				s.push(current_node);	//���� �湮���� ��尡 ������ �����Ƿ� �ٽ� push
				s.push(next_node);
				break;
			}
		}
	}
}

void bfs(int start, vector<int> graph[], bool check[]) {
	queue<int> q;

	q.push(start);
	check[start] = true;
	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		printf("%d ", tmp);
		for (int i = 0; i < graph[tmp].size(); i++) {
			//�湮���� �ʾҴٸ�
			if (check[graph[tmp][i]] == false) {
				//ť�� �־��ְ� �湮������ ǥ���Ѵ�.
				q.push(graph[tmp][i]);
				check[graph[tmp][i]] = true;
			}
		}
	}
}

int main() {
	int N, M, start;
	vector<int> graph[1001];
	bool check[1001];

	scanf("%d %d %d", &N, &M, &start);

	int u, v;
	//����� ��������
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &u, &v);
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	//��� ���� ���������� �����ϱ� ���� sort
	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	fill(check, check + N + 1, false);
	dfs(start, graph, check);
	printf("\n");

	fill(check, check + N + 1, false);
	bfs(start, graph, check);
	printf("\n");
	return 0;
}
*/