/*
https://www.acmicpc.net/problem/11653

&Title
���μ�����
&Question
���� N�� �־����� ��, ���μ������ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٿ� ���� N (1 �� N �� 10,000,000)�� �־�����.
&Output
N�� �μ��� �� �ٿ� �ϳ��� �����ϴ� ������� ����Ѵ�.
&Example
-input
72
-output
2
2
2
3
3
*/

/*
#include <iostream>
using namespace std;


int main() {
	int N, tmp=2;

	cin >> N;
	if (N == 1) {
		return 0;
	}
	while (N != 1 ) {

		while (N%tmp == 0) {
			N = N / tmp;
			cout << tmp << endl;
		}
		tmp++;
	}
	return 0;
}
*/