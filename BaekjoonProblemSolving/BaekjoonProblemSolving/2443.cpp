/*
https://www.acmicpc.net/problem/2443

&Title
����� - 6
&Question
ù° �ٿ��� �� 2*N-1��, ��° �ٿ��� �� 2*N-3��, ..., N��° �ٿ��� �� 1���� ��� ����

���� ����� �������� ��Ī�̾�� �Ѵ�.
&Input
ù° �ٿ� N (1<=N<=100)�� �־�����.
&Output
ù° �ٺ��� N��° �� ���� ���ʴ�� ���� ����Ѵ�.
&Example
-input
5
-output
*********
 *******
  *****
   ***
	*
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N * 2 - 1; j++) {
			if (j < i)cout << " ";
			else if (j >= N * 2 - 1 - i);
			else cout << "*";
		}
		cout << endl;
	}
	return 0;
}
*/