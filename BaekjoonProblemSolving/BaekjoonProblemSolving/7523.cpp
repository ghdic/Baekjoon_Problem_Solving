/*
https://www.acmicpc.net/problem/7523

&Title
7523번 - Gauß

&Question
카를 프리드리히 가우스는 독일의 수학자이다.가우스가 초등학교에 다닐 때, 
선생님 J.G. Büttner는 1부터 100까지 수의 합을 계산하게 시켰다. 
가우스는 몇 초만에 정확한 답 5050을 계산했다.n과 m 이 
주어졌을 때, n보다 크거나 같고, m보다 작거나 같은 모든 
정수의 합을 구하는 프로그램을 작성하시오. 즉, 다음을 계산하라.\[\sum_{i=n}^{m} {i} 
= n+(n+1)+(n+2)+ \dots + (m-1) + m\] 

&Input
첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 
케이스는 한 줄로 이루어져 있으며, n과 m이 주어진다. (-109 
≤ n ≤ m ≤ 109) 

&Output
각 테스트 케이스마다 "Scenario #i:"를 출력한 다음, n부터 
m까지 모든 정수의 합을 출력한다. 각 테스트 케이스 사이에는 
빈 줄을 하나 출력한다. 

&Example
-input
3
1 100
-11 10
-89173 938749341

-output
Scenario #1:
5050

Scenario #2:
-11

Scenario #3:
440625159107385260


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
	long long t, a, b;
	scanf("%lld", &t);
	for (int i = 1; i <= t; i++) {
		scanf("%lld %lld", &a, &b);
		printf("Scenario #%d:\n", i);
		printf("%lld\n", (a + b)*(b - a + 1) / 2);
		if (i != t)printf("\n");
	}

	return 0;
}
*/