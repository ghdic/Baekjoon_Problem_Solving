/*
https://www.acmicpc.net/problem/10102

&Title
��ǥ
&Question
A�� B�� �� ����� ������ ������� �����ߴ�. ������� ���ڴ� �ɻ������� ��ǥ�� �����ȴ�.

�ɻ������� ��ǥ ����� �־����� ��, � ����� ����ϴ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
�Է��� �� �� �ٷ� �̷���� �ִ�. ù° �ٿ��� �ɻ������� �� V (1 ��  V ��  15)�� �־�����, ��° �ٿ��� �� �ɻ������� �������� ��ǥ�ߴ����� �־�����. A�� B�� ���� �� �����ڸ� ��Ÿ����.
&Output
A�� ���� ǥ�� B���� ���� ��쿡�� A
B�� ���� ǥ�� A���� ���� ��쿡�� B
���� ��쿡�� Tie
&Example
-input
6
ABBABB
-output
B
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, A = 0, B = 0;
	char tmp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (tmp == 'A')A++;
		else if (tmp == 'B')B++;
	}
	if (A > B)cout << "A" << endl;
	else if (A == B)cout << "Tie" << endl;
	else cout << "B" << endl;
	return 0;
}
*/