/*
https://www.acmicpc.net/problem/5086

&Title
����� ���
&Question
4 �� 3 = 12�̴�.

�� ���� ���� ������ ���� ����� �� �� �ִ�.

3�� 12�� ����̰�, 12�� 3�� ����̴�.

4�� 12�� ����̰�, 12�� 4�� ����̴�.

�� ���� �־����� ��, ���� 3���� �� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù��° ���ڰ� �ι�° ������ ����̴�.
ù��° ���ڰ� �ι�° ������ ����̴�.
ù��° ���ڰ� �ι�° ������ ����� ��� ��� �ƴϴ�.
&Input
�Է��� ���� �׽�Ʈ ���̽��� �̷���� �ִ�. �� �׽�Ʈ ���̽��� �� �ڿ����� �̷���� �ִ�. ������ �ٿ��� 0�� 2�� �־�����. �� ���� ���� ���� ����.
&Output
�� �׽�Ʈ ���̽����� ù��° ���ڰ� �ι�° ������ ������ factor��, ������ multiple��, �� �� �ƴ϶�� neither�� ����Ѵ�.
&Example
-input
8 16
32 4
17 5
0 0
-output
factor
multiple
neither
*/

/*
#include <iostream>
using namespace std;

int main() {
	int a = -1, b = -1;

	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0)break;
		if (b%a == 0)cout << "factor" << endl;
		else if (a%b == 0)cout << "multiple" << endl;
		else cout << "neither" << endl;
	}

	return 0;
}
*/