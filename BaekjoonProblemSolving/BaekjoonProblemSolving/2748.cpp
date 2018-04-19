/*
https://www.acmicpc.net/problem/2748

&Title
�Ǻ���ġ �� 2
&Question
�Ǻ���ġ ���� 0�� 1�� �����Ѵ�. 0��° �Ǻ���ġ ���� 0�̰�, 1��° �Ǻ���ġ ���� 1�̴�. �� ���� 2��° ���ʹ� �ٷ� �� �� �Ǻ���ġ ���� ���� �ȴ�.

�̸� ������ �Ẹ�� Fn = Fn-1 + Fn-2 (n>=2)�� �ȴ�.

n=17�϶� ���� �Ǻ���ġ ���� �Ẹ�� ������ ����.

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597

n�� �־����� ��, n��° �Ǻ���ġ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٿ� n�� �־�����. n�� 90���� �۰ų� ���� �ڿ����̴�.
&Output
ù° �ٿ� n��° �Ǻ���ġ ���� ����Ѵ�.
&Example
-input
10
-output
55
*/

/*
#include <iostream>
using namespace std;

long long int fibo(int n) {
	long long int n1 = 0, n2 = 1, n3;
	if (n == 0)return n1;
	if (n == 1)return n2;

	for (int i = 2; i <= n; i++) {
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	return n3;
}
int main() {
	int N;
	cin >> N;
	cout << fibo(N) << endl;
	return 0;
}
*/