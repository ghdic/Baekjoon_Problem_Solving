/*
https://www.acmicpc.net/problem/9205

&Title
9205�� - ���� ���ø鼭 �ɾ��

&Question
�۵��� ��� ����̿� ģ������ �۵����� ������ ��Ÿ��Ʈ �� 
�佺Ƽ�� ������ �Ѵ�. ���ش� ���ָ� ���ø鼭 �ɾ��� �ߴ�. ����� 
����̳� ������ �ϰ�, ���� �� �ڽ��� ��� ����Ѵ�. ���� 
�� �ڽ����� ���ְ� 20�� ����ִ�. ���� ������ �ȵǱ� ������ 
50���Ϳ� �� ���� ���÷��� �Ѵ�.������� ������ �佺Ƽ���� ������ ���� 
�ſ� �� �Ÿ��̴�. ����, ���ָ� �� �����ؾ� �� ���� 
�ִ�. �̸� ���ͳ����� ���縦 �غ��� �������� ���ָ� �Ĵ� �������� 
�ִ�. �������� ����� ��, �� ���� ������ �� ���� 
���� �� �� �ִ�. ������, �ڽ��� ����ִ� ���ִ� 20���� 
���� �� ����.������, ����̳� ��, ��Ÿ��Ʈ �� �佺Ƽ���� ��ǥ�� 
�־�����. ����̿� ģ������ �ູ�ϰ� �佺Ƽ���� ������ �� �ִ��� ���ϴ� 
���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� �׽�Ʈ ���̽��� ���� t�� �־�����. (t 
�� 50)�� �׽�Ʈ ���̽��� ù° �ٿ��� ���ָ� �Ĵ� �������� 
���� n�� �־�����. (0 �� n �� 100).���� n+2�� 
�ٿ��� ����̳� ��, ������, ��Ÿ��Ʈ �� �佺Ƽ�� ��ǥ�� �־�����. 
�� ��ǥ�� �� ���� x�� y�� �̷���� �ִ�. (�� 
�� ��� ����, -32768 �� x, y �� 32767)�۵��� 
���簢�� ������� ���� �����̴�. �� ��ǥ ������ �Ÿ��� x 
��ǥ�� ���� + y ��ǥ�� ���� �̴�. (����ư �Ÿ�) 


&Output
�� �׽�Ʈ ���̽��� ���ؼ� ����̿� ģ������ �ູ�ϰ� �佺Ƽ���� 
�� �� ������ "happy", �߰��� ���ְ� �ٴڳ��� "sad"�� ����Ѵ�. 


&Example
-input
2
2
0 0
1000 0
1000 1000
2000 1000
2
0 0
1000 0
2000 1000
2000 2000

-output
happy
sad


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits.h>
using namespace std;

typedef struct pos {
	int y;
	int x;
}pos;

pos make_pos(int y, int x) {
	pos a;
	a.y = y;
	a.x = x;
	return a;
}
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		int n;
		scanf("%d", &n);
		vector<pos> v(n + 2);
		vector<vector<pair<int, int> > > graph(n + 2);

		for (int j = 0; j < n + 2; j++) {
			scanf("%d %d", &v[j].y, &v[j].x);
		}
		for (int j = 0; j < n + 2; j++) {
			for (int k = 0; k < n + 2; k++) {
				if (j == k)continue;
				int dist = abs(v[j].y - v[k].y) + abs(v[j].x - v[k].x);
				if (dist <= 1000)
					graph[j].push_back(make_pair(k, dist));
			}
		}
		queue<int> q;
		q.push(0);
		vector<int> dis(n + 2, INT_MAX);
		dis[0] = 0;
		while (!q.empty()) {
			int cur_node = q.front();
			q.pop();
			for (int i = 0; i < graph[cur_node].size(); ++i) {
				int next_node = graph[cur_node][i].first;
				int cost = dis[cur_node] + graph[cur_node][i].second;
				if (dis[next_node] > cost) {
					dis[next_node] = cost;
					q.push(next_node);
				}
			}
		}
		if (dis[n + 1] != INT_MAX)printf("happy\n");
		else printf("sad\n");
	}

	return 0;
}
*/