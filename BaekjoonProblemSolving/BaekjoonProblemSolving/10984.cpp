/*
https://www.acmicpc.net/problem/10984

&Title
�� ������ ������
&Question
������ �ٿ�� ������ ��ٰ� ����, �ڽ��� ���� ����� ������ �ñ�������. �л�ý��۵� ���� �������ϴ� �ٿ츦 ���� �����ֵ��� ����.
&Input
ù ��° �ٿ� �б��� �� T�� �־�����. �� ��° �ٺ��� T�� �б⿡ ���� ������ �־�����.

�� �б⿡ ���� ������ ������ ���� �����Ǿ� �ִ�. ù ��° �ٿ� ����� ������ �� N�� �־�����, ���� N�� �ٿ� ���ļ� N�� ������� ���� C�� ���� G�� �־�����. (1 �� N �� 10, 1 �� C �� 6�� ����. G�� 0�� x-0.3, x, x+0.3 (x=1, 2, 3, 4) �� �ϳ��� �־�����.)
&Output
�� �б⿡ ���� �ٿ��� �� ������ ����(GPA)�� ����Ѵ�. ������ �Ҽ��� �Ʒ� �� ��° �ڸ����� �ݿø��Ѵ�.
&Example
-input
2
4
3 4.3
2 2.0
4 0.0
2 4.0
3
4 0.0
4 0.0
3 0.0
-output
11 2.3
11 0.0
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, S, score, a;
	float sum, b;
	cout.setf(ios::fixed);
	cout.precision(1);
	cin >> N;
	for (int i = 0; i < N; i++) {
		score = 0, sum = 0.0f;
		cin >> S;
		for (int j = 0; j < S; j++) {
			cin >> a >> b;
			score += a;
			sum += a * b;
		}
		cout << score << " " << sum / score << endl;
	}
	return 0;
}
*/