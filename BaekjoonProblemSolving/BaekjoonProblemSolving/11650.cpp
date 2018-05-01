/*
https://www.acmicpc.net/problem/11650

&Title
11650�� - ��ǥ �����ϱ�

&Question
2���� ��� ���� �� N���� �־�����. ��ǥ�� x��ǥ�� 
�����ϴ� ������, x��ǥ�� ������ y��ǥ�� �����ϴ� ������ ������ ���� 
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
3 4
1 1
1 -1
2 2
3 3

-output
1 -1
1 1
2 2
3 3
3 4


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
		p[i] = make_pair(a, b);
	}
	sort(p, p + N);
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", p[i].first, p[i].second);
	}
	return 0;
}
*/