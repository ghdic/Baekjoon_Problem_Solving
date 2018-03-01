/*
https://www.acmicpc.net/problem/11726

&Title
2��n Ÿ�ϸ�

&Question
2��n ũ���� ���簢���� 1��2, 2��1 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Ʒ� �׸��� 2��5 ũ���� ���簢���� ä�� �� ���� ����� ���̴�.

&Input
ù° �ٿ� n�� �־�����. (1 �� n �� 1,000)

&Output
ù° �ٿ� 2��n ũ���� ���簢���� ä��� ����� ���� 10,007�� ���� �������� ����Ѵ�.

&Example
-input
2
-output
2

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int n) {
	int n1=1, n2=2, tmp;
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;

	for (int i = 2; i < n; ++i) {
		tmp = (n1 + n2)%10007;
		n1 = n2;
		n2 = tmp;
	}
	return tmp;
}
int main() {
	int N;

	scanf("%d", &N);
	printf("%d\n", fibo(N));
	return 0;
}