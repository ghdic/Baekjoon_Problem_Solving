/*
https://www.acmicpc.net/problem/11050

&Title
11050�� - ���� ��� 1

&Question
�ڿ��� \(N\)�� ���� \(K\)�� �־����� �� ���� ��� 
\(\binom{N}{K}\)�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� \(N\)�� \(K\)�� �־�����. (1 �� \(N\) 
�� 10, 0 �� \(K\) �� \(N\)) 

&Output
\(\binom{N}{K}\)�� ����Ѵ�. 

&Example
-input
5 2

-output
10


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int factorial(int n) {
	int k = 1;
	for (int i = 2; i <= n; i++) {
		k *= i;
	}
	return k;
}
int main() {
	int N, K;
	scanf("%d %d", &N, &K);

	printf("%d\n", factorial(N) / (factorial(K)*factorial(N - K)));

	return 0;
}
*/