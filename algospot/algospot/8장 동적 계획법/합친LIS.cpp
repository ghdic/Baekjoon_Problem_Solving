// https://algospot.com/judge/problem/read/JLIS
/*
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

//�Է��� 32��Ʈ ��ȣ �ִ� ������ ��� ���� ���� �� �����Ƿ�
//�������� �ּ�ġ�� 64��Ʈ�����Ѵ�.
const long long NEGINF = numeric_limits<long long>::min();
int n, m, A[100], B[100];
int cache[101][101];
//min(A[indexA], B[indexB]), max(A[indexA], B[indexB])�� �����Ϥ���
//��ģ ���� �κ� ������ �ִ� ���̸� ��ȯ�Ѵ�.
//�� indexA == indexB == -1 Ȥ�� A[indexA] != B[indexB]��� �����ϴ�.
int jlis(int indexA, int indexB) {
	//�޸����̼�
	int& ret = cache[indexA + 1][indexB + 1];
	if (ret != -1)return ret;
	ret = 0;
	long long a = (indexA == -1 ? NEGINF : A[indexA]);
	long long b = (indexB == -1 ? NEGINF : B[indexB]);
	long long maxElement = max(a, b);
	//���� ���Ҹ� ã�´�.
	for (int nextA = indexA + 1; nextA < n; ++nextA)
		if (maxElement < A[nextA])
			ret = max(ret, jlis(nextA, indexB) + 1);
	for (int nextB = indexB + 1; nextB < m; ++nextB)
		if (maxElement < B[nextB])
			ret = max(ret, jlis(indexA, nextB) + 1);
	return ret;
}

int main() {
	int C;
	cin >> C;
	if (C < 0 || C>50)exit(-1);
	for (int i = 0; i < C; i++) {
		memset(cache, -1, sizeof(cache));
		cin >> n >> m;
		if (n < 0 || m < 0 || n>100 || m>100)exit(-1);
		for (int i = 0; i < n; i++)
			cin >> A[i];
		for (int i = 0; i < m; i++)
			cin >> B[i];

		cout << jlis(-1, -1) << endl;
	}
	return 0;
}
*/