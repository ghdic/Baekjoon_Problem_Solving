//https://algospot.com/judge/problem/read/CLOCKSYNC
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 9999
#define SWITCH 10
#define CLOCK 16
//linked[i][j]=1 i�� ����ġ�� j�� �ð谡 ����Ǿ� �ִ�
//linked[i][j]=0 i�� ����ġ�� j�� �ð谡 ����Ǿ� ���� �ʴ�

int linked[SWITCH][CLOCK] = {
	{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
{ 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0 },
{ 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1 },
{ 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
{ 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0 },
{ 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 },
{ 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 },
{ 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
{ 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
{ 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 }
};

//��� �ð谡 12�ø� ����Ű�� �ִ��� Ȯ���Ѵ�.
bool areAligned(const vector<int>&clocks) {

	for (int i = 0; i<CLOCK; ++i)
		if (clocks[i] != 12)
			return false;
	return true;
}
//swtch�� ����ġ�� ������.
void push(vector<int>& clocks, int swtch) {
	for (int clock = 0; clock < CLOCK; ++clock) {
		if (linked[swtch][clock] == 1) {
			clocks[clock] += 3;
			if (clocks[clock] == 15)clocks[clock] = 3;
		}
	}
}

//clocks:���� �ð���� ����
//switch: �̹��� ���� ����ġ�� ��ȣ
//�� �־�����, ���� ����ġ���� ������ clocks�� 12�÷� ���� �� �ִ� �ּ� Ƚ���� ��ȯ�Ѵ�.
//���� �Ұ����ϴٸ� INF�̻��� ū ���� ��ȯ�Ѵ�.
int solve(vector<int>&clocks, int swtch) {
	if (swtch == SWITCH)return areAligned(clocks) ? 0 : INF;
	//�� ����ġ�� 0�� ������ ������ �� �� ������ �������� ��� �õ��Ѵ�.
	int ret = INF;
	for (int cnt = 0; cnt < 4; ++cnt) {
		ret = min(ret, cnt + solve(clocks, swtch + 1));
		push(clocks, swtch);
	}
	//push(clocks, swtch)�� �׹� ȣ��Ǿ����� clocks�� ������ ���� ���°� �ȴ�.
	return ret;
}

int main() {
	int C;
	cin >> C;
	if (C < 0 || C>30)exit(-1);

	for (int i = 0; i < C; ++i) {
		vector<int>clocks;
		clocks.resize(CLOCK);
		for (int j = 0; j < CLOCK; ++j)
			cin >> clocks[j];
		int result = solve(clocks, 0);
		if (result == INF)result = -1;
		cout << result << endl;
	}
	return 0;
}
*/