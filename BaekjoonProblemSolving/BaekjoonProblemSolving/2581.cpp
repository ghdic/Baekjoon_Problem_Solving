/*
https://www.acmicpc.net/problem/2581

&Title
�Ҽ�
&Question
�ڿ��� M�� N�� �־��� �� M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ��� �̵� �Ҽ��� �հ� �ּҰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.

���� ��� M=60, N=100�� ��� 60�̻� 100������ �ڿ��� �� �Ҽ��� 61, 67, 71, 73, 79, 83, 89, 97 �� 8���� �����Ƿ�, �̵� �Ҽ��� ���� 620�̰�, �ּҰ��� 61�� �ȴ�.
&Input
�Է��� ù° �ٿ� M��, ��° �ٿ� N�� �־�����.

M�� N�� 10,000������ �ڿ����̸�, M�� N���� �۰ų� ����.
&Output
M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ã�� ù° �ٿ� �� ����, ��° �ٿ� �� �� �ּҰ��� ����Ѵ�.

��, M�̻� N������ �ڿ��� �� �Ҽ��� ���� ���� ù° �ٿ� -1�� ����Ѵ�.
&Example
-input
60
100
-output
620
61
*/

/*
#include <iostream>
using namespace std;

int main() {
	int M, N, sum = 0, first;
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		int cnt = 0;
		for (int j = 1; j < i; j++) {
			if (i%j == 0)cnt++;
		}
		if (cnt == 1) {
			if (sum == 0)first = i;
			sum += i;
		}
	}
	if (sum == 0)cout << -1 << endl;
	else {
		cout << sum << endl;
		cout << first << endl;
	}
	return 0;
}
*/