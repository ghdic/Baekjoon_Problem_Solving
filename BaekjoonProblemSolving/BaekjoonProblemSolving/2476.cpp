/*
https://www.acmicpc.net/problem/2476

&Title
�ֻ��� ����
&Question
1�������� 6������ ���� ���� 3���� �ֻ����� ������ ������ ���� ��Ģ�� ���� ����� �޴� ������ �ִ�.

���� ���� 3���� ������ 10,000��+(���� ��)*1,000���� ����� �ް� �ȴ�.
���� ���� 2���� ������ ��쿡�� 1,000��+(���� ��)*100���� ����� �ް� �ȴ�.
��� �ٸ� ���� ������ ��쿡�� (�� �� ���� ū ��)*100���� ����� �ް� �ȴ�.
���� ���, 3���� �� 3, 3, 6�� �־����� ����� 1,000+3*100���� ���Ǿ� 1,300���� �ް� �ȴ�. �� 3���� ���� 2, 2, 2�� �־����� 10,000+2*1,000 ���� ���Ǿ� 12,000���� �ް� �ȴ�. 3���� ���� 6, 2, 5�� �־����� �� �� ���� ū ���� 6�̹Ƿ� 6*100���� ���Ǿ� 600���� ������� �ް� �ȴ�.

N (2��N��1,000) ���� �ֻ��� ���ӿ� �����Ͽ��� ��, ���� ���� ����� ���� ����� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٿ��� �����ϴ� ��� �� N�� �־����� �� ���� �ٺ��� N���� �ٿ� ������� �ֻ����� ���� 3���� ���� ��ĭ�� ���̿� �ΰ� ���� �־�����.
&Output
ù° �ٿ� ���� ���� ����� ���� ����� ����� ����Ѵ�.
&Example
-input
3
3 3 6
2 2 2
6 2 5
-output
12000
*/

/*
#include <iostream>
using namespace std;

int main() {
	int a, b, c, N, max = 0, money;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> a >> b >> c;

		if (a == b && b == c) {
			money = 10000 + 1000 * a;
		}
		else if (a == b || b == c || c == a) {
			int tmp = a == b ? a : c;
			money = 1000 + 100 * tmp;
		}
		else {
			int tmp = (a > b ? a : b) > c ? (a > b ? a : b) : c;
			money = 100 * tmp;
		}
		if (max < money)
			max = money;
	}
	cout << max << endl;
	return 0;
}
*/