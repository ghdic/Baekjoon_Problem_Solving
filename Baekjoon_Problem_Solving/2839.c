/*
https://www.acmicpc.net/problem/2839

&Title
���� ���

&Question
����̴� ���� �������忡�� ������ ����ϰ� �ִ�. ����̴� ���� �������Կ� ������ ��Ȯ�ϰ� Nų�α׷��� ����ؾ� �Ѵ�.
�������忡�� ����� ������ ������ ����� �ִ�. ������ 3ų�α׷� ������ 5ų�α׷� ������ �ִ�.
����̴� ������ ������, �ִ��� ���� ������ ��� ������ �Ѵ�.
���� ���, 18ų�α׷� ������ ����ؾ� �� ��, 3ų�α׷� ���� 6���� �������� ������,
5ų�α׷� 3���� 3ų�α׷� 1���� ����ϸ�, �� ���� ������ ������ ����� �� �ִ�.
����̰� ������ ��Ȯ�ϰ� Nų�α׷� ����ؾ� �� ��, ���� �� ���� �������� �Ǵ���
�� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

&Input
ù° �ٿ� N�� �־�����. (3 �� N �� 5000)

&Output
����̰� ����ϴ� ������ �ּ� ������ ����Ѵ�. ����, ��Ȯ�ϰ� Nų�α׷��� ���� �� ���ٸ� -1�� ����Ѵ�.

&Example
-input1
18
-output1
4

-input2
4
-output2
-1

-input3
6
-output3
2

-input4
9
-output4
3

-input5
11
-output5
3

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, portion, rest, result;

	scanf("%d", &N);

	portion = N / 5;
	rest = N % 5;

	if (rest == 0)
		result = portion;
	else {
		for (int i = portion; i >= 0; i--) {
			if (rest % 3 == 0) {
				result = rest / 3 + i;
				break;
			}
			rest += 5;

			if (i == 0)
				result = -1;
		}
	}

	printf("%d\n", result);
	return 0;
}
*/