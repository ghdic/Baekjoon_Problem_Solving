/*
https://www.acmicpc.net/problem/8958

&Title
OX����
&Question
"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�. ������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.

"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.

OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����. ���ڿ��� O�� X������ �̷���� �ִ�.
&Output
�� �׽�Ʈ ���̽����� ������ ����Ѵ�.
&Example
-input
5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX
-output
10
9
7
55
30
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string k;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> k;
		int tmp = 0, score = 0;
		for (int j = 0; j < k.size(); j++) {
			if (k[j] == 'O') {
				tmp++;
				score += tmp;
			}
			else if (k[j] == 'X')tmp = 0;
		}
		cout << score << endl;
	}

	return 0;
}
*/