/*
https://www.acmicpc.net/problem/2445

&Title
����� - 8
&Question
������ ���� ����� ��Ģ�� ������ �ڿ� ���� ��� ������.
&Input
ù° �ٿ� N (1<=N<=100)�� �־�����.
&Output
ù° �ٺ��� 2*N-1��° �� ���� ���ʴ�� ���� ����Ѵ�.
&Example
-input
5
-output
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N * 2 - 1; i++) {
		int k = N - abs(i - (N - 1));
		for (int j = 0; j < N * 2; j++) {
			if (j < k || j>=N * 2 - k)cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}
*/