/*
https://www.acmicpc.net/problem/5656

&Title
5656�� - �� ������

&Question
C����� �� �����ڴ� �Ʒ� ǥ�� �����ִ�. �����ڶ�>ũ��>=ũ�ų� ����<�۴�<=�۰ų�
����==����!=���� �ʴ��� �����ڴ� �� �ǿ����ڸ� ���ϰ�, (���� ���� ������
��) true�Ǵ� false (1 �Ǵ� 0)�� �����Ѵ�. ���� ���,
2 > 3�� "false"�� �����ϰ� (2�� 3���� �۱� ����),
3 != 4�� "true", 3 >= 3�� "true"�� �����Ѵ�.C�����
�� ������� �־����� ��, ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

&Input
�Է��� �ִ� 12000�ٷ� �̷���� �ִ�. �� ���� ��
���� a, b�� �־�����, ���� ���̿��� ������ ">", ">=",
"<", "<=", "==", "!="�� �ϳ��� �־�����. �����ڿ� �ǿ����� ���̿���
������ �ϳ� ������, �����ڷ� "E"�� �־��� ��쿡�� ���α׷��� ������.
(-10000 �� a,b �� 10000)

&Output
�Է��� �� �� ���� �Է����� �־��� ���� �����
"true"���� "false"���� ����Ѵ�.

&Example
-input
3 != 3
4 < 4
4 <= 5
3 E 3

-output
Case 1: false
Case 2: false
Case 3: true

*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;
	string s = "a";
	int i = 0;
	while (s != "E") {
		i++;
		cin >> a >> s >> b;
		if (s == ">") {
			cout << "Case " << i << ": " << (a > b ? "true":"false") << endl;
		}
		else if (s == ">=") {
			cout << "Case " << i << ": " << (a >= b ? "true" : "false") << endl;
		}
		else if (s == "<") {
			cout << "Case " << i << ": " << (a < b ? "true" : "false") << endl;
		}
		else if (s == "<=") {
			cout << "Case " << i << ": " << (a <= b ? "true" : "false") << endl;
		}
		else if (s == "==") {
			cout << "Case " << i << ": " << (a == b ? "true" : "false") << endl;
		}
		else if (s == "!=") {
			cout << "Case " << i << ": " << (a != b ? "true" : "false") << endl;
		}
	}
	return 0;
}
*/