// http://codeforces.com/contest/1213/problem/0

// A. Chips Moving

/*
Ĩ�� ���� n�� ��ġ xi�� �־�����
�ΰ��� ������� Ĩ�� �ű�� �ִµ�
1)�� �Ǵ� ��� 2��ŭ ����� �����̴�
2)�� �Ǵ� ��� 1��ŭ ����� 1�̴�

��� Ĩ�� �� ��ҿ� ���̰� �ϱ� ���� ����� ���ΰ�?
*/
/*
#include <iostream>
using namespace std;

int n;
int odd = 0, even = 0;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	int a;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a & 1) ++odd;
		else ++even;
	}
	cout << (odd > even ? even : odd) << endl;
	return 0;

}
*/