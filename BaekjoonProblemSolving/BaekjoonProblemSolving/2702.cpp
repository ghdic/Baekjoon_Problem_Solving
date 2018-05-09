/*
https://www.acmicpc.net/problem/2702

&Title
2702�� - ��6 ����

&Question
�� ���� a�� b �ּҰ������ �� ���� ����� 
��� �� ���� ���� ���̰�, �ִ������� �� ���� ����� 
����� ���� ū ���̴�. a�� b�� �־����� ��, �ּҰ������ 
�ִ������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1<=T<=1,000)�� �־�����. �� 
�׽�Ʈ ���̽��� �� ���� a�� b�� �̷���� �ְ�, �������� 
���еǾ� �ִ�. (1 <= a,b <= 1,000) 

&Output
�� �׽�Ʈ ���̽��� ���� �ּҰ������ �ִ������� ���ʴ�� ����Ѵ�. 


&Example
-input
3
5 10
7 23
42 56
-output
10 5
161 1
168 14

*/

/*
#include <iostream>
using namespace std;
int GCD(int a, int b) {
	int swap;
	while (b) {
		swap = a % b;
		a = b;
		b = swap;
	}
	return a;
}
int main() {
	int N, a, b;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		int G = GCD(a, b);
		cout << a * b / G << " " << G << endl;
	}
	return 0;
}
*/