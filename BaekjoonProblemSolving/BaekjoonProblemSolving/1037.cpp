/*
https://www.acmicpc.net/problem/1037

&Title
���
&Question
��� A�� N�� ��¥ ����� �Ƿ���, N�� A�� ����̰�, A�� 1�� N�� �ƴ� ���̴�. � �� N�� ��¥ ����� ��� �־��� ��, N�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٿ� N�� ��¥ ����� ������ �־�����. �� ������ 50���� �۰ų� ���� �ڿ����̴�. ��° �ٿ��� N�� ��¥ ����� �־�����. 1,000,000���� �۰ų� ����, 2���� ũ�ų� ���� �ڿ����̰�, �ߺ����� �ʴ´�.
&Output
ù° �ٿ� N�� ����Ѵ�. N�� �׻� 32��Ʈ ��ȣ�ִ� ������ ǥ���� �� �ִ�.
&Example
-input
2
4 2
-output
8
*/

/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, arr[50];
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sort(arr, arr + N);
	cout << arr[0] * arr[N - 1] << endl;
	return 0;
}
*/