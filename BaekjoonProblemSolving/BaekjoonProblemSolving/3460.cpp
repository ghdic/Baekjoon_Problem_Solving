/*
https://www.acmicpc.net/problem/3460

&Title
������
&Question
���� ���� n�� �־����� ��, �̸� �������� ��Ÿ���� �� 1�� ��ġ�� ��� ã�� ���α׷��� �ۼ��Ͻÿ�. ������ ��Ʈ(least significant bit, lsb)�� ��ġ�� 0�̴�.
&Input
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, n�� �־�����. (1 �� T �� 10, 1 �� n �� 106)
&Output
�� �׽�Ʈ ���̽��� ���ؼ�, 1�� ��ġ�� �������� �����ؼ� �� �ϳ��� ����Ѵ�. ��ġ�� ���� �ͺ��� ����Ѵ�.
&Example
-input
1
13
-output
0 2 3
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int k, cnt = 0;
		cin >> k;
		while (k!=0) {
			if (k % 2 == 1) {
				if (k / 2 == 0)
					cout << cnt;
				else
					cout << cnt << " ";
			}
			k /= 2;
			cnt++;
		}
		cout << endl;
	}
	
	return 0;
}
*/