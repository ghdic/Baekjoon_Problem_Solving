// https://www.algospot.com/judge/problem/read/NERD2

/*
#include <iostream>
#include <map>
using namespace std;

// ���� �ٸ� ���� ��������� �ʴ� ������ ����� �����Ѵ�
map<int, int> coords;
// ���ο� �� (x, y)�� ������ �ٸ� ���鿡 ������ϴ��� Ȯ���Ѵ�
bool isDominated(int x, int y) {
	// x���� �����ʿ� �ִ� �� �� ���� ���ʿ� �ִ� ���� ã�´�.
	map<int, int>::iterator it = coords.lower_bound(x);
	// �׷� ���� ������ (x, y)�� ��������� �ʴ´�.
	if (it == coords.end())return false;
	// �� ���� x���� �����ʿ� �ִ� �� �� ���� ���� �ִ� ���̹Ƿ�,
	// (x, y)�� ��� ���� ����Ƿ��� �� ������ ����Ǿ�� �Ѵ�.
	return y < it->second;
}

// ���ο� �� (x,y)�� ������ϴ� ������ Ʈ������ �����
void removeDominated(int x, int y) {
	map<int, int>::iterator it = coords.lower_bound(x);
	// (x, y)���� ���ʿ� �ִ� ���� ����!
	if (it == coords.begin())return;
	--it;
	// �ݺ��� �Һ���: it�� (x,y)�� �ٷ� ���ʿ� �ִ� ��
	while (true) {
		// (x, y)�ٷ� ���ʿ� ���� ���� ã�´�
		// it�� ǥ���ϴ� ���� (x, y)�� ������� �ʴ´ٸ� ���� ����
		if (it->second > y)break;
		// ���� ���� �� �����Ƿ� it�� ����� ����
		if (it == coords.begin()) {
			coords.erase(it);
			break;
		}
		// ���� ������ ���ͷ����͸� �ϳ� �Ű� ���� it�� �����
		else {
			map<int, int>::iterator jt = it;
			--it;
			coords.erase(jt);
		}
	}
}

// �� ��(x, y)�� �߰� �Ǿ��� �� coords�� �����ϰ�
// �ٸ� ���� ��������� �ʴ� ������ ������ ��ȯ�Ѵ�
int registered(int x, int y) {
	// (x, y)�� �̹� ������ϴ� ��쿡�� �׳� (x, y)�� ������
	if (isDominated(x, y))return coords.size();
	// ������ �ִ� �� �� (x, y)�� ������ϴ� ������ �����
	removeDominated(x, y);
	coords[x] = y;
	return coords.size();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, p, q;
	cin >> t;
	while (t--) {
		int res = 0;
		coords.clear();
		cin >> n;
		while (n--) {
			cin >> p >> q;
			res += registered(p, q);
		}
		cout << res << "\n";
	}
	return 0;
}
*/