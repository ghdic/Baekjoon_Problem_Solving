/*
https://www.acmicpc.net/problem/10870

&Title
10870�� - �Ǻ���ġ �� 5

&Question
�Ǻ���ġ ���� 0�� 1�� �����Ѵ�. 0��° �Ǻ���ġ ���� 
0�̰�, 1��° �Ǻ���ġ ���� 1�̴�. �� ���� 2��° ���ʹ� 
�ٷ� �� �� �Ǻ���ġ ���� ���� �ȴ�.�̸� ������ �Ẹ�� 
Fn = Fn-1 + Fn-2 (n>=2)�� �ȴ�.n=17�϶� ���� �Ǻ���ġ 
���� �Ẹ�� ������ ����.0, 1, 1, 2, 3, 5, 
8, 13, 21, 34, 55, 89, 144, 233, 377, 
610, 987, 1597n�� �־����� ��, n��° �Ǻ���ġ ���� ���ϴ� 
���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� n�� �־�����. n�� 20���� �۰ų� ���� 
�ڿ��� �Ǵ� 0�̴�. 

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
	long long int n0 = 0, n1 = 1, n2 = 1;
	if (n == 0)return 0;
	if (n == 1)return 1;
	for (int i = 2; i <= n; i++) {
		n2 = n0 + n1;
		n0 = n1;
		n1 = n2;
	}
	return n2;
}
int main() {
	int N;
	cin >> N;
	cout << fibo(N) << endl;
	return 0;
}
*/