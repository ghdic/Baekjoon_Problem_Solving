/*
https://www.acmicpc.net/problem/3052

&Title
������
&Question
�� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�. ���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�.

�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. �� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٺ��� ����° �� ���� ���ڰ� �� �ٿ� �ϳ��� �־�����. �� ���ڴ� 1,000���� �۰ų� ����, ���� �ƴ� �����̴�.
&Output
ù° �ٿ�, 42�� �������� ��, ���� �ٸ� �������� �� �� �ִ��� ����Ѵ�.
&Example
-input
39
40
41
42
43
44
82
83
84
85
-output
6
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	bool check[42];
	for (int i = 0; i < 42; i++)
		check[i] = false;
	for (int i = 0; i < 10; i++) {
		cin >> N;
		check[N % 42] = true;
	}
	int cnt = 0;
	for (int i = 0; i < 42; i++)
		if (check[i] == true)cnt++;
	cout << cnt << endl;
	return 0;
}
*/