/*
https://www.acmicpc.net/problem/2954

&Title
2954�� - â������ �ϱ���

&Question
â���̴� ���� �� �Ϸ絿�� �Ͼ ���� �ϱ��忡 �����. 
�ϱ����� ���鼭 ���� ���ε� ���� �ϱ� ���ؼ� ����� �ϱ⸦ 
����. ��, ������ �ڽ��� �ϱ����� ���� ���� ���� ���ؼ� 
����('a','e','i','o','u')�� ������ 'p'�� �ϳ� ����, �� ������ �ϳ� �� 
����.���� ���, "kemija" �� "kepemipijapa"�� �ǰ�, "paprika"�� "papapripikapa"�� �ȴ�.â���̰� 
�ϱ��忡 �ۼ��� ������ �ϳ� �־����� ��, ���� ������ �������� 
���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� ���ĺ� �ҹ��ڿ� �������θ� �̷���� ������ �ϳ� 
�־�����. ��� �ܾ�� ���� �ϳ��� ���еǾ��� �ִ�. ������ ���̴� 
�ִ� 100�̴�. 

&Output
ù° �ٿ� â���̰� �ϱ��忡 �ۼ��� ������ ���� �������� 
�ٲپ� ����Ѵ�. 

&Example
-input
zepelepenapa papapripikapa

-output
zelena paprika


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string a[5] = { "apa", "epe", "ipi", "opo", "upu" };
	string b[5] = { "a", "e", "i", "o", "u" };
	getline(cin, s);
	for (int i = 0; i < 5; i++) {
		int index = 0;
		while (s.find(a[i], index) != -1) {
			int find = s.find(a[i], index);
			s.erase(find, 3);
			s.insert(find, b[i]);
			index = find + 1;
		}
	}
	cout << s << endl;
	return 0;
}
*/