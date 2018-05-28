//https://algospot.com/judge/problem/read/PICNIC

/*
#include <iostream>
using namespace std;
int C, n, m;
bool areFriends[10][10] = { };
//taken[i] = i��° �л��� ¦�� �̹� ã������ true�ƴϸ� false

int countPairings(bool taken[10]) {
	//���� �л��� �� ���� ��ȣ�� ���� �л��� ã�´�.
	int firstFree = -1;
	for (int i = 0; i < n; i++) {
		if (!taken[i]) {
			firstFree = i;
			break;
		}
	}
	//���� ���: ��� �л��� ¦�� ã������ �� ���� ����� ã������ �����Ѵ�.
	if (firstFree == -1)return 1;
	int ret = 0;
	//�� �л��� ¦���� �л��� �����Ѵ�.
	for (int pairWith = firstFree + 1; pairWith < n; ++pairWith) {
		if (!taken[pairWith] && areFriends[firstFree][pairWith]) {
			taken[pairWith] = taken[firstFree] = true;
			ret += countPairings(taken);
			taken[pairWith] = taken[firstFree] = false;
		}
	}
	return ret;
}


int main() {
	bool taken[10] = {};
	cin >> C;
	for (int i = 0; i < C; i++) {
		cin >> n >> m;
		int a, b;
		for (int j = 0; j < m; j++) {
			cin >> a >> b;
			areFriends[a][b] = true;
			areFriends[b][a] = true;
		}
		printf("%d\n", countPairings(taken));

		//areFriends �ʱ�ȭ
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				areFriends[j][k] = false;
			}
		}
	}

	return 0;
}
*/