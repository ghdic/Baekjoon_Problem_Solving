/*
https://www.acmicpc.net/problem/1514

&Title
1514번 - 자물쇠

&Question
세준이는 노트북을 누가 가져갈까봐 자물쇠로 잠가놓는다. 자물쇠는 동그란 
디스크 N개로 구성되어 있다. 각 디스크에는 숫자가 0부터 9까지 
숫자가 표시되어 있다. 디스크는 원형이기 때문에, 0과 9는 인접해 
있다.세준이는 한 번 자물쇠를 돌릴 때, 최대 세 칸을 
시계 방향 또는 반시계 방향으로 돌릴 수 있다. 또, 
최대 세 개의 인접한 디스크를 한 번에 돌릴 수 
있다.현재 자물쇠의 상태와 세준이의 비밀번호가 주어질 때, 자물쇠를 최소 
몇 번 돌려야 풀 수 있는지 구하는 프로그램을 작성하시오.자물쇠의 
상태가 555이고, 세준이의 비밀번호가 464인 경우에, 각 디스크를 따로 
따로 돌리면 3번 돌려야 한다. 하지만, 디스크 3개를 동시에 
돌려서 444로 만들고, 2번째 디스크를 6으로 돌리면 2번만에 돌릴 
수 있다. 

&Input
첫째 줄에 세준이의 비밀번호의 길이 (자물쇠의 크기) N이 
주어진다. N은 100보다 작거나 같다. 둘째 줄에 현재 자물쇠의 
상태가 주어지고, 셋째 줄에 세준이의 비밀번호가 주어진다. 

&Output
첫째 줄에 최소 몇 번을 돌려야 풀 수 
있는지 구하는 프로그램을 작성하시오. 

&Example
-input
3
555
464

-output
2

-input
4
1234
3456

-output
2


*/

/*
자물쇠를 1~3개를 돌릴수 있다
이때 맞춰준 숫자는 고정해준다
*/
/*
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n, dp[100][10][10][10][2]; // 현재 자물쇠, 몇개 돌렸냐?, 방향
string current, target;

// 회전 할때 올바른 index로 접근 되도록 해줌
int modular(int a) {
	return (a < 0 ? a + 10 : a % 10);
}

int run(int idx, int z, int y, int x, bool dir) {
	// 모든 번호를 다 맞추었을때 0 반환
	if (idx == n)return 0;

	int& ret = dp[idx][z][y][x][dir];
	// 이미 방문한 경우 그 경우가 더 최소임 ex) 2번씩 5번 돌아가면 target과 못만날수 있음 그런 경우 1e9나 min값을 되돌려줌
	if (ret != -1)return ret;

	// 첫번째 인덱스가 같은 경우 하나 전진함 양방향으로 돌려줌
	if (modular(z + current[idx]) == target[idx])return ret = min(run(idx + 1, y, x, 0, dir), run(idx + 1, y, x, 0, !dir));
	ret = 1e9;
	int rot = dir ? 1 : -1;
	for (int i = 1; i <= 3; ++i) {
		ret = min(ret, run(idx, modular(z + i * rot), y, x, dir) + 1); // 현재 위치에서 한개만 돌릴때
		ret = min(ret, run(idx, modular(z + i * rot), modular(y + i * rot), x, dir) + 1); // 현재 위치에서 두개만 돌릴때
		ret = min(ret, run(idx, modular(z + i * rot), modular(y + i * rot), modular(x + i * rot), dir) + 1); // 현재 위치에서 세개만 돌릴때
	}

	return ret;
}

int main() {
	memset(dp, -1, sizeof(dp));
	cin >> n;
	cin >> current;
	cin >> target;
	for (int i = 0; i < n; ++i) {
		current[i] -= '0';
		target[i] -= '0';
	}

	cout << min(run(0, 0, 0, 0, true), run(0, 0, 0, 0, false)) << endl;
	return 0;
}
*/