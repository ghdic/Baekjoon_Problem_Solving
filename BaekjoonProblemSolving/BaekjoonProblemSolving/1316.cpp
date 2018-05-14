/*
https://www.acmicpc.net/problem/1316

&Title
1316�� - �׷� �ܾ� üĿ

&Question
�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� 
���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�. ���� ���, ccazzzzbb�� c, 
a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, 
n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, aabbbccb�� b�� �������� 
��Ÿ���� ������ �׷� �ܾ �ƴϴ�.�ܾ� N���� �Է����� �޾� �׷� 
�ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� �ܾ��� ���� N�� ���´�. N�� 100���� 
�۰ų� ���� �ڿ����̴�. ��°�ٺ��� N���� �ٿ� �ܾ ���´�. �ܾ�� 
���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�. 

&Output
ù° �ٿ� �׷� �ܾ��� ������ ����Ѵ�. 

&Example
-input
3
happy
new
year

-output
3
-input
4
aba
abab
abcabc
a

-output
1


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, cnt = 0;
	string s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		bool check[26] = {};
		for (int j = 0; j < s.size(); j++) {
			if (check[s[j] - 'a'] == false) {
				while (true) {
					if (j == s.size() - 1)
						break;
					if (s[j] == s[j + 1])
						j++;
					else
						break;
				}
				check[s[j] - 'a'] = true;
			}
			else {
				cnt--;
				break;
			}
		}
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}
*/