/*
https://www.acmicpc.net/problem/3009

&Title
�׹�° ��
&Question
�� ���� �־����� ��, �࿡ ������ ���簢���� ����� ���ؼ� �ʿ��� �� ��° ���� ã�� ���α׷��� �ۼ��Ͻÿ�.
&Input
�� ���� ��ǥ�� �� �ٿ� �ϳ��� �־�����. ��ǥ�� 1���� ũ�ų� ����, 1000���� �۰ų� ���� �����̴�.
&Output
���簢���� �׹�° ���� ��ǥ�� ����Ѵ�.
&Example
-input
30 20
10 10
10 20
-output
30 10
*/

/*
#include <iostream>
using namespace std;

int main() {
	int	x[3], y[3], X, Y;

	for (int i = 0; i < 3; i++)
		cin >> x[i] >> y[i];
	if (x[0] == x[1])X = x[2];
	else if (x[0] == x[2])X = x[1];
	else if (x[1] == x[2])X = x[0];

	if (y[0] == y[1])Y = y[2];
	else if (y[0] == y[2])Y = y[1];
	else if (y[1] == y[2])Y = y[0];

	cout << X << " " << Y << endl;
	return 0;
}
*/