/*
https://www.acmicpc.net/problem/2439

&Title
����� - 2

&Question
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
������, �������� �������� ������ �� (���� ����)�� ����Ͻÿ�.

&Input
ù° �ٿ� N (1<=N<=100)�� �־�����.

&Output
ù° �ٺ��� N��° �� ���� ���ʴ�� ���� ����Ѵ�.

&Example
-input
5
-output
    *
   **
  ***
 ****
*****

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = N-1; j >= 0; j--)
			if (i < j)
				printf(" ");
			else
				printf("*");
			puts("");
	}

	return 0;
}
*/