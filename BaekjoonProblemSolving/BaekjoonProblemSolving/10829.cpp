/*
https://www.acmicpc.net/problem/10829

&Title
10829�� - ������ ��ȯ

&Question
�ڿ��� N�� �־�����. N�� �������� �ٲ㼭 ����ϴ� ���α׷���
�ۼ��Ͻÿ�.

&Input
ù° �ٿ� �ڿ��� N�� �־�����. (1 �� N
�� 100,000,000,000,000)

&Output
N�� �������� �ٲ㼭 ����Ѵ�. �������� 0���� �����ϸ� �ȵȴ�.

&Example
-input
53

-output
110101

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;
void printBinary(long long n);

int main() {
	long long i;

	scanf("%lld", &i);

	printBinary(i);


	return 0;
}

void printBinary(long long n) {
	long long tmp;

	for (tmp = 1; tmp <= n; tmp <<= 1) {
	}

	for (tmp >>= 1; tmp >= 1; tmp >>= 1) {
		printf("%d", !!(n & tmp));
	}

	printf("\n");
}
*/