/*
https://www.acmicpc.net/problem/11047

&Title
11047�� - ���� 0

&Question
�ر԰� ������ �ִ� ������ �� N�����̰�, ������ ������ 
�ſ� ���� ������ �ִ�.������ ������ ����ؼ� �� ��ġ�� ���� 
K�� ������� �Ѵ�. �� �� �ʿ��� ���� ������ �ּҰ��� 
���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� N�� K�� �־�����. (1 �� N 
�� 10, 1 �� K �� 100,000,000)��° �ٺ��� N���� 
�ٿ� ������ ��ġ Ai�� ������������ �־�����. (1 �� Ai 
�� 1,000,000, A1 = 1, i �� 2�� ��쿡 
Ai�� Ai-1�� ���) 

&Output
ù° �ٿ� K���� ����µ� �ʿ��� ���� ������ �ּҰ��� 
����Ѵ�. 

&Example
-input
10 4200
1
5
10
50
100
500
1000
5000
10000
50000

-output
6

-input
10 4790
1
5
10
50
100
500
1000
5000
10000
50000

-output
12


*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, K, arr[10], cnt = 0;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	for (int i = N - 1; i >= 0; i--) {
		if (K/arr[i] != 0) {
			cnt += K / arr[i];
			K = K % arr[i];
		}
	}
	cout << cnt << endl;
	return 0;
}
*/