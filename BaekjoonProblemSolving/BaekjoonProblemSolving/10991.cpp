/*
https://www.acmicpc.net/problem/10991

&Title
�� ��� - 16
&Question
������ ���� ����� ��Ģ�� ������ �ڿ� ���� ��� ������.
&Input
ù° �ٿ� N (1<=N<=100)�� �־�����.
&Output
ù° �ٺ��� N��° �� ���� ���ʴ�� ���� ����Ѵ�.
&Example
-input
4
-output
	*
   * *
  * * *
 * * * *
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int value = N - i - 1;
		for (int j = 0; j < N; j++) {
			if (j < value)cout << " ";
			else if (j == N-1)cout << "*";
			else cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
*/