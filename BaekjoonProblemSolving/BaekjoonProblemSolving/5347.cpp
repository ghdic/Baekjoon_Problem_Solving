/*
https://www.acmicpc.net/problem/5347

&Title
5347�� - LCM

&Question
�� �� a�� b�� �־����� ��, a�� b��
�ּ� ������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

&Input
ù° �ٿ� �׽�Ʈ ���̽��� ���� n�� �־�����. ����
n�� �ٿ��� a�� b�� �־�����. a�� b���̿��� ������ �ϳ�
�̻� �ִ�. �� ���� �鸸���� �۰ų� ���� �ڿ����̴�.

&Output
�� �׽�Ʈ ���̽��� ���ؼ� �Է����� �־��� �� ����
�ּҰ������ ����Ѵ�.

&Example
-input
3
15 21
33 22
9 10

-output
105
66
90


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

long long gcd(long long a, long long b){
	if (b == 0)return a;
	return gcd(b, a % b);
}
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		long long a, b;
		scanf("%lld %lld", &a, &b);
		printf("%lld\n", a*b / gcd(a, b));
	}
	return 0;
}
*/