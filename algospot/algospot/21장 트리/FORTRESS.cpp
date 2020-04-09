// https://www.algospot.com/judge/problem/read/FORTRESS

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode {
	vector<TreeNode*> children;
};

int n, y[100], x[100], radius[100];

// ���ݱ��� ã�� ���� �� ��-�� ����� ���̸� �����Ѵ�
int longest;

// root�� ��Ʈ�� �ϴ� ����Ʈ���� ���̸� ��ȯ�Ѵ�.
int height(TreeNode* root) {
	// �� �ڽ��� ��Ʈ�� �ϴ� ����Ʈ���� ���̸� ����Ѵ�
	vector<int> heights;
	for (int i = 0; i < root->children.size(); ++i)
		heights.push_back(height(root->children[i]));
	// ���� �ڽ��� �ϳ��� ���ٸ� 0�� ��ȯ�Ѵ�.
	if (heights.empty())return 0;
	sort(heights.begin(), heights.end());
	// root�� �ֻ��� ���� �ϴ� ��θ� �������
	if (heights.size() >= 2)
		longest = max(longest, 2 + heights[heights.size() - 2] + heights[heights.size() - 1]);
	// Ʈ���� ���̴� ����Ʈ�� ������ �ִ�ġ�� 1�� ���� ���
	return heights.back() + 1;
}

// �� ��� ������ ���� �� ����� ���̸� ����Ѵ�
int solve(TreeNode* root) {
	longest = 0;
	// Ʈ���� ���̿� �ִ� ��-�� ��� ���� �� ū ���� �����Ѵ�
	int h = height(root);
	return max(longest, h);
}

// x^2�� ��ȯ
int sqr(int x) {
	return x * x;
}

// �� ���� a, b�� �߽��� ���� �Ÿ��� ������ ��ȯ
int sqrdist(int a, int b) {
	return sqr(y[a] - y[b]) + sqr(x[a] - x[b]);
}

// ���� a�� ���� b�� �����ϴ��� Ȯ���Ѵ�
bool encloses(int a, int b) {
	return radius[a] > radius[b] &&
		sqrdist(a, b) < sqr(radius[a] - radius[b]);
}

// ����Ʈ������ parent�� child�� �θ����� Ȯ���Ѵ�.
// parent�� child�� �� ���� �����ؾ��Ѵ�
bool isChild(int parent, int child) {
	if (!encloses(parent, child))return false;
	// �ٸ� �� �ǳʼ� ���谡 �ִ� ���
	for (int i = 0; i < n; ++i)
		if (i != parent && i != child && encloses(parent, i) && encloses(i, child))
			return false;
	return true;
}

// root ������ ��Ʈ�� �ϴ� Ʈ���� �����Ѵ�
TreeNode* getTree(int root) {
	TreeNode* ret = new TreeNode();
	for (int ch = 0; ch < n; ++ch) {
		// ch ������ root ������ ���������� ���ԵǾ� �ִٸ�
		// Ʈ���� ����� �ڼ� ��Ͽ� �߰��Ѵ�
		if (isChild(root, ch))
			ret->children.push_back(getTree(ch));
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> y[i] >> x[i] >> radius[i];
		TreeNode* root = getTree(0);
		cout << solve(root) << "\n";
	}
	return 0;
}
*/