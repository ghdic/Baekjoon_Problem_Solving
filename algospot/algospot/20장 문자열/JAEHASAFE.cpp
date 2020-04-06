// https://www.algospot.com/judge/problem/read/JAEHASAFE

/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// n���� �ڱ� �ڽ��� ã���鼭 ��Ÿ���� �κ� ��ġ�� �̿���
// pi[]�� ����Ѵ�
// pi[i]=n[..i]�� ���̻絵 �ǰ� ���λ絵 �Ǵ� ���ڿ��� �ִ� ����
vector<int> getPartialMatch(const string& s) {
	int m = s.size();
	vector<int> pi(m, 0);
	// kmp�� �ڱ� �ڽ��� ã�´�
	int begin = 1, matched = 0;
	// ���� ���ڰ� s�� ���� �����Ҷ����� ã���鼭 �κ� ��ġ�� ��� ����Ѵ�
	while (begin + matched < m) {
		if (s[begin + matched] == s[matched]) {
			++matched;
			pi[begin + matched - 1] = matched;
		}
		else {
			if (matched == 0)
				++begin;
			else {
				begin += matched - pi[matched - 1];
				matched = pi[matched - 1];
			}
		}
	}
	return pi;
}


vector<int> kmpSearch(const string& a, const string& b) {
	int aSz = a.size(), bSz = b.size();
	vector<int> ret;
	vector<int> pi = getPartialMatch(b);
	// ���� ������ ���� ��
	int matched = 0;
	// ¤������ �� ���ڸ� ��ȸ�Ѵ�.
	for (int i = 0; i < aSz; ++i) {
		// matched�� ���ڿ� ¤������ �ش� ���ڰ� ����ġ �� ���,
		// ���� ������ ���� ���� pi[matched-1]�� ���δ�.
		while (matched > 0 && a[i] != b[matched])
			matched = pi[matched - 1];
		// ���ڰ� ������ ���
		if (a[i] == b[matched]) {
			++matched;
			if (matched == bSz) {
				ret.push_back(i - bSz + 1);
				matched = pi[matched - 1];
			}
		}
	}
	return ret;
}

// �� ���ڿ��� �̾� ���̸� ���ϴ� ��ǥ�� ã�� �� �ִ�
// �׷� ã�� ��ġ��ŭ shift�� ���ָ� �ȴ�
// �ð����, �ݽð������ �����ϴ°��� original, target�� �ݴ�� �־��ָ� �ȴ�.
int shifts(const string& original, const string& target) {
	return kmpSearch(original + original, target)[0];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<string> strs(n + 1);
		int res = 0;
		for (int i = 0; i <= n; ++i)
			cin >> strs[i];
		for (int i = 0; i < n; ++i) {
			if (i & 1)
				res += shifts(strs[i], strs[i + 1]); // �ݽð�
			else
				res += shifts(strs[i + 1], strs[i]); // �ð�
		}
		cout << res << "\n";
	}
	return 0;
}
*/