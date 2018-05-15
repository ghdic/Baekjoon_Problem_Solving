/*
https://www.acmicpc.net/problem/2644

&Title
2644�� - �̼����

&Question
�츮 ����� ���� Ȥ�� ģô�� ������ ���踦 �̼���� 
������ ǥ���ϴ� ��Ư�� ��ȭ�� ������ �ִ�. �̷��� �̼��� ������ 
���� ������� ���ȴ�. �⺻������ �θ�� �ڽ� ���̸� 1������ �����ϰ� 
�̷κ��� ����� ���� �̼��� ����Ѵ�. ���� ��� ���� �ƹ���, 
�ƹ����� �Ҿƹ����� ���� 1������ ���� �Ҿƹ����� 2���� �ǰ�, �ƹ��� 
������� �Ҿƹ����� 1��, ���� �ƹ��� ��������� 3���� �ȴ�.���� ����鿡 
���� �θ� �ڽĵ� ���� ���谡 �־����� ��, �־��� �� 
����� �̼��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
������� 1, 2, 3, ��, n (1��n��100)�� ���ӵ� 
��ȣ�� ���� ǥ�õȴ�. �Է� ������ ù° �ٿ��� ��ü ����� 
�� n�� �־�����, ��° �ٿ��� �̼��� ����ؾ� �ϴ� ���� 
�ٸ� �� ����� ��ȣ�� �־�����. �׸��� ��° �ٿ��� �θ� 
�ڽĵ� ���� ������ ���� m�� �־�����. ��° �ٺ��ʹ� �θ� 
�ڽİ��� ���踦 ��Ÿ���� �� ��ȣ x,y�� �� �ٿ� ���´�. 
�̶� �տ� ������ ��ȣ x�� �ڿ� ������ ���� y�� 
�θ� ��ȣ�� ��Ÿ����.�� ����� �θ�� �ִ� �� �� �־�����. 


&Output
�Է¿��� �䱸�� �� ����� �̼��� ��Ÿ���� ������ ����Ѵ�. 
� ��쿡�� �� ����� ģô ���谡 ���� ���� �̼��� 
����� �� ���� ���� �ִ�. �� ������ -1�� ����ؾ� 
�Ѵ�. 

&Example
-input
9
7 3
7
1 2
1 3
2 7
2 8
2 9
4 5
4 6
-output
3

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int N, A, B, M;
	vector <pair<int, int>> graph[101];
	scanf("%d", &N);
	scanf("%d %d", &A, &B);
	scanf("%d", &M);
	
	int a, b;
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		graph[a].push_back(make_pair(b, 0));
		graph[b].push_back(make_pair(a, 0));
	}

	queue <pair<int, int>> q;
	bool visit[101] = {};
	q.push(make_pair(A, 0));
	visit[A] = true;

	while (!q.empty()) {
		pair<int, int> current_node = q.front();
		q.pop();
		for (int i = 0; i < graph[current_node.first].size(); i++) {
			pair<int, int> next_node = graph[current_node.first][i];
			if (visit[next_node.first] == false) {
				graph[current_node.first][i].second = current_node.second + 1;
				q.push(graph[current_node.first][i]);
				visit[next_node.first] = true;
				if (next_node.first == B) {
					goto K;
				}
			}
		}
	}
K:
	if (q.empty()) {
		printf("%d\n", -1);
	}
	else
		printf("%d\n", q.back().second);
	return 0;
}
*/