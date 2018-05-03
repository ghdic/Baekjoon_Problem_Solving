/*
https://www.acmicpc.net/problem/11651

&Title
11651�� - ��ǥ �����ϱ� 2

&Question
2���� ��� ���� �� N���� �־�����. ��ǥ�� y��ǥ�� 
�����ϴ� ������, y��ǥ�� ������ x��ǥ�� �����ϴ� ������ ������ ���� 
����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� ���� ���� N (1 �� N 
�� 100,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� i������ ��ġ 
xi�� yi�� �־�����. (-100,000 �� xi, yi �� 100,000) 
��ǥ�� �׻� �����̰�, ��ġ�� ���� �� ���� ����. 

&Output
ù° �ٺ��� N���� �ٿ� ���� ������ ����� ����Ѵ�. 


&Example
-input
5
0 4
1 2
1 -1
2 2
3 3

-output
1 -1
1 2
2 2
3 3
0 4


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int N, a, b;
	pair <int, int> p[100000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		p[i] = make_pair(b, a);
	}
	sort(p, p + N);
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", p[i].second, p[i].first);
	}
	return 0;
}
*/