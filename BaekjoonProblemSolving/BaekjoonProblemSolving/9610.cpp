/*
https://www.acmicpc.net/problem/9610

&Title
��и�
&Question
2���� ��ǥ ���� ���� ���� ��ǥ (x,y)�� �־����� ��, �� ��и�� �࿡ ���� �� �� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٿ� ���� ���� n (1 �� n �� 1000)�� �־�����. ���� n�� �ٿ��� ���� ��ǥ (xi, yi)�� �־�����. (-106 �� xi, yi �� 106)
&Output
�� ��и�� �࿡ ���� �� �� �ִ����� ���� ��°� ���� �������� ����Ѵ�.
&Example
-input
5
0 0
0 1
1 1
3 -3
2 2
-output
Q1: 2
Q2: 0
Q3: 0
Q4: 1
AXIS: 2
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, x, y, Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, AXIS = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		if (x > 0 && y > 0)Q1++;
		else if (x < 0 && y>0)Q2++;
		else if (x < 0 && y < 0)Q3++;
		else if (x > 0 && y < 0)Q4++;
		else AXIS++;
	}
	cout << "Q1: " << Q1 << endl;
	cout << "Q2: " << Q2 << endl;
	cout << "Q3: " << Q3 << endl;
	cout << "Q4: " << Q4 << endl;
	cout << "AXIS: " << AXIS << endl;

	return 0;
}
*/