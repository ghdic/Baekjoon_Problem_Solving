/*
https://www.acmicpc.net/problem/2442

&Title
����� - 5
&Question
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 3��, ..., N��° �ٿ��� �� 2*N-1���� ��� ����

���� ����� �������� ��Ī�̾�� �Ѵ�.
&Input
ù° �ٿ� N (1<=N<=100)�� �־�����.
&Output
ù° �ٺ��� N��° �� ���� ���ʴ�� ���� ����Ѵ�.
&Example
-input
5
-output
	*
   ***
  *****
 *******
*********
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N * 2 - 1; j++) {
			if (j < N - i -1)cout << " ";
			else if (j >= N + i);
			else cout << "*";
		}
		cout << endl;
	}
	return 0;
}
*/