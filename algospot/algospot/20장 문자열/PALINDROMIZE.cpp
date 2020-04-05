// https://www.algospot.com/judge/problem/read/PALINDROMIZE

/*
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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

// a�� ���̻��̸鼭 b�� ���λ��� ���ڿ��� �ִ� ���̸� ���Ѵ�.
int maxOverlap(const string& a, const string& b) {
	int n = a.size(), m = b.size();
	vector<int> pi = getPartialMatch(b);
	// begin = matched = 0 ���� ���� ��������
	int begin = 0, matched = 0;
	while (begin < n) {
		// ���� ¤������ �ش� ���ڰ� �ٴ��� �ش� ���ڿ� ���ٸ�
		if (matched < m && a[begin + matched] == b[matched]) {
			++matched;
			if (begin + matched == n)
				return matched;
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
	return 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		cin >> a;
		b.resize(a.size());
		reverse_copy(a.begin(), a.end(), b.begin());
		int res = a.length() * 2 - maxOverlap(a, b);
		cout << res << "\n";
	}
}
*/