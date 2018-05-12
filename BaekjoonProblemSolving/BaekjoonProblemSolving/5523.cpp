/*
https://www.acmicpc.net/problem/5523

&Title
5523�� - ��� ���

&Question
A�� B�� ������ �Ѵ�. ������ N���� ����� �̷���� 
�ִ�. �� ���忡����, �� ���� ������ ���� ����� �� 
������ ���ڰ� �ȴ�. ��, A�� ������ B�� �������� ũ�� 
i��° ����� A�� �¸��̸�, B�� ������ A�� �������� ũ�� 
i��° ����� B�� �¸��̴�. ���º��� ��쿡�� �ƹ��� �¸����� �ʴ´�.N���� 
���忡���� A�� B�� ������ �־����� ��, A�� �̱� Ƚ����, 
B�� �̱� Ƚ���� ����ϴ� ���α׷��� ������. 

&Input
ù° �ٿ��� ���� N(1��N��1,000,000)�� �־�����.��° �ٺ��ʹ� ���� Ai, 
Bi(0��Ai,Bi��100)�� ������ ���̿� �ΰ� ���ʴ�� �־�����. 

&Output
ù° �ٿ� A�� �̱� Ƚ���� B�� �̱� Ƚ���� 
���ʴ�� ����϶�. 

&Example
-input
4
100 0
5 6
40 50
74 75

-output
1 3

-input
5
20 20
3 95
60 59
40 40
20 19

-output
2 1


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	int a, b, aScore = 0, bScore = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		if (a > b)
			aScore++;
		else if (a < b)
			bScore++;
	}
	printf("%d %d\n", aScore, bScore);
	return 0;
}
*/