/*
https://www.acmicpc.net/problem/10818

&Title
�ּ�, �ִ�
&Question
N���� ������ �־�����. �� ��, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٿ� ������ ���� N (1 �� N �� 1,000,000)�� �־�����. ��° �ٿ��� N���� ������ �������� �����ؼ� �־�����. ��� ������ -1,000,000���� ũ�ų� ����, 1,000,000���� �۰ų� ���� �����̴�.
&Output
ù° �ٿ� �־��� ���� N���� �ּڰ��� �ִ��� �������� ������ ����Ѵ�.
&Example
-input
5
20 10 35 30 7
-output
7 35
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, max = -1000001, min = 1000001;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (max < a)max = a;
		if (min > a)min = a;
	}
	cout << min << " " << max << endl;
	return 0;
}
*/