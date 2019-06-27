/*
#include <iostream>
#define MOD 1000000007
using namespace std;

int cache[101];

// 2*width ũ���� �簢���� ä��� ����� ���� MOD�� ���� �������� ��ȯ�Ѵ�.
int tiling(int width) {
	// ������� width�� 1 �����϶�
	if (width <= 1) return 1;
	// �޸������̼�
	int& ret = cache[width];
	if (ret != -1) return ret;
	return ret = (tiling(width - 2) + tiling(width - 1)) % MOD;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	fill(cache, cache + 101, -1);
	int C;
	cin >> C;
	while (C--) {
		int n;
		cin >> n;
		cout << tiling(n) << "\n";
	}
	return 0;
}
*/