/*
https://www.acmicpc.net/problem/9506

&Title
������� ��
&Question
� ���� n�� �ڽ��� ������ ������� ������ ��Ÿ���� ����, �� ���� �Ϻ��� ����� �Ѵ�.

���� ��� 6�� 6 = 1 + 2 + 3 ���� �Ϻ��� ���̴�.

n�� �Ϻ��� �� ���� �ƴ��� �Ǵ����ִ� ���α׷��� �ۼ��϶�.
&Input
�Է��� �׽�Ʈ ���̽����� �� �� �������� n�� �־�����. (2 < n < 100, 000)

�Է��� �������� -1�� �־�����.
&Output
�׽�Ʈ���̽� ���� ���ٿ� �ϳ��� ����ؾ� �Ѵ�.

n�� �Ϻ��� �����, n�� n�� �ƴ� ������� ������ ��Ÿ���� ����Ѵ�(���� ��� ����).

�� ��, ������� ������������ �����ؾ� �Ѵ�.

n�� �Ϻ��� ���� �ƴ϶�� n is NOT perfect. �� ����Ѵ�.
&Example
-input
6
12
28
-1
-output
6 = 1 + 2 + 3
12 is NOT perfect.
28 = 1 + 2 + 4 + 7 + 14
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;

	while (true) {
		int tmp = 0, cnt = 0;
		int arr[1000] = { 0 };
		cin >> N;
		if (N == -1)break;
		for (int i = 1; i <= N/2; i++) {
			if (N%i == 0){
				arr[cnt++] = i;
				tmp += i;
		}
		
		}
		if (N == tmp) {
			cout << N << " =";
			for (int i = 0; i < cnt; i++)
				if (i == cnt - 1)cout << " " << arr[i] << endl;
				else cout << " " << arr[i] << " +";
		}
		else cout << N << " is NOT perfect." << endl;
	}
	return 0;
}
*/