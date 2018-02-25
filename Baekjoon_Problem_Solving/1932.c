/*
https://www.acmicpc.net/problem/1932

&Title
���ڻﰢ��

&Question
			7
		  3   8
		8   1   0
	  2   7   4   4
	4   5   2   6   5

�� �׸��� ũ�Ⱑ 5�� ���� �ﰢ���� �� ����̴�.

�� ���� 7���� �����ؼ� �Ʒ��� �ִ� �� �� �ϳ��� �����Ͽ� �Ʒ������� ������ ��, �������� ���õ� ���� ���� �ִ밡 �Ǵ� ��θ� ���ϴ� ���α׷��� �ۼ��϶�. �Ʒ����� �ִ� ���� ���� ������ ���õ� ���� �밢�� ���� �Ǵ� �밢�� �����ʿ� �ִ� �� �߿����� ������ �� �ִ�.

�ﰢ���� ũ��� 1 �̻� 500 �����̴�. �ﰢ���� �̷�� �ִ� �� ���ڴ� ��� �����̸�, ������ 0 �̻� 9999 �����̴�.
&Input
ù° �ٿ� �ﰢ���� ũ�� n(1 �� n �� 500)�� �־�����, ��° �ٺ��� n+1�ٱ��� ���� �ﰢ���� �־�����.

&Output
ù° �ٿ��� �ִ밡 �Ǵ� ���� ����Ѵ�.

&Example
-input
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
-o


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int input[501][501] = {0};
int DP[501][501] = {0};
int main() {
	int N, tmp=0, max=0;

	scanf("%d", &N);
	for (int i = 1; i <= N; ++i)
		for (int j = 1; j <= i; ++j)
			scanf("%d", &input[i][j]);

	DP[1][1] = input[1][1];
	for(int i=1;i<N;++i)
		for (int j = 1; j <= i; ++j) {
			tmp = DP[i][j] + input[i + 1][j];
			if (DP[i + 1][j] < tmp)
				DP[i + 1][j] = tmp;
			DP[i + 1][j + 1] = DP[i][j] + input[i + 1][j + 1];
		}

	for (int i = 1; i <= N; ++i) {
		if (max < DP[N][i])
			max = DP[N][i];
	}

	printf("%d\n", max);
	return 0;
}
*/