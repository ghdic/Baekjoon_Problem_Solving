/*
https://www.acmicpc.net/problem/10807

&Title
���� ����
&Question
�� N���� ������ �־����� ��, ���� v�� �� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٿ� ������ ���� N(1 �� N �� 100)�� �־�����. ��° �ٿ��� ������ �������� ���еǾ����ִ�. ��° �ٿ��� ã������ �ϴ� ���� v�� �־�����. �Է����� �־����� ������ v�� -100���� ũ�ų� ������, 100���� �۰ų� ����.
&Output
ù° �ٿ� �Է����� �־��� N���� ���� �߿� v�� �� ������ ����Ѵ�.
&Example
-input
11
1 4 1 2 4 2 4 2 3 4 4
2
-output
3
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int *a = new int[N];
	for (int i = 0; i < N; i++)
		cin >> a[i];
	int k, cnt = 0;
	cin >> k;
	for (int i = 0; i < N; i++)
		if (k == a[i])cnt++;
	cout << cnt << endl;
	return 0;
}
*/