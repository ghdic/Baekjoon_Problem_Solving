/*
https://www.acmicpc.net/problem/1978

&Title
�Ҽ� ã��
&Question
�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù �ٿ� ���� ���� N�� �־�����. N�� 100�����̴�. �������� N���� ���� �־����µ� ���� 1,000 ������ �ڿ����̴�.
&Output
�־��� ���� �� �Ҽ��� ������ ����Ѵ�
&Example
-input
4
1 3 5 7
-output
3
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, a, cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		int k = 0;
		for (int j = 1; j < a; j++) {
			if (a%j == 0)k++;
		}
		if (k == 1)cnt++;
	}
	cout << cnt << endl;

	return 0;
}
*/