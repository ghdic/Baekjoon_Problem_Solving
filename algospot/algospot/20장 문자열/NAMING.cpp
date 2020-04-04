// https://www.algospot.com/judge/problem/read/NAMING
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

vector<int> getPrefixSuffix(const string& s) {
	vector<int> ret, pi = getPartialMatch(s);
	int k = s.size();
	while (k > 0) {
		ret.push_back(k);
		k = pi[k - 1];
	}
	return ret;
}

int main() {
	string a, b;
	cin >> a;
	cin >> b;
	a += b;
	vector<int> res = getPrefixSuffix(a);
	reverse(res.begin(), res.end());
	for (int n : res)
		cout << n << " ";
	return 0;
}
*/