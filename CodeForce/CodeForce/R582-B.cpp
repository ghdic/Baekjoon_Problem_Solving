// http://codeforces.com/contest/1213/problem/B

// B. Bade Prices
// ��.. ���� ������ �����ΰ� ������ �ռҸ��� �𸣰ڳ�;;
// �������� ���� ������ �����Ǹ� bad price����.. �ٵ� �����׽�Ʈ�� �� �װ� ������ �ȵǳİ�
// Ư�� 2
// 2 1 �� ���� �� 1�̳�?,,
/*
�� ������ ai�� �������� berPhone�� ó���Ѵ�.
�̶� i��° ������ ���Ŀ� �� ���� ���ݿ� �ȷȴٸ� �� ���� bad day�� �Ѵ�.
(�� �̰� ������ �ؼ�����.. latest�� �ֱ��̶�� �ǹ̵� �����ϱ�;; �������ڳ�)

*/
/*
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); ++i)

int main() {
	int t;
	cin >> t;
	forn(tt, t) {
		int n;
		cin >> n;
		vector<int> a(n);
		forn(i, n)
			cin >> a[i];
		int ans = 0;
		int right_min = INT_MAX;
		for (int i = n - 1; i >= 0; --i) {
			if (a[i] > right_min)
				++ans;
			right_min = min(right_min, a[i]);
		}
		cout << ans << endl;
	}
	return 0;
}
*/