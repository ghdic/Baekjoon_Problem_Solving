/*
https://www.acmicpc.net/problem/2747

&Title
�Ǻ���ġ ��

&Question
�Ǻ���ġ ���� 0�� 1�� �����Ѵ�. 0��° �Ǻ���ġ ���� 0�̰�, 1��° �Ǻ���ġ ���� 1�̴�. �� ���� 2��° ���ʹ� �ٷ� �� �� �Ǻ���ġ ���� ���� �ȴ�.

�̸� ������ �Ẹ�� Fn = Fn-1 + Fn-2 (n>=2)�� �ȴ�.

n=17�϶� ���� �Ǻ���ġ ���� �Ẹ�� ������ ����.

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597

n�� �־����� ��, n��° �Ǻ���ġ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

&Input
ù° �ٿ� n�� �־�����. n�� 45���� �۰ų� ���� �ڿ����̴�.

&Output
ù° �ٿ� n��° �Ǻ���ġ ���� ����Ѵ�.

&Example
-input
10
-output
55

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int n1 = 0, n2 = 1, n3, result;
	scanf("%d", &N);

	if (N == 0)
		result = 0;
	else if (N == 1)
		result = 1;
	else {
		for (int i = 2; i <= N; i++) {
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
		result = n3;
	}
	printf("%d\n", result);
	return 0;
}
*/