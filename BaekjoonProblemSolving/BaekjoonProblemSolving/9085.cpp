/*
https://www.acmicpc.net/problem/9085

&Title
���ϱ�
&Question
�ڿ��� N���� �ָ� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
�Է��� ù �ٿ��� �׽�Ʈ ���̽��� ���� T(1 �� T �� 10)�� �־�����. �� �׽�Ʈ ���̽��� ù �ٿ� �ڿ����� ���� N(1 �� N �� 100)�� �־�����, �� ���� �ٿ���  N���� �ڿ����� �־�����. ������ �ڿ��� ���̿��� �ϳ����� ������ �ִ�.
&Output
�� �׽�Ʈ ���̽��� ���ؼ� �־��� �ڿ����� ���� �� �ٿ� �ϳ��� ����Ѵ�.
&Example
-input
2
5
1 1 1 1 1
7
1 2 3 4 5 6 7
-output
5
28
*/

/*
#include <iostream>
using namespace std;

int main() {
	int T, N, a, sum;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		sum = 0;
		for (int j = 0; j < N; j++) {
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
	}

	return 0;
}
*/