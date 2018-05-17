//https://algospot.com/judge/problem/read/BOGGLE


#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

char board[5][6];
char word[11];
int dp[5][5][11];
int len;

int func(int a, int b, int pos) {
	int &ret = dp[a][b][pos];
	if (ret != -1)return ret;

	ret = 0;
	if (board[a][b] == word[pos]) {
		if (pos == len)return ret = 1;
		for (int i = -1; i < 2; i++) {
			for (int j = -1; j < 2; j++) {
				if (i == 0 && j == 0)continue;
				int A = a + i;
				int B = b + j;
				if (0 <= A && A < 5 && 0 <= B && B < 5) {
					ret = max(ret, func(A, B, pos + 1));
				}
			}
		}
	}
	return ret;
}

int main() {
	int T;
	scanf("%d", &T);

	while (T--) {
		for (int i = 0; i < 5; i++)
			scanf("%s", board[i]);
		int n;
		scanf("%d", &n);

		for (int i = 0; i < n; i++) {
			scanf("%s", word);
			printf("%s ", word);

			len = strlen(word) - 1;

			memset(dp, -1, sizeof(dp));

			bool flag = false;
			for (int j = 0; j < 5; j++) {
				for (int k = 0; k < 5; k++) {
					if (func(j, k, 0) == 1) {
						flag = true;
						break;
					}
				}
				if (flag)break;
			}
			if (flag)printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}
/*
//���� ������ �ð� �ʰ� ����.. å ������
#include <iostream>
#include <string>
using namespace std;
char arr[5][5] = {};
string s[10];
int C, N;

const int dx[8] = { -1, -1, -1, 1, 1, 1, 0, 0 };
const int dy[8] = { -1, 0, 1, -1, 0, 1, -1, 1 };

bool hasWord(int y, int x, const string &word) {
	//���� ��� 1 : ���� ��ġ�� ���� ���̸� ������ ����
	if (!(y >= 0 && y < 5 && x >= 0 && x < 5)) {
		return false;
	}
	//���� ��� 2 : ù ���ڰ� ��ġ���� ������ ����
	if (arr[y][x] != word[0]) {
		return false;
	}

	//���� ��� 3 : �ܾ ��ġ�ϸ鼭 ���ϴ� �ܾ �� ������ ��� �׻� ����
	if (word.length() == 1) {
		return true;
	}
	//������ ����ĭ�� �˻��Ѵ�.
	for (int direction = 0; direction < 8; ++direction) {
		int nextY = y + dy[direction], nextX = x + dx[direction];
		//���� ĭ�� ���� �ȿ� �ִ���, ù ���ڴ� ��ġ�ϴ��� Ȯ���� �ʿ䰡 ����.
		if (hasWord(nextY, nextX, word.substr(1)))
			return true;
	}
	return false;
}
int main() {
	cin >> C;
	for (int i = 0; i < C; i++) {
		for (int a = 0; a < 5; a++) {
			for (int b = 0; b < 5; b++)
				cin >> arr[a][b];
		}
		cin >> N;
		for (int a = 0; a < N; a++)
			cin >> s[a];

		for (int a = 0; a < N; a++) {
			bool check = false;
			for (int y = 0; y < 5; y++) {
				for (int x = 0; x < 5; x++) {
					if (check = hasWord(y, x, s[a]))break;
				}
				if (check)break;
			}
			cout << s[a] << " " << (check ? "YES" : "NO") << endl;
		}
		
	}
}
*/

