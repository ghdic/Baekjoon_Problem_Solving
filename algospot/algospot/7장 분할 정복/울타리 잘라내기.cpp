//https://algospot.com/judge/problem/read/FENCE

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//�� ������ ���̸� �����ϴ� �迭
vector<int> h;
//h[left... right] �������� ã�� �� �� �ִ� ���� ū �簢���� ���̸� ��ȯ�Ѵ�.
int solve(int left, int right) {
	//���� ���: ���ڰ� �ϳ��ۿ� ���� ���
	if (left == right) return h[left];
	//[left, mid], [mid+1, right]�� �� �������� ������ �����Ѵ�.
	int mid = (left + right) / 2;
	//������ ������ ���� ����
	int ret = max(solve(left, mid), solve(mid + 1, right));
	//�κ� ���� 3: �� �κп� ��� ��ġ�� �簢�� �� ���� ū ���� ã�´�.
	int lo = mid, hi = mid + 1;
	int height = min(h[lo], h[hi]);
	//[mid, mid + 1] �� �����ϴ� �ʺ� 2�� �簢���� ����Ѵ�.
	ret = max(ret, height * 2);
	//�簢���� �Է� ��ü�� ���� ������ Ȯ���� ������.
	while (left < lo || hi < right) {
		//�׻� ���̰� �� ���� ������ Ȯ���Ѵ�.
		if (hi < right && (lo == left || h[lo - 1] < h[hi + 1])) {
			++hi;
			height = min(height, h[hi]);
		}
		else {
			--lo;
			height = min(height, h[lo]);
		}
		//Ȯ���� �� �簢���� ����
		ret = max(ret, height * (hi - lo + 1));
	}
	return ret;
}

int main() {
	int test_case, num;
	cin >> test_case;
	if (test_case < 0 || test_case > 50)
		exit(-1);
	for (int i = 0; i < test_case; ++i) {
		cin >> num;
		h.resize(num);
		for (int j = 0; j < num; ++j) {
			cin >> h[j];
			if (h[j] < 0 || h[j]>20000)
				exit(-1);
		}
		cout << solve(0, h.size()-1) << endl;
	}
}
*/