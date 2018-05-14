/*
https://www.acmicpc.net/problem/2606

&Title
2606�� - ���̷���

&Question
���� ���̷����� �� ���̷����� ��Ʈ��ũ�� ���� ���ĵȴ�. �� 
��ǻ�Ͱ� �� ���̷����� �ɸ��� �� ��ǻ�Ϳ� ��Ʈ��ũ �󿡼� ����Ǿ� 
�ִ� ��� ��ǻ�ʹ� �� ���̷����� �ɸ��� �ȴ�. ���� ��� 
7���� ��ǻ�Ͱ� <�׸� 1>�� ���� ��Ʈ��ũ �󿡼� ����Ǿ� �ִٰ� 
����. 1�� ��ǻ�Ͱ� �� ���̷����� �ɸ��� �� ���̷����� 2���� 
5�� ��ǻ�͸� ���� 3���� 6�� ��ǻ�ͱ��� ���ĵǾ� 2, 3, 
5, 6 �� ���� ��ǻ�ʹ� �� ���̷����� �ɸ��� �ȴ�. 
������ 4���� 7�� ��ǻ�ʹ� 1�� ��ǻ�Ϳ� ��Ʈ��ũ�󿡼� ����Ǿ� ���� 
�ʱ� ������ ������ ���� �ʴ´�. ��� �� 1�� ��ǻ�Ͱ� 
�� ���̷����� �ɷȴ�. ��ǻ���� ���� ��Ʈ��ũ �󿡼� ���� ����Ǿ� 
�ִ� ������ �־��� ��, 1�� ��ǻ�͸� ���� �� ���̷����� 
�ɸ��� �Ǵ� ��ǻ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ��� ��ǻ���� ���� �־�����. ��ǻ���� ���� 100 
�����̰� �� ��ǻ�Ϳ��� 1�� ���� ���ʴ�� ��ȣ�� �Ű�����. ��° 
�ٿ��� ��Ʈ��ũ �󿡼� ���� ����Ǿ� �ִ� ��ǻ�� ���� ���� 
�־�����. �̾ �� ����ŭ �� �ٿ� �� �־� ��Ʈ��ũ 
�󿡼� ���� ����Ǿ� �ִ� ��ǻ���� ��ȣ ���� �־�����. 

&Output
1�� ��ǻ�Ͱ� �� ���̷����� �ɷ��� ��, 1�� ��ǻ�͸� 
���� �� ���̷����� �ɸ��� �Ǵ� ��ǻ���� ���� ù° �ٿ� 
����Ѵ�. 

&Example
-input
7
6
1 2
2 3
1 5
5 2
5 6
4 7
-output
4

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

void dfs(int start, vector<int>graph[], bool check[]) {
	stack<int> s;
	s.push(start);
	check[start] = true;

	while (!s.empty()) {
		int current_node = s.top();
		s.pop();
		for (int i = 0; i < graph[current_node].size(); i++) {
			int next_node = graph[current_node][i];
			if (check[next_node] == false) {
				check[next_node] = true;
				s.push(current_node);
				s.push(next_node);
				break;
			}
		}
	}
}
int main() {
	int N, C;
	bool check[101] = {};
	vector<int>graph[101];

	scanf("%d", &N);
	scanf("%d", &C);

	int a, b;
	for (int i = 0; i < C; i++) {
		scanf("%d %d", &a, &b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= N; i++)
		sort(graph[i].begin(), graph[i].end());
	
	dfs(1, graph, check);

	int cnt = 0;
	for (int i = 1; i <= N; i++)
		if (check[i] == true)
			cnt++;
	printf("%d\n", cnt - 1);
	return 0;
}
*/