/*
https://www.acmicpc.net/problem/2441

&Title
����� - 4

&Question
ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����
������, �������� �������� ������ �� (���� ����)�� ����Ͻÿ�.

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
		for (int j = 0; j < N; j++)
			if (i <= j)
				printf("*");
			else
				printf(" ");
		puts("");
	}
	return 0;
}
*/