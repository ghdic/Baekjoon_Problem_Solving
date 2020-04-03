// https://www.algospot.com/judge/problem/read/JOSEPHUS

/*
#include <iostream>
#include <list>

using namespace std;

void josephus(int n, int k) {
	// ����Ʈ �غ�
	list<int> survivors;
	for (int i = 1; i <= n; ++i)
		survivors.push_back(i);
	// ���� ����� ��Ÿ���� ������
	list<int>::iterator kill = survivors.begin();
	while (n > 2) {
		// ù��° ����� �ڻ�. erase�� ���� ���� ���� ��ȯ
		kill = survivors.erase(kill);
		if (kill == survivors.end())
			kill = survivors.begin();
		--n;
		// k-1�� ���� ������� �ű��
		for (int i = 0; i < k - 1; ++i) {
			++kill;
			if (kill == survivors.end())
				kill = survivors.begin();
		}
	}
	cout << survivors.front() << " " << survivors.back() << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		josephus(n, k);
	}
	return 0;
}
*/