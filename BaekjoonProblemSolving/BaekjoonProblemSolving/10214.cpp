/*
https://www.acmicpc.net/problem/10214

&Title
Baseball
&Question
����̴� ���� ������ ��ȯ���� �������б��� ���縦 �����ϰ� �־���. ���ɹ��� ������ �������� ����̰� �߰��� ���� ���� �������� �߱���� ��Ȳ ��Ϲ�������.
������ ������ ������ �������� �ұ��ϰ� �� ���� ����� ��� ���и� �ľ��ϱ⿡�� ������� ���Ҵµ�, �������� ȸ���� �� �� ȹ�� �������� ������ �ֱ� �����̾���.

����̴� �־��� ����� �ڷḦ �ؼ��ϴ°��� �����ұ� ������ ��ģ�� ���α׷��� ģ���� ��ſ��� ������ ��û�ߴ�.

�־��� ��Ȳ ��Ϲ������� � ���� �̰������ �˾Ƴ� ����̸� ��������!
&Input
�Է� ������ ù ��° �ٿ� �׽�Ʈ ���̽��� ���� �ǹ��ϴ� �ڿ��� T�� �־�����. �� �������� T���� �׽�Ʈ ���̽��� �־�����.

�� �׽�Ʈ ���̽��� 9�ٿ� ���ļ� �ԷµǸ�, �� �ٸ��� �ش� ȸ�� ������ ���� Y�� �� ������ ���� K�� �������� ���еǾ� �־�����. �� �� ���� 0�̻� 9�����̴�.
&Output
������ ���̽����� �� �ٿ� �����밡 �̰��� ��� "Yonsei", �����밡 �̰��� ��� "Korea", ����� ��� "Draw"�� ����Ѵ�.
&Example
-input
1
1 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
-output
Yonsei
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, a, b, A, B;
	cin >> N;
	for (int i = 0; i < N; i++) {
		A = B = 0;
		for (int j = 0; j < 9; j++) {
			cin >> a >> b;
			A += a;
			B += b;
		}
		if (A > B)cout << "Yonsei" << endl;
		else if (A == B)cout << "Draw" << endl;
		else cout << "Korea" << endl;
	}
	return 0;
}
*/