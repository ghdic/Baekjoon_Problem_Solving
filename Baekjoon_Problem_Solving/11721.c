/*
https://www.acmicpc.net/problem/11721

&Title
�� ���� ���� ����ϱ�

&Question
���ĺ� �ҹ��ڿ� �빮�ڷθ� �̷���� ���̰� N�� �ܾ �־�����.
�� �ٿ� 10���ھ� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

&Input
ù° �ٿ� �ܾ �־�����. �ܾ�� ���ĺ� �ҹ��ڿ� �빮�ڷθ�
�̷���� ������, ���̴� 100�� ���� �ʴ´�. ���̰� 0�� �ܾ�� �־����� �ʴ´�.

&Output
�Է����� �־��� �ܾ �� ���� ��� �� �ٿ� �ϳ��� ����Ѵ�. �ܾ��� ���̰� 10�� ����� �ƴ� ��쿡�� ������ �ٿ��� 10�� ������ ���ڸ� ����� ���� �ִ�.

&Example
-input
BaekjoonOnlineJudge
-output
BaekjoonOn
lineJudge

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a[100];

	scanf("%s", &a);

	for (int i = 0; i < 100; i++) {
		if (a[i] == '\0')
			break;

		printf("%c", a[i]);
		if (i % 10 == 9)
			printf("\n");


	}
	puts("");
	return 0;
}