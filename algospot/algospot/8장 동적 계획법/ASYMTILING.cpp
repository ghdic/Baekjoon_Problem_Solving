// 259p ���Ī Ÿ�ϸ�
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

// 2*width ũ���� �簢���� ä��� ���Ī ����� ���� ��ȯ�Ѵ�.
int asymmetric(int width) {
	if (width % 2 == 1) {
		return (tiling(width) - tiling(width / 2) + MOD) % MOD;
	}
	int ret = tiling(width);
	ret = (ret - tiling(width / 2) + MOD) % MOD;
	ret = (ret - tiling(width / 2 - 1) + MOD) % MOD;
	return ret;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int C, max = 0;
	for (int i = 0; i <= 100; i++)
		cache[i] = -1;
	cin >> C;
	while (C--) {
		int n;
		cin >> n;
		cout << asymmetric(n) << "\n";
	}
	return 0;
}
*/