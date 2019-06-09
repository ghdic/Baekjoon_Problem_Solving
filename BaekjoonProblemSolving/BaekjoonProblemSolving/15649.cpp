/*
https://www.acmicpc.net/problem/15649

&Title
15649번 - N과 M (1)

&Question
자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 
길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.1부터 N까지 자연수 
중에서 중복 없이 M개를 고른 수열 

&Input
첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ 
M ≤ N ≤ 8) 

&Output
한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다. 
중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 
구분해서 출력해야 한다.수열은 사전 순으로 증가하는 순서로 출력해야 한다. 


&Example
-input
3 1

-output
1
2
3

-input
4 2

-output
1 2
1 3
1 4
2 1
2 3
2 4
3 1
3 2
3 4
4 1
4 2
4 3

-input
4 4

-output
1 2 3 4
1 2 4 3
1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2
2 1 3 4
2 1 4 3
2 3 1 4
2 3 4 1
2 4 1 3
2 4 3 1
3 1 2 4
3 1 4 2
3 2 1 4
3 2 4 1
3 4 1 2
3 4 2 1
4 1 2 3
4 1 3 2
4 2 1 3
4 2 3 1
4 3 1 2
4 3 2 1


*/

/*
#include <iostream>
#include <vector>
using namespace std;

bool check[9] = {};
vector<int> nums;
int N, M;

void sequence() {
	if (nums.size() == M) {
		for (int i = 0; i < nums.size(); i++)
			cout << nums[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N; i++) {
		if (!check[i]) {
			check[i] = true;
			nums.push_back(i);
			sequence();
			check[i] = false;
			nums.pop_back();
		}
	}

}
int main() {
	
	ios::sync_with_stdio(false);
	cin >> N >> M;
	sequence();
	return 0;
}
*/