/*
https://www.acmicpc.net/problem/5355

&Title
ȭ�� ����
&Question
�ܿ� ���п� �޿� �ٳ�� ����̴� ���� ���� ���� ȭ���� ���� �� �����̴�. (3996��) ȭ�������� �����ʹ� ���� �ٸ� ������ @, %, #�� ����Ѵ�. @�� 3�� ���ϰ�, %�� 5�� ���ϸ�, #�� 7�� ���� �������̴�. ����, ȭ�������� ���� ���� ���� �տ� ���� �ϳ� �ְ�, �� �������� �����ڰ� �ִ�.
&Input
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. ���� �ٿ��� ȭ�� ���н��� �� �ٿ� �ϳ��� �־�����. ���н��� 100�ڸ� ���� �ʴ´�.
&Output
�� �׽�Ʈ ���̽��� ���ؼ�, ȭ�� ���н��� ����� ����� ������, �Ҽ��� ��° �ڸ����� ����Ѵ�.
&Example
-input
3
3 @ %
10.4 # % @
8 #
-output
14.00
25.20
1.00
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	double num;
	string x;
	cin >> N;
	cout << fixed;
	cout.precision(2); //�Ҽ��� 2�ڸ� ǥ��
	for (int i = 0; i < N; i++) {
		cin >> num;
		getline(cin, x);
		for (int i = 0; i < x.size(); i++)
			switch (x[i]) {
			case '@':
				num *= 3;
				break;
			case '%':
				num += 5;
				break;
			case '#':
				num -= 7;
			}
		cout << num << endl;
	}

	
	return 0;
}
*/