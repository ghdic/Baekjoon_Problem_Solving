// 8.16 �δϹ� �ڻ��� Ż�� (��)
//https://algospot.com/judge/problem/read/NUMB3RS


/*
#include <iostream>
#include <vector>
using namespace std;

int n, d, p, t, q; // �����Ǽ� 0~50, ���ݱ��� ���� �ϼ� 1~100, �����Ұ� �ִ� ���� ��ȣ 0~n-1, Ȯ���� ����� ���� �� 1~n
int map[51][51] = {};
int deg[51] = {}; // ���� i�� ����� ���� ����


double search(vector<int>& path){
	//���� ��� : d���� ���� ���
	if (path.size() == d + 1) {
		//�� �ó������� q���� ������ �ʴ´ٸ� ��ȿ
		if (path.back() != q)return 0.0;
		// path�� ���� Ȯ���� ����Ѵ�.
		double ret = 1.0;
		for (int i = 0; i + 1 < path.size(); ++i)
			ret /= deg[path[i]];
		return ret;
	}
	double ret = 0.0;
	// ����� ���� ��ġ�� �����Ѵ�.
	for (int there = 0; there < n; ++there) {
		if (map[path.back()][there]) {
			path.push_back(there);
			ret += search(path);
			path.pop_back();
		}
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(8);
	int c;
	cin >> c;
	while (c--) {

		cin >> n >> d >> p;
		for (int i = 0; i < n; ++i) {
			int count = 0;
			for (int j = 0; j < n; ++j) {
				cin >> map[i][j];
				if (map[i][j])count++;
			}
			deg[i] = count;
		}
		cin >> t;
		for (int i = 0; i < t - 1; ++i) {
			vector<int> path;
			path.push_back(p);
			cin >> q;
			cout << search(path) << " ";
		}
		vector<int> path;
		path.push_back(p);
		cin >> q;
		cout << search(path) << "\n";
	}
}


*/

/*

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, d, p, q, t;
// cache[][] �� -1 �� �ʱ�ȭ
double cache[51][101];
// connected[i][j] == ���� i j ���Ῡ��
// deg[i] == ���� i�� ����� ���� ����
int connected[51][51], deg[51];
// days��° here�� ������ ���� �ִٰ� �����ϰ�,
// ������ ���� q�� ������ ���� ���� ���Ǻ� Ȯ���� ��ȯ�Ѵ�.
double search2(int here, int days) {
	// ������� : d���� ���� ���
	if (days == d)return (here == q ? 1.0 : 0.0);
	// �޸������̼�
	double& ret = cache[here][days];
	if (ret > -0.5)return ret;
	ret = 0.0;
	for (int there = 0; there < n; ++there)
		if (connected[here][there])
			ret += search2(there, days + 1) / deg[here];
	return ret;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(8);
	int c;
	cin >> c;
	while (c--) {
		
		cin >> n >> d >> p;
		for (int i = 0; i < n; ++i) {
			int count = 0;
			for (int j = 0; j < n; ++j) {
				cin >> connected[i][j];
				if (connected[i][j])count++;
			}
			deg[i] = count;
		}
		
		cin >> t;
		for (int i = 0; i < t - 1; ++i) {
			for (int i = 0; i < 51; ++i)
				for (int j = 0; j < 101; ++j)
					cache[i][j] = -1.0;
			cin >> q;
			cout << search2(p, 0) << " ";
		}
		for (int i = 0; i < 51; ++i)
			for (int j = 0; j < 101; ++j)
				cache[i][j] = -1.0;
		cin >> q;
		cout << search2(p, 0) << "\n";
	}
}

*/

/*
// 2��°�� �Ųٷ� ����ϴ� �ҽ�
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, d, p, q, t;
// cache[][] �� -1 �� �ʱ�ȭ
double cache[51][101];
// connected[i][j] == ���� i j ���Ῡ��
// deg[i] == ���� i�� ����� ���� ����
int connected[51][51], deg[51];
// days��° here�� ������ ���� �ִٰ� �����ϰ�,
// ������ ���� q�� ������ ���� ���� ���Ǻ� Ȯ���� ��ȯ�Ѵ�.
double search3(int here, int days) {
	// ���� ���: 0��°
	if (days == 0) return (here == p ? 1.0 : 0.0);
	// �޸������̼�
	double& ret = cache[here][days];
	if (ret > -0.5)return ret;
	ret = 0.0;
	for (int there = 0; there < n; ++there)
		if (connected[here][there])
			ret += search3(there, days - 1) / deg[there];
	return ret;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(8);
	int c;
	cin >> c;
	while (c--) {

		cin >> n >> d >> p;
		for (int i = 0; i < n; ++i) {
			int count = 0;
			for (int j = 0; j < n; ++j) {
				cin >> connected[i][j];
				if (connected[i][j])count++;
			}
			deg[i] = count;
		}
		for (int i = 0; i < 51; ++i)
			for (int j = 0; j < 101; ++j)
				cache[i][j] = -1.0;
		cin >> t;
		for (int i = 0; i < t - 1; ++i) {
			
			cin >> q;
			cout << search3(q, d) << " ";
		}
		cin >> q;
		cout << search3(q, d) << "\n";
	}
}
*/