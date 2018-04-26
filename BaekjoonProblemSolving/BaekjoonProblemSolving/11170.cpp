/*
https://www.acmicpc.net/problem/11170

&Title
11170�� - 0�� ����

&Question
N���� M������ ������ ���̿� ������ �� ���̿� ����
0���� ���� ���α׷��� �ۼ��϶�.���� ���, N, M�� ���� 0,
10�� �� 0�� ���� 0�� �ϳ�, 10�� �ϳ��� �����Ƿ�
���� 2�̴�.

&Input
ù ��° �ٿ� �׽�Ʈ���̽��� �� T�� �־�����.�� �ٿ���
N�� M�� �־�����.1 �� T �� 200 �� N
�� M �� 1,000,000

&Output
�� �ٿ� N���� M������ 0�� ������ ����Ѵ�.

&Example
-input
3
0 10
33 1005
1 4

-output
2
199
0

*/
/*
#include <iostream>
using namespace std;

int cntZero(int a, int b) {
	int cnt = 0;
	for (int i = a; i <= b; i++) {
		int j = i;
		if (j == 0) {
			cnt++;
			continue;
		}
		while (j % 10 != 0 || j / 10 != 0) {
			if (j % 10 == 0)cnt++;
			j /= 10;
		}
	}
	return cnt;
}
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		cout << cntZero(a, b) << endl;
	}
	return 0;
}
*/