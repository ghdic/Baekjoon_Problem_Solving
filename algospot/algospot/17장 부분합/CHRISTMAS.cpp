//https://www.algospot.com/judge/problem/read/CHRISTMAS
// ũ�������� ����

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MOD = 20091101;
const int MAXN = 100001;

// d[]�� �κ� �� �迭 psum[]�� k�� �־��� ��, �� ���� ������� �� �� �ִ��� ��ȯ�Ѵ�.
// psum[]�� ù ��° ���� ���� 0�� �����ߴٰ� �����Ѵ�
int waysToBuy(const vector<int>& psum, int k) {
	int ret = 0;
	vector<long long> cnt(k, 0);
	for (int i : psum)
		cnt[i]++;
	// �� �� �̻� �� �� �ִٸ� �� �� �� �� ���� �����ϴ� ����� ���� ���Ѵ�.
	for (int i = 0; i < k; ++i)
		if (cnt[i] >= 2)
			ret = (ret + ((cnt[i] * (cnt[i] - 1)) / 2)) % MOD; // nC2 ����
	return ret;
}

// d[]�� �κ� �� �迭 psum[]�� k�� �־��� ��, ��ġ�� �ʰ� �� ���̳� �� �� �ִ��� ��ȯ�Ѵ�.
// psum[]�� ù ��° ���� ���� 0�� �����ߴٰ� ���� �Ѵ�.
int maxBuys(const vector<int>& psum, int k) {
	// ret[i]=ù ��° ���ں��� i��° ���ڱ��� ������� �� �� �� �ִ� �ִ� Ƚ��
	vector<int> ret(psum.size(), 0);
	// prv[s]=psum[]�� s���� ������ ��ġ
	vector<int> prv(k, -1);
	for (int i = 0; i < psum.size(); ++i) {
		// i��° ���ڸ� �ƿ� ������� �ʴ� ���
		if (i > 0)
			ret[i] = ret[i - 1];
		else
			ret[i] = 0;
		// psum[i]�� ������ �� ���� ������, prv[psum[i]]+1���� ������� �� �� ����.
		int loc = prv[psum[i]];
		if (loc != -1)ret[i] = max(ret[i], ret[loc] + 1);
		// prv[]�� ���� ��ġ�� ����Ѵ�.
		prv[psum[i]] = i;
	}
	return ret.back();
}

int t, n, k;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n >> k;

		vector<int> v(n);

		for (int i = 0; i < n; ++i)
			cin >> v[i];

		vector<int> sum(n + 1);
		for (int i = 1; i <= n; ++i)
			sum[i] = (sum[i - 1] + v[i - 1]) % k;

		cout << waysToBuy(sum, k) << " " << maxBuys(sum, k) << endl;
	}
	return 0;
}
*/