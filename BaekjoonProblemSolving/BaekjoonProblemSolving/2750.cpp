/*
https://www.acmicpc.net/problem/2750

&Title
�� �����ϱ�
&Question
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٿ� ���� ���� N(1 �� N �� 1,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. �� ���� ���밪�� 1,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.
&Output
ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
&Example
-input
5
5
2
3
4
1
-output
1
2
3
4
5
*/

/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	int k[1000];
	for (int i = 0; i < N; i++) {
		cin >> k[i];
	}
	sort(k, k+N);
	for (int i = 0; i < N; i++) {
		cout << k[i] << endl;
	}
	return 0;
}
*/