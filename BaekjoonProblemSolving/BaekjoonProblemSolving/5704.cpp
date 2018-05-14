/*
https://www.acmicpc.net/problem/5704

&Title
5704�� - �ұ׷�

&Question
�ұ׷��� ���ĺ��� ��� ���ڵ��� ����ؼ� ���� �����̴�. "the 
quick brown fox jumps over a lazy dog"�� "jackdaws 
loves my big sphinx of quartz"�� �ұ׷��̴�. ������ �־����� 
��, �ұ׷����� �ƴ����� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. 

&Input
�Է��� ���� �׽�Ʈ ���̽��� �̷���� �ִ�. �� �׽�Ʈ 
���̽��� ���ƾ� 200���ڷ� �̷���� �ִ� �����̴�. �ܾ�� ���� �ϳ��� 
���еǾ� �ִ�. ��, �ܾ�� ���ĺ� �ҹ��ڷθ� �̷���� �ִ�. �Է��� 
������ �ٿ��� ��ǥ(*)�� �ϳ� �־�����. 

&Output
�� �׽�Ʈ ���̽��� ���ؼ�, �Է����� �־��� ������ �ұ׷��̶�� 
'Y', �ƴ϶�� 'N'�� ����Ѵ�. 

&Example
-input
jackdawf loves my big quartz sphinx
abcdefghijklmnopqrstuvwxyz
hello world
*

-output
Y
Y
N


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string s;
	while (true) {
		bool c[26] = {};
		getline(cin, s);
		if (s == "*")
			break;
		for (int i = 0; i < s.size(); i++) {
			if(s[i]!=' ')
				c[s[i] - 'a'] = true;
		}
		int cnt = 0;
		for (int i = 0; i < 26; i++)
			if (c[i] == true)
				cnt++;
		if (cnt == 26)
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}
	return 0;
}
*/