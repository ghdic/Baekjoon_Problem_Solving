/*
https://www.acmicpc.net/problem/11557

&Title
Yangjojang of The Year
&Question
���� OT�� �������ٵ� ���ٸ��� ��Ҵ� ����� �ڿ������� 1�г� ���븦 �����ϰ� �Ǿ���.

Ÿ������ ����Ʈ ��Ƽ�� ��ȹ�Ϸ��� ����� ��ó�� �ִ� �б� �� ��� �б��� ���� ���� ���� �Դ��� �ñ�������.

�б����� �� �ص��� �� �Һ��� �־��� ��, ���� �� �Һ� ���� �б� �̸��� ����Ͽ���.
&Input
�Է��� ù �ٿ��� �׽�Ʈ ���̽��� ���� T�� �־�����.

�� �Է��� ù �ٿ��� �б��� ���� ���� N(1 �� N �� 100)�� �־�����.

�̾ N�ٿ� ���� �б� �̸� S(1 �� |S| �� 20, S�� ������� ��ҹ��� ���ĺ� ���ڿ�)�� �ش� �б��� ���� �� �ص��� �Һ��� ���� �� L(0 <= L <= 10,000,000)�� �������� ���еǾ� ������ �־�����.

���� �׽�Ʈ ���̽� �ȿ��� �Һ��� ���� ���� ���� �б��� ���ٰ� �����Ѵ�.
&Output
�� �׽�Ʈ ���̽����� �� �ٿ� ���� �� �Һ� ���� ���� �б��� �̸��� ����Ѵ�.
&Example
-input
2
3
Yonsei 10
Korea 10000000
Ewha 20
2
Yonsei 1
Korea 10000000
-output
Korea
Korea
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int cs, alchol, max = 0, cnt;
		string school[100];
		cin >> cs;
		for (int j = 0; j < cs; j++) {
			cin >> school[j] >> alchol;

			if (max < alchol) {
				max = alchol;
				cnt = j;
			}
		}
		cout << school[cnt] << endl;

	}
	return 0;
}
*/