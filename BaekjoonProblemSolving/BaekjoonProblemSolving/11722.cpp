/*
https://www.acmicpc.net/problem/11722

&Title
11722번 - 가장 긴 감소하는 부분 수열

&Question
수열 A가 주어졌을 때, 가장 긴 감소하는 부분 
수열을 구하는 프로그램을 작성하시오.예를 들어, 수열 A = {10, 
30, 10, 20, 20, 10} 인 경우에 가장 긴 
감소하는 부분 수열은 A = {10, 30, 10, 20, 
20, 10} 이고, 길이는 3이다. 

&Input
첫째 줄에 수열 A의 크기 N (1 ≤ 
N ≤ 1,000)이 주어진다.둘째 줄에는 수열 A를 이루고 있는 
Ai가 주어진다. (1 ≤ Ai ≤ 1,000) 

&Output
첫째 줄에 수열 A의 가장 긴 감소하는 부분 
수열의 길이를 출력한다. 

&Example
-input
6
10 30 10 20 20 10

-output
3


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int N;
	int dp[1010] = {};
	int arr[1010] = {};
	int max = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= N; i++) {
		int min = 0;
		for (int j = 0; j < i; j++)
			if (arr[i] < arr[j])
				if (min < dp[j])
					min = dp[j];
		dp[i] = min + 1;
		if (max < dp[i])
			max = dp[i];
	}
	printf("%d\n", max);
	return 0;
}
*/

/*
자신보다 높은 값을 찾을때마다 갱신해주면 된다.
*/