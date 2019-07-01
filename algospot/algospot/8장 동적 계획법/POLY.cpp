// 8.14 264p �������̳� POLY
/*
#include <iostream>
using namespace std;
#define MOD 10000000

int cache[101][101] = {};
// n���� ���簢������ �̷������, �� �� �����ٿ� first����
// ���簢���� �����ϴ� �������̳� ���� ��ȯ�Ѵ�.
int poly(int n, int first) {
	// ������� n == first
	if (n == first) return 1;
	// �޸������̼�
	int& ret = cache[n][first];
	if (ret != -1)return ret;
	ret = 0;
	for (int second = 1; second <= n - first; ++second) {
		int add = second + first - 1;
		add *= poly(n - first, second);
		add %= MOD;
		ret += add;
		ret %= MOD;
	}
	return ret;
}
int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int T;
	for (int i = 0; i < 101; ++i)
		for (int j = 0; j < 101; ++j)
			cache[i][j] = -1;
	cin >> T;
	while (T--) {
		
		int n, sum = 0;
		cin >> n;

		for (int i = 1; i <= n; ++i) {
			sum += poly(n, i);
			sum %= MOD;
		}
		cout << sum << "\n";
	}
}
*/