/*
https://www.acmicpc.net/problem/2440

&Title
����� - 3

&Question
ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����

&Input
ù° �ٿ� N (1<=N<=100)�� �־�����.

&Output
ù° �ٺ��� N��° �� ���� ���ʴ�� ���� ����Ѵ�.

&Example
-input
5
-output
*****
****
***
**
*

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = N-1; j >= 0; j--)
			if (i <= j)
				printf("*");
		puts("");
	}

	return 0;
}
*/