/*
https://www.acmicpc.net/problem/10995

&Title
�� ��� - 20
&Question
������ ���� ����� ��Ģ�� ������ �ڿ� ���� ��� ������.
&Input
ù° �ٿ� N (1<=N<=100)�� �־�����.
&Output
ù° �ٺ��� ���ʴ�� ���� ����Ѵ�.
&Example
-input
4
-output
* * * *
* * * *
* * * *
* * * *
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		if (i % 2 == 1)cout << " ";
		for (int j = 0; j < N; j++) {
			if (j == N - 1)cout << "*";
			else cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
*/