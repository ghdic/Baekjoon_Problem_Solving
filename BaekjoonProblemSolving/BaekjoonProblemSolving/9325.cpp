/*
https://www.acmicpc.net/problem/9325

&Title
��?
&Question
�غ��̴� �б��� �ٴϸ鼭 ƴƴ�� �� ������ �ڵ����� ����� �Ѵ�. �ڵ����� �������� �ɼ��� ���Խ�ų �� �ִµ� �غ��̴� ������ ������ ���� ���ϱ� ������ ģ�� �¿��̿��� ������ û�ߴ�. ������ �¿��̵� ������ ������ ���Ѵ�. �ҽ��� �� �� ģ���� ���� ��� �ɼ��� �־��� �ڵ����� �����ϴµ� �ʿ��� �׼��� ����� ����.
&Input
ù°�ٿ� �׽�Ʈ ���̽��� ������ �־�����.

�� �׽�Ʈ ���̽��� ù �ٿ� �ڵ����� ���� s�� �־�����. (1 �� s �� 100 000)

��° �ٿ� �غ��̰� �����Ϸ��� �ϴ� ���� �ٸ� �ɼ��� ���� n�� �־�����. (0 �� n �� 1 000)

���̾� n���� ���� �Է����� ���´�. �� ���� q �� p�� �̷���� �ִµ� q�� �غ��̰� ����� �ϴ� Ư�� �ɼ��� �����̰� p�� �ش� �ɼ��� �����̴�. (1 �� q �� 100, 1 �� p �� 10 000)
&Output
�� �׽�Ʈ ���̽� ����, �غ��̰� ���������� �����Ϸ��� �ڵ����� ������ ���پ� ����Ѵ�.
&Example
-input
2
10000
2
1 2000
3 400
50000
0
-output
13200
50000
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, car, cnt, q, p, sum;
	cin >> N;
	for (int i = 0; i < N; i++) {
		sum = 0;
		cin >> car;
		sum += car;
		cin >> cnt;
		for (int j = 0; j < cnt; j++) {
			cin >> q >> p;
			sum += q * p;
		}
		cout << sum << endl;
	}
	return 0;
}
*/