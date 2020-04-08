// https://www.algospot.com/judge/problem/read/TRAVERSAL

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> slice(const vector<int>& v, int a, int b) {
	return vector<int>(v.begin() + a, v.begin() + b);
}

// Ʈ���� ����Ž�� ����� ����Ž�� ����� �־��� �� ����Ž�� ����� ����Ѵ�.
void printPostOrder(const vector<int>& preorder, const vector<int>& inorder) {
	// Ʈ���� ���Ե� ����� ��
	const int n = preorder.size();
	// ���� ��� : ��Ʈ���� ����
	if (preorder.empty())return;
	// Ʈ���� ��Ʈ�� ���� Ž�� ����κ��� ���� �� �� �ִ�.
	const int root = preorder[0];
	// �� Ʈ���� ���� ����Ʈ���� ũ��� ���� Ž�� ������� ��Ʈ�� ��ġ�� ã�Ƽ� �� �� �ִ�.
	const int L = find(inorder.begin(), inorder.end(), root) - inorder.begin();
	// ������ ����Ʈ���� ũ��� n���� ���� ����Ʈ���� ��Ʈ�� ���� �� �� �ִ�.
	const int R = n - 1 - L;
	// ���ʰ� ������ ����Ʈ���� ��ȸ ����� ���
	printPostOrder(slice(preorder, 1, L + 1), slice(inorder, 0, L));
	printPostOrder(slice(preorder, L + 1, n), slice(inorder, L + 1, n));
	// ���� ��ȸ�̹Ƿ� ��Ʈ�� ���� �������� ���
	cout << root << ' ';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> preorder(n), inorder(n);
		for (int i = 0; i < n; ++i)
			cin >> preorder[i];
		for (int i = 0; i < n; ++i)
			cin >> inorder[i];
		printPostOrder(preorder, inorder);
		cout << "\n";
	}
	return 0;
}
*/