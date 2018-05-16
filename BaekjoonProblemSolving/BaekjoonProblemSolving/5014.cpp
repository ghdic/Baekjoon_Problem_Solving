/*
https://www.acmicpc.net/problem/5014

&Title
5014�� - ��ŸƮ��ũ

&Question
��ȣ�� �ڵ� ������ �ϴ� ��ŸƮ�� ��ŸƮ��ũ�� �����ߴ�. ������ 
��ȣ�� �������̴�. ������, ������ �� ��ȣ�� ��ŸƮ��ũ�� �ִ� �ǹ��� 
�ʰ� �����ϰ� ���Ҵ�.��ŸƮ��ũ�� �� F������ �̷���� ���� �ǹ��� �繫���� 
�ְ�, ��ŸƮ��ũ�� �ִ� ���� ��ġ�� G���̴�. ��ȣ�� ���� �ִ� 
���� S���̰�, ���� ���������͸� Ÿ�� G������ �̵��Ϸ��� �Ѵ�.���� ���������Ϳ��� 
� ������ �̵��� �� �ִ� ��ư�� ������, ��ȣ�� ź 
���������ʹ� ��ư�� 2���ۿ� ����. U��ư�� ���� U���� ���� ��ư, 
D��ư�� �Ʒ��� D���� ���� ��ư�̴�. (����, U�� ��, �Ǵ� 
D�� �Ʒ��� �ش��ϴ� ���� ���� ����, ���������ʹ� �������� �ʴ´�)��ȣ�� 
G���� �����Ϸ���, ��ư�� ��� �� �� ������ �ϴ��� ���ϴ� 
���α׷��� �ۼ��Ͻÿ�. ����, ���������͸� �̿��ؼ� G���� �� �� ���ٸ�, 
"use the stairs"�� ����Ѵ�. 

&Input
ù° �ٿ� F, S, G, U, D�� �־�����. 
(1 �� S, G �� F �� 1000000, 0 
�� U, D �� 1000000) �ǹ��� 1������ �����ϰ�, ���� 
���� ���� F���̴�. 

&Output
ù° �ٿ� ��ȣ�� S������ G������ ���� ���� ������ 
�ϴ� ��ư�� ���� �ּҰ��� ����Ѵ�. ����, ���������ͷ� �̵��� �� 
���� ���� "use the stairs"�� ����Ѵ�. 

&Example
-input
10 1 10 2 1

-output
6

-input
100 2 1 1 0

-output
use the stairs


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <queue>
#include <cmath>
#define MAX 1000000
using namespace std;

int F, S, G, U, D, visited[MAX + 1] = {};
queue<int> q;

int bfs() {
	q.push(S);
	visited[S] = 1;

	while (!q.empty()) {
		int cur_node = q.front();
		q.pop();

		if (cur_node == G)
			return visited[cur_node] - 1;
		int next_node = cur_node + U;
		if (next_node <= F && visited[next_node] == 0) {
			q.push(next_node);
			visited[next_node] = visited[cur_node] + 1;
		}

		next_node = cur_node - D;
		if (next_node >= 1 && visited[next_node] == 0) {
			q.push(next_node);
			visited[next_node] = visited[cur_node] + 1;
		}
	}
	return -1;
}
int main() {
	scanf("%d %d %d %d %d", &F, &S, &G, &U, &D);

	int result = bfs();
	if (result == -1)
		printf("use the stairs\n");
	else
		printf("%d\n", result);
	return 0;
}
*/