/*
https://www.acmicpc.net/problem/1026

&Title
1026�� - ����

&Question
���� ������ ������ �׻� ū ��ĩ�Ÿ����� ���� �־���. 
�� ������ ���� �������� ������ ���� ������ ���� ū 
����� �ɾ���.���̰� N�� ���� �迭 A�� B�� �ִ�. ������ 
���� �Լ� S�� ��������.S = A[0]*B[0] + ... + 
A[N-1]*B[N-1]S�� ���� ���� �۰� ����� ���� A�� ���� ��迭����. 
��, B�� �ִ� ���� ��迭�ϸ� �ȵȴ�.S�� �ּڰ��� ����ϴ� ���α׷��� 
�ۼ��Ͻÿ�. 

&Input
ù° �ٿ� N�� �־�����. ��° �ٿ��� A�� �ִ� 
N���� ���� ������� �־�����, ��° �ٿ��� B�� �ִ� ���� 
������� �־�����. N�� 50���� �۰ų� ���� �ڿ����̰�, A�� B�� 
�� ���Ҵ� 100���� �۰ų� ���� ���� �ƴ� �����̴�. 

&Output
ù° �ٿ� S�� �ּڰ��� ����Ѵ�. 

&Example
-input
5
1 1 1 6 0
2 7 8 3 1
-output
18

*/

/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int a[50], b[50];
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> a[i];
	for (int i = 0; i < N; i++)
		cin >> b[i];
	sort(a, a + N);
	sort(b, b + N);
	int sum = 0;
	for (int i = 0; i < N; i++)
		sum += a[i] * b[N - i - 1];
	cout << sum << endl;
	return 0;
}
*/