/*
https://www.acmicpc.net/problem/2588

&Title
����

&Question
(�� �ڸ� ��) �� (�� �ڸ� ��)�� ������ ���� ������ ���Ͽ� �̷������.
(1)�� (2)��ġ�� �� �� �ڸ� �ڿ����� �־��� �� (3), (4), (5), (6)��ġ�� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

&Input
ù° �ٿ� (1)�� ��ġ�� �� �� �ڸ� �ڿ�����, ��° �ٿ� (2)�� ��ġ�� �� ���ڸ� �ڿ����� �־�����.

&Output
ù° �ٺ��� ��° �ٱ��� ���ʴ�� (3), (4), (5), (6)�� �� ���� ����Ѵ�.

&Example
-input
472
385
-output
2360
3776
1416
181720

*/


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int n1, n2;

	cin>>n1>>n2;

	cout << n1 * (n2 % 10) << endl;
	cout << n1 * ((n2 / 10)%10) << endl;
	cout << n1 * (((n2 / 10) / 10) % 10) << endl;
	cout << n1 * n2 << endl;
	return 0;
}