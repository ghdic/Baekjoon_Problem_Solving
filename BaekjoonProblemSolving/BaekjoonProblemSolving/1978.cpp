/*
https://www.acmicpc.net/problem/1978

&Title
소수 찾기
&Question
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
&Input
첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
&Output
주어진 수들 중 소수의 개수를 출력한다
&Example
-input
4
1 3 5 7
-output
3
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, a, cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		int k = 0;
		for (int j = 1; j < a; j++) {
			if (a%j == 0)k++;
		}
		if (k == 1)cnt++;
	}
	cout << cnt << endl;

	return 0;
}
*/