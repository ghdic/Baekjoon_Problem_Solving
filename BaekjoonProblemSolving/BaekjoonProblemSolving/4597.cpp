/*
https://www.acmicpc.net/problem/4597

&Title
4597�� - �и�Ƽ

&Question
1�� ������ Ȧ������ ��Ʈ��Ʈ���� "Ȧ�� �и�Ƽ"�� ������ �ִٰ� 
�Ѵ�. ��, ¦������ ��쿡�� "¦�� �и�Ƽ"�� ������ �ִٰ� �Ѵ�. 
��, 0�� ¦���� �����Ѵ�. ����, 1�� ���� ��Ʈ ��Ʈ���� 
¦�� �и�Ƽ�� ������ �ִ�. ������ ���ڰ� ������ ��Ʈ ��Ʈ���� 
�־�����, �� ��Ʈ ��Ʈ���� �и�Ƽ�� �־����� ��, ������ ���ڸ� 
�ùٸ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
�Է��� ���� ���� ��Ʈ ��Ʈ������ �̷���� �ִ�. �� 
��Ʈ ��Ʈ���� �� �ٷ� �̷���� �ְ�, ���̴� 1~31��Ʈ�̴�. ��, 
��Ʈ ��Ʈ���� ������ ���ڴ� e �Ǵ� o�̴�. (e: ¦�� 
�и�Ƽ, o: Ȧ�� �и�Ƽ) ������ �ٿ��� '#'�� �־�����. 

&Output
�Է����� �־��� ������ ��Ʈ ��Ʈ���� ���ؼ�, ������ ���ڸ� 
�ùٸ� ��Ʈ�� �ٲ� ��Ʈ ��Ʈ���� ����Ѵ�. 

&Example
-input
101e
010010o
1e
000e
110100101o
#

-output
1010
0100101
11
0000
1101001010


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while (true) {
		cin >> s;
		if (s == "#")break;
		int cnt = 0;
		for (int i = 0; i < s.size() - 1; i++)
			if (s[i] == '1')cnt++;
		if (s[s.size() - 1] == 'o')cnt++;
		if (cnt % 2 == 0) {
			s[s.size() - 1] = '0';
		}
		else
			s[s.size() - 1] = '1';
		cout << s << endl;
	}

	return 0;
}
*/