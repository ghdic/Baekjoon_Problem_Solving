/*
https://www.acmicpc.net/problem/2576

&Title
Ȧ��
&Question
7���� �ڿ����� �־��� ��, �̵� �� Ȧ���� �ڿ������� ��� ��� �� ���� ���ϰ�, ���� Ȧ���� �� �ּҰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.

���� ���, 7���� �ڿ��� 12, 77, 38, 41, 53, 92, 85�� �־����� �̵� �� Ȧ���� 77, 41, 53, 85�̹Ƿ� �� ����

77 + 41 + 53 + 85 = 256

�� �ǰ�,

41 < 53 < 77 < 85

�̹Ƿ� Ȧ���� �� �ּҰ��� 41�� �ȴ�.
&Input
�Է��� ù° �ٺ��� �ϰ� ��° �ٱ��� �� �ٿ� �ϳ��� �ڿ����� �־�����. �־����� �ڿ����� 100���� �۴�.
&Output
Ȧ���� �������� �ʴ� ��쿡�� ù° �ٿ� -1�� ����Ѵ�. Ȧ���� �����ϴ� ��� ù° �ٿ� Ȧ������ ���� ����ϰ�, ��° �ٿ� Ȧ���� �� �ּҰ��� ����Ѵ�.
&Example
-input
12
77
38
41
53
92
85
-output
256
41
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, sum = 0, min = 9999;
	for (int i = 0; i < 7; i++) {
		cin >> N;
		if (N % 2 == 1) {
			sum += N;
			if (N < min)
				min = N;
		}
	}
	if (sum == 0)cout << -1 << endl;
	else {
		cout << sum << endl;
		cout << min << endl;
	}
	return 0;
}
*/