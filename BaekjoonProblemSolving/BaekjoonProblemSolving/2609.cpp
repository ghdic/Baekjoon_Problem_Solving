/*
https://www.acmicpc.net/problem/2609

&Title
�ִ������� �ּҰ����
&Question
�� ���� �ڿ����� �Է¹޾� �ִ� ������� �ּ� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٿ��� �� ���� �ڿ����� �־�����. �� ���� 10,000������ �ڿ����̸� ���̿� �� ĭ�� ������ �־�����.
&Output
ù° �ٿ��� �Է����� �־��� �� ���� �ִ�������,��° �ٿ��� �Է����� �־��� �� ���� �ּ� ������� ����Ѵ�.
&Example
-input
24 18
-output
6
72
*/

/*
#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main() {
	int A, B, G;
	cin >> A >> B;
	G = gcd(A, B);
	cout << G << endl;
	cout << A * B / G << endl;
	return 0;
}
*/