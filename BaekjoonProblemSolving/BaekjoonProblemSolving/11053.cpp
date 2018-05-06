/*
https://www.acmicpc.net/problem/11053

&Title
11053�� - ���� �� �����ϴ� �κ� ����

&Question
���� A�� �־����� ��, ���� �� �����ϴ� �κ� 
������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.���� ���, ���� A = {10, 
20, 10, 30, 20, 50} �� ��쿡 ���� �� 
�����ϴ� �κ� ������ A = {10, 20, 10, 30, 
20, 50} �̰�, ���̴� 4�̴�. 

&Input
ù° �ٿ� ���� A�� ũ�� N (1 �� 
N �� 1,000)�� �־�����.��° �ٿ��� ���� A�� �̷�� �ִ� 
Ai�� �־�����. (1 �� Ai �� 1,000) 

&Output
ù° �ٿ� ���� A�� ���� �� �����ϴ� �κ� 
������ ���̸� ����Ѵ�. 

&Example
-input
6
10 20 10 30 20 50

-output
4


*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	int arr[1001] = {};
	int dp[1001] = {};
	int max = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= N; i++) {
		int min = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j])
				if (min < dp[j])
					min = dp[j];
		}
		dp[i] = min + 1;
		if (max < dp[i])
			max = dp[i];
	}
	cout << max << endl;
	return 0;
}
*/