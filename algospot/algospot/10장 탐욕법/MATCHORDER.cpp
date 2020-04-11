// https://www.algospot.com/judge/problem/read/MATCHORDER
/*
#include <iostream>
#include <set>
#include <vector>
using namespace std;


int order(const vector<int>& russian, const vector<int>& korean) {
	int n = russian.size(), wins = 0;
	multiset<int> ratings(korean.begin(), korean.end());
	for (int rus = 0; rus < n; ++rus) {
		// ���� �������� ���� �ѱ� ������ �̱� �� ���� ���
		// ���� �������� ���� ������ ��� ��Ų��
		if (*ratings.rbegin() < russian[rus])
			ratings.erase(ratings.begin());
		// �� ���� ��� �̱� �� �ִ� ���� �� ���� �������� ���� ������ ��� ��Ų��.
		else {
			ratings.erase(ratings.lower_bound(russian[rus]));
			++wins;
		}
	}
	return wins;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> rus(n), kor(n);
		for (int i = 0; i < n; ++i)
			cin >> rus[i];
		for (int i = 0; i < n; ++i)
			cin >> kor[i];
		cout << order(rus, kor) << "\n";
	}
	return 0;
}
*/