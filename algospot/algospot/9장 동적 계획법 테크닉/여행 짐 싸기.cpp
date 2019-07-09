//https://algospot.com/judge/problem/read/PACKING
// 9.2 ���� �� �α� PACKING (��)

/*
// �ᱹ ���� ���ƺ��� �ִ밪 ���ϴ� �ڵ� ���ۺ��⵵ O(nw)
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int N, W;
// �������� ���� ���� 1~100, ĳ���� �뷮 1~1000
int cache[1001][100] = {};
string s[101]; // �����̸� 1~20
int volume[101], need[101]; // ���� 1~1000, ���ϴ����� 1~1000

// ĳ���� �뷮�� capacity��ŭ �������� ���� item�� ������ �μ� ���� �� �ִ� �ִ� ���ڵ�
int pack(int capacity, int item) {
	// ���� ��� : �� ���� ������ ���� ��
	if (item == N) return 0;
	int& ret = cache[capacity][item];
	if (ret != -1)return ret;
	// �� ������ ���� ���� ���
	ret = pack(capacity, item + 1);
	// �� ������ ���� ���
	if (capacity >= volume[item])
		ret = max(ret, pack(capacity - volume[item], item + 1) + need[item]);
	return ret;
}

// pack(capacity, item)�� ������ ���ǵ��� ����� picked�� �����Ѵ�.
// ����� ��� item�� ��Ҵ��� �ȴ�Ҵ��� item == item + 1�� ���� �� �� ���� ����� ��� capcity�� ��ȭ�ϱ� ����
void reconstruct(int capacity, int item, vector<string>& picked) {
	// ���� ��� : ��� ������ �� �������
	if (item == N)return;
	if (pack(capacity, item) == pack(capacity, item + 1)) {
		reconstruct(capacity, item + 1, picked);
	}
	else {
		picked.push_back(s[item]);
		reconstruct(capacity - volume[item], item + 1, picked);
	}
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		for (int i = 0; i < 1001; ++i)
			for (int j = 0; j < 101; ++j)
				cache[i][j] = -1;
		cin >> N >> W;
		for (int i = 0; i < N; ++i) {
			cin >> s[i] >> volume[i] >> need[i];
		}
		vector<string> picked;
		
		cout << pack(W, 0);
		reconstruct(W, 0, picked);
		cout << " " << picked.size() << "\n";
		for (int i = 0; i < picked.size(); ++i)
			cout << picked[i] << "\n";
	}
	return 0;
}
*/