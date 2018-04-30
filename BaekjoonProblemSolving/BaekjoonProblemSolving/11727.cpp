/*
https://www.acmicpc.net/problem/11727

&Title
11727�� - 2��n Ÿ�ϸ� 2

&Question
2��n ���簢���� 2��1�� 2��2 Ÿ�Ϸ� ä��� ����� ���� 
���ϴ� ���α׷��� �ۼ��Ͻÿ�.�Ʒ� �׸��� 2��17 ���簢���� ä�� �Ѱ��� ���̴�. 


&Input
ù° �ٿ� n�� �־�����. (1 �� n �� 
1,000) 

&Output
ù° �ٿ� 2��n ũ���� ���簢���� ä��� ����� ���� 
10,007�� ���� �������� ����Ѵ�. 

&Example
-input
2

-output
3

-input
8

-output
171

-input
12

-output
2731


*/

/*
#include <iostream>
using namespace std;

int main() {
	long long N, DP[1010] = { 0 };
	cin >> N;
	DP[0] = 1;
	DP[1] = 1;
	for (int i = 2; i <= N; i++) {
		DP[i] = (DP[i - 1] + DP[i - 2] * 2) % 10007;
	}
	cout << DP[N] << endl;
	return 0;
}
*/

/*
Ÿ���� Ÿ�ϸ� 1�� ������ �ٸ��� 2 * 2 ��絵 �����Ƿ�
DP[i-2] * 2 �� �ȴ�. 
DP[i-2]�� �����ʿ� 2 * 1, 2 * 2 Ÿ���� ���ѰͰ�
DP[i-1]�� �����ʿ� 1 * 2 Ÿ���� ���Ѱ��� ���̴�.
*/