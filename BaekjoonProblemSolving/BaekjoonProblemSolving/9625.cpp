/*
https://www.acmicpc.net/problem/9625

&Title
9625�� - BABBA

&Question
����̴� ���� �ȴٰ� �ű��� ��踦 �߰��ߴ�. ���� �ſ� 
�ſ� ū ȭ��� ��ư �ϳ��� �̷���� �ִ�.��踦 �߰����� ��, 
ȭ�鿡�� A�� ǥ�õǾ��� �־���. ��ư�� ������ ���ڰ� B�� ���ߴ�. 
�� �� �� ������ BA�� �ٲ��, �� �������� BAB, 
�׸��� BABBA�� �ٲ����. ����̴� ȭ���� ��� B�� BA�� �ٲ��, 
A�� B�� �ٲ�ٴ� ����� �˰ԵǾ���.��ư�� K�� ������ ��, ȭ�鿡 
A�� B�� ������ �� ���� �ɱ�? 

&Input
ù° �ٿ� K (1 �� K �� 45)�� 
�־�����. 

&Output
ù° �ٿ� A�� ������ B�� ������ �������� ������ 
����Ѵ�. 

&Example
-input
1

-output
0 1


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	int a = 1, b = 0;
	for (int i = 0; i < N; i++) {
		int tempA, tempB;
		tempA = b;
		tempB = a + b;
		a = tempA;
		b = tempB;
	}
	printf("%d %d\n", a, b);
	return 0;
}
*/