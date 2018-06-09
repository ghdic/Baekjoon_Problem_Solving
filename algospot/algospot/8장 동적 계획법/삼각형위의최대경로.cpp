//https://algospot.com/judge/problem/read/TRIANGLEPATH

/*
//MAX_NUMBER: �� ĭ�� �� ������ �ִ�ġ
int n, triangle[100][100];
int cache[100][100][MAX_NUMBER * 100 + 1];
//(y,x) ��ġ���� �������� ���� ���� ���ڵ��� ���� sum�϶�
//�� �Ʒ��ٱ��� �������鼭 ���� �� �ִ� �ִ� ��θ� ��ȯ�ϴ�.
int path1(int y, int x, int sum) {
	//���� ���: �� �Ʒ� �ٱ��� �������� ���
	if (y == n - 1)return sum + triangle[y][x];
	//�޸����Ӽ�
	int&ret = cache[y][x][sum];
	if (ret != -1)return ret;
	sum += triangle[y][x];
	return ret = max(path1(y + 1, x + 1, sum), path1(y + 1, x, sum));
}
*/
/*
#include <iostream>
#include <algorithm>
using namespace std;

int n, triangle[100][100];
int cache2[100][100];
// (y, x) ��ġ���� �� �Ʒ��ٱ��� �������鼭 ���� �� �ִ� �ִ� ����� ���� ��ȯ�Ѵ�.
int path2(int y, int x) {
	//���� ���
	if (y == n - 1)return triangle[y][x];
	//�޸����̼�
	int& ret = cache2[y][x];
	if (ret != -1)return ret;
	return ret = max(path2(y + 1, x), path2(y + 1, x + 1)) + triangle[y][x];
}

int main() {
	int c;
	cin >> c;
	if (c > 50 || c < 0)exit(-1);
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < 100; j++)
			for (int k = 0; k < 100; k++)
				cache2[j][k] = -1;
		cin >> n;
		if (n < 2 || n>100)exit(-1);
		for (int j = 0; j < n; j++) {
			for (int k = 0; k <= j; k++) {
				cin >> triangle[j][k];
				if (triangle[j][k] < 1 || triangle[j][k]>100000)exit(-1);
			}
		}
		cout << path2(0, 0) << endl;
	}
}
*/