// �帶�� ã�ƺô� 258p
/*
#include <iostream>
using namespace std;
int n, m;
double cache[1000][2001];
double climb(int days, int climbed) {
	//���� ��� : m���� ��� ���� ���
	if (days == m) return climbed >= n ? 1.0 : 0.0;
	// �޸������̼�
	double& ret = cache[days][climbed];
	if (ret != -1.0) return ret;
	return ret = 0.25*climb(days + 1, climbed + 1) + 0.75*climb(days + 1, climbed + 2);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(10);
	int C;
	cin >> C;
	while (C--) {
		for (int i = 0; i < 1000; i++)for (int j = 0; j <= 2000; j++)cache[i][j] = -1;
		cin >> n >> m; //�칰 ����, �帶 �Ⱓ ����
		cout << climb(0, 0) << endl;
		
	}
	return 0;
}
*/