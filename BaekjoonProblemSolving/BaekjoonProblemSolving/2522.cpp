/*
https://www.acmicpc.net/problem/2522

&Title
����� - 12
&Question
������ ���� ����� ��Ģ�� ������ �ڿ� ���� ��� ������.
&Input
ù° �ٿ� N (1<=N<=100)�� �־�����.
&Output
ù° �ٺ��� 2*N-1��° �� ���� ���ʴ�� ���� ����Ѵ�.
&Example
-input
3
-output
  *
 **
***
 **
  *
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N * 2 - 1; i++) {
		for (int j = 0; j < N; j++) {
			if (i < N) {
				if (j < N - i - 1)cout << " ";
				else cout << "*";
			}
			else {
				if (j <= i - N)cout << " ";
				else cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}
*/