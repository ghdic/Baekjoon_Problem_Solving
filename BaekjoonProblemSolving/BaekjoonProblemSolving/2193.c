/*
https://www.acmicpc.net/problem/2193

&Title
��ģ��

&Question
0�� 1�θ� �̷���� ���� �������� �Ѵ�. �̷��� ������ �� Ư���� ������ ���� �͵��� �ִµ�, �̵��� ��ģ��(pinary number)�� �Ѵ�. ��ģ���� ������ ������ �����Ѵ�.

��ģ���� 0���� �������� �ʴ´�.
��ģ�������� 1�� �� �� �������� ��Ÿ���� �ʴ´�. ��, 11�� �κ� ���ڿ��� ���� �ʴ´�.
���� ��� 1, 10, 100, 101, 1000, 1001 ���� ��ģ���� �ȴ�. ������ 0010101�̳� 101101�� ���� 1, 2�� ��Ģ�� ����ǹǷ� ��ģ���� �ƴϴ�.

N(1��N��90)�� �־����� ��, N�ڸ� ��ģ���� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

&Input
ù° �ٿ� N�� �־�����.

&Output
ù° �ٿ� N�ڸ� ��ģ���� ������ ����Ѵ�.

&Example
-input
3
-output
2

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int fibo(int n) {
	long long int n1 = 1, n2 = 1, temp;
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;

	for (int i = 2; i < n; ++i) {
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
	}
	return temp;
}
int main() {
	int N;

	scanf("%d", &N);
	printf("%lld\n", fibo(N));
	return 0;
}
*/