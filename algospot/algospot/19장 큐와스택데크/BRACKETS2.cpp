// https://www.algospot.com/judge/problem/read/BRACKETS2

/*
#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

bool wellMatched(const string& formula) {
	// ���� ��ȣ ���ڵ�� �ݴ� ��ȣ ���ڵ�
	const string opening = "({[", closing = ")}]";
	// �̹� ���� ��ȣ���� ������� ��� ����
	stack<char> openStack;
	for (int i = 0; i < formula.size(); ++i) {
		// ���� ��ȣ���� �ݴ� ��ȣ���� Ȯ��
		if (opening.find(formula[i]) != -1) {
			// ���� ��ȣ��� ������ ���ÿ� ����ִ´�
			openStack.push(formula[i]);
		}
		else {
			// �� ���� ��� ���� ������ ���ڿ� ���纻��
			// ������ ��� �ִ� ��쿡��
			// ���� ������ ¦�� �������� ��Ŵ� ¦�� �ȸ´°��̴�
			if (openStack.empty())return false;
			// ���� ¦�� ���� �ʾƵ� ����
			// find�Լ��� npos�� return�ϴµ� ã���� ���° ��ġ���� �����ִ°��̴�
			// �� opening, closing���� �� npos�� ���� ��� ��ġ�ϴ� ¦�ΰ��̴�.
			// find�� ��ã�� ���(-1)�� ���� �̹� �������� ó���Ǿ��� ������ ����� �ʿ� ����.
			if (opening.find(openStack.top()) != closing.find(formula[i]))
				return false;
			// ¦�� ���� ��ȣ�� ���ÿ��� ����.
			openStack.pop();
		}
	}
	// ������ �ʴ� ��ȣ�� ����� ����
	return openStack.empty();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << (wellMatched(s) ? "YES\n" : "NO\n");
	}
	return 0;
}
*/