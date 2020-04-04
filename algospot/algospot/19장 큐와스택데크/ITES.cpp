// https://www.algospot.com/judge/problem/read/ITES

/*
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct RNG {
	unsigned seed;
	RNG() : seed(1983) {}
	unsigned next() {
		unsigned ret = seed;
		seed = seed * 214013u + 2531011u; // unsigned int�̹Ƿ� mod�����൵ �����÷ο� �Ǹ� % 2^32�� ����..
		return ret % 10000 + 1;
	}
};

int countRanges(int k, int n) {
	RNG rng; // ��ȣ ���� �����ϴ� ���� ������
	queue<int> q; // ���� k������ ���� ����
	int ret = 0, rangeSum = 0;
	for (int i = 0; i < n; ++i) {
		// ������ ���ڸ� �߰��Ѵ�
		int newSignal = rng.next();
		rangeSum += newSignal;
		q.push(newSignal);

		// ���� ���� k�� �ʰ��ϴ� ���� �������� ���ڸ� ����
		while (rangeSum > k) {
			rangeSum -= q.front();
			q.pop();
		}
		if (rangeSum == k)++ret;
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, k, n;
	cin >> t;
	while (t--) {
		cin >> k >> n;
		cout << countRanges(k, n) << "\n";
	}
}
*/