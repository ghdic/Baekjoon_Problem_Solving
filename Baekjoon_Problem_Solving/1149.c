/*
https://www.acmicpc.net/problem/1149

&Title
RGB�Ÿ�

&Question
RGB�Ÿ��� ��� ������� ���� ����, �ʷ�, �Ķ��߿� �ϳ��� ĥ�Ϸ��� �Ѵ�. ����, �׵��� ��� �̿��� ���� ������ ĥ�� �� ���ٴ� ��Ģ�� ���ߴ�. �� i�� �̿��� �� i-1�� �� i+1�̴�. ó�� ���� ������ ���� �̿��� �ƴϴ�.

�� ���� �������� ĥ�� �� ��� ���, �ʷ����� ĥ�� �� ��� ���, �Ķ����� ��� ����� �־��� ��, ��� ���� ĥ�� �� ��� ����� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

&Input
ù° �ٿ� ���� �� N�� �־�����. N�� 1,000���� �۰ų� ����. ��° �ٺ��� N���� �ٿ� �� ���� �������� ĥ�� ��, �ʷ����� ĥ�� ��, �Ķ����� ĥ�� �� ��� ����� �־�����.

&Output
ù° �ٿ� ��� ���� ĥ�� �� ��� ����� �ּڰ��� ����Ѵ�.

&Example
-input
3
26 40 83
49 60 57
13 89 99
-output
96

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min3(int a, int b, int c) {
	if (a > b) {
		return b > c ? c : b;
	}
	else {
		return a > c ? c : a;
	}
}

int min2(int a, int b) {
	return a > b ? b : a;
}

int main() {
	int N;
	int RGB[1001][3], DP[1001][3];
	scanf("%d", &N);

	for (int i = 1; i <= N; ++i)
		scanf("%d %d %d", &RGB[i][0], &RGB[i][1], &RGB[i][2]);
	DP[0][0] = DP[0][1] = DP[0][2] = 0;
	for (int i = 1; i <= N; ++i) {
		DP[i][0] = min2(DP[i-1][1], DP[i-1][2]) + RGB[i][0];
		DP[i][1] = min2(DP[i-1][0], DP[i-1][2]) + RGB[i][1];
		DP[i][2] = min2(DP[i-1][0], DP[i-1][1]) + RGB[i][2];
	}

	printf("%d\n", min3(DP[N][0], DP[N][1], DP[N][2]));
	
	return 0;
}
*/