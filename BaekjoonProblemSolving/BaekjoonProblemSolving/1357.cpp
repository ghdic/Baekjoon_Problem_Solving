/*
https://www.acmicpc.net/problem/1357

&Title
1357�� - ������ ����

&Question
� �� X�� �־����� ��, X�� ��� �ڸ�����
������ �� ���� ���� �� �ִ�. Rev(X)�� X�� ���
�ڸ����� �������� ����� �Լ���� ����. ���� ���, X=123�� ��,
Rev(X) = 321�̴�. �׸���, X=100�� ��, Rev(X) = 1�̴�.��
���� ���� X�� Y�� �־����� ��, Rev(Rev(X) + Rev(Y))��
���ϴ� ���α׷��� �ۼ��Ͻÿ�

&Input
ù° �ٿ� �� X�� Y�� �־�����. X�� Y��
1,000���� �۰ų� ���� �ڿ����̴�.

&Output
ù° �ٿ� ������ ������ ����Ѵ�.

&Example
-input
123 100

-output
223

*/

/*
#include <iostream>
using namespace std;

int reverse(int a) {
	int tmp = 0;
	while (a % 10 != 0 || a / 10 != 0) {
		tmp = tmp * 10 + a % 10;
		a /= 10;
	}
	return tmp;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << reverse(reverse(a) + reverse(b)) << endl;
	return 0;
}
*/