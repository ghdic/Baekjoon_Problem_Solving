// https://www.algospot.com/judge/problem/read/GRADUATION
/*
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int INF = 1e9;
const int MAXN = 12;
int n, k, m, l;

// i��° ������ ���������� ����
int pre[MAXN];
// i��° �б⿡ �ż��Ǵ� ������ ����
int classes[10];
int cache[10][1 << MAXN];

int bitCount(int num) {
	int cnt = 0;
	while (num) {
		cnt += num & 1;
		num = num >> 1;
	}
	return cnt;
}

int graduate(int semester, int taken) {
	// ���� ���: k�� �̻��� ������ �̹� ���� ���
	if (bitCount(taken) >= k)return 0;
	// ���� ��� : m�бⰡ ���� ���� ���
	if (semester == m) return INF;
	int& ret = cache[semester][taken];
	if (ret != -1)
		return ret;
	ret = INF;
	// �̹� �б⿡ ���� �� �ִ� ���� �� ���� ���� ���� ������� ã�´�
	int canTake = (classes[semester] & ~taken);
	// ���� ������ �� ���� ���� ������� �ɷ�����.
	for (int i = 0; i < n; ++i) {
		if ((canTake & (1 << i)) &&
			(taken & pre[i]) != pre[i]) {
			canTake &= ~(1 << i);
		}
	}
	// �� ������ ��� �κ������� ��ȸ�Ѵ�
	for (int take = canTake; take > 0; take = ((take - 1) & canTake)) {
		// �� �б⿡ l��������� ���� �� �ִ�
		if (bitCount(take) > l)continue;
		ret = min(ret, graduate(semester + 1, taken | take) + 1);
	}
	// �̹� �б� �ƹ��͵� ���� �ʴ� ���
	ret = min(ret, graduate(semester + 1, taken));
	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		memset(pre, 0, sizeof pre);
		memset(classes, 0, sizeof classes);
		memset(cache, 0xff, sizeof cache);
		cin >> n >> k >> m >> l;
		for (int i = 0; i < n; ++i) {
			int a, b;
			cin >> a;
			while (a--) {
				cin >> b;
				pre[i] |= 1 << b;
			}
		}
		for (int i = 0; i < m; ++i) {
			int a, b;
			cin >> a;
			while (a--) {
				cin >> b;
				classes[i] |= 1 << b;
			}
		}
		int res = graduate(0, 0);
		if (res == INF)
			cout << "IMPOSSIBLE\n";
		else
			cout << res << "\n";
	}
	return 0;
}
*/