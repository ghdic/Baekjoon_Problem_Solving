/*
https://www.acmicpc.net/problem/11091

&Title
11091�� - ���ĺ� ���� ����

&Question
�ұ׷��� 26���� ���ĺ�, a~z�� �ּ� �ѹ��� ��� ����� 
������ ���Ѵ�. �Ƹ� ���� ������ ������ �̰��� ���̴�. "The 
quick brown fox jumps over the lazy dog."���� �ٸ� 
������߿� �ұ׷��� ���� ������ �ñ�������. �׷��� �������� �� ���� 
���� ���� ��� ������ �ұ׷����� �ƴ����� �Ǻ����ִ� ���α׷��� ¥�� 
���̴�.�ұ׷������� ���ĺ��� ��ҹ��ڸ� �������� �ʴ´ٰ� ����. 

&Input
�Է��� ù��° ���� 1 �� N �� 50�� 
N�� �־�����.���� N���� ���� ���� �� ������ �־����µ�, ���ĺ��� 
��ҹ���, ����, ����, �׸��� �����ȣ��(. , ? ! ' 
")�� ���Ե� �� �ִ�.�� ������ �ּ� �Ѱ��� ���ڸ� �����ϸ� 
100���� ������ �ʴ´�. 

&Output
�� �Է¿� ����, �ұ׷��� �ش��ϸ� "pangram"�� ����Ѵ�.���� �ұ׷��� 
�ƴ� ���, "missing"�� ����� �� ��ĭ ��� ���忡 ��Ÿ���� 
���� ���ڵ��� ��� ����Ѵ�. �� ��, ��Ÿ���� ���� ���ڵ��� 
��� �ҹ��ڷ� ����ϸ� ���ĺ� ������� ���ĵȻ��·� ����ؾ� �Ѵ�. 

&Example
-input
3
The quick brown fox jumps over the lazy dog.
ZYXW, vu TSR Ponm lkj ihgfd CBA.
.,?!'" 92384 abcde FGHIJ

-output
pangram
missing eq
missing klmnopqrstuvwxyz


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int N;
	string s;
	cin >> N;
	cin.ignore();
	for(int z=0;z<N;z++){
		bool c[26] = {};
		getline(cin, s);
		for (int i = 0; i < s.size(); i++) {
			if (isupper(s[i]))
				s[i] = tolower(s[i]);
		}
		for (int i = 0; i < s.size(); i++) {
			if (s[i]>='a' && s[i]<='z')
				c[s[i] - 'a'] = true;
		}
		int cnt = 0;
		for (int i = 0; i < 26; i++) {
			if (c[i] == true)
				cnt++;
		}

		if (cnt == 26)
			cout << "pangram" << endl;
		else {
			cout << "missing ";
			for (int i = 0; i < 26; i++)
				if (c[i] == false)
					cout << (char)(i+'a');
			cout << endl;
		}
	}
	return 0;
}
*/