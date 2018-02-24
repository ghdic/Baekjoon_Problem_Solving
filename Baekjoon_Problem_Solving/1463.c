/*
https://www.acmicpc.net/problem/1463

&Title
1�� �����

&Question
���� X�� ����� �� �ִ� ������ ������ ���� �� ���� �̴�.

1.X�� 3���� ������ ��������, 3���� ������.
2.X�� 2�� ������ ��������, 2�� ������.
3.1�� ����.
���� N�� �־����� ��, ���� ���� ���� �� ���� ������ ����ؼ� 1�� ������� �Ѵ�. ������ ����ϴ� Ƚ���� �ּҰ��� ����Ͻÿ�.

&Input
ù° �ٿ� 1���� ũ�ų� ����, 106���� �۰ų� ���� �ڿ��� N�� �־�����.

&Output
ù° �ٿ� ������ �ϴ� Ƚ���� �ּҰ��� ����Ѵ�.

&Example
-input
2
-output
1


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int DP[1000001];

int min(int a, int b) {
	return a > b ? b : a;
}
int main() {
	int N;

	scanf("%d", &N);
	DP[1] = 0;

	for (int i = 2; i <= N; i++) {
		DP[i] = DP[i - 1] + 1;
		if (i % 2 == 0)
			DP[i] = min(DP[i], DP[i / 2] + 1);
		if (i % 3 == 0)
			DP[i] = min(DP[i], DP[i / 3] + 1);
	}

	printf("%d\n", DP[N]);
	
	return 0;
}
*/