/*
https://www.acmicpc.net/problem/1871

&Title
1871�� - ���� �ڵ��� ��ȣ��

&Question
�ٹ�Ÿ�� �ڵ��� ��ȣ���� ABC-0123 (�� ����, �� ����)�� 
���� �� �κ����� �������� �ִ�.���� ��ȣ���� ù ��° �κ��� 
��ġ�� �� ��° �κ��� ��ġ�� ���̰� 100�� ���� �ʴ� 
��ȣ���̴�.���ڷ� �̷���� ù ��° �κ��� ��ġ�� ���ڸ� 26���� ����ó�� 
����ϴ�. (�� �ڸ��� [A..Z]) ���� ���, "ABC"�� ��ġ�� 28 
(0*26^2 + 1*26^1 + 2*26^0)�� �ȴ�. "ABC-0123"�� |28 - 
123| <= 100 �̱� ������, ���� ��ȣ���̴�.�ڵ��� ��ȣ���� �־����� 
��, ���� ��ȣ������ �ƴ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� ��ȣ���� �� N (1 �� N 
�� 100)�� �־�����. ���� N�� �ٿ��� �ڵ��� ��ȣ���� LLL-DDDD 
�������� �־�����. 

&Output
������ �ڵ��� ��ȣ�ǿ� ���ؼ�, ���� ��ȣ���̸� "nice"��, �ƴϸ� 
"not nice"�� ����Ѵ�. 

&Example
-input
2
ABC-0123
AAA-9999

-output
nice
not nice


*/

/*
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int N;
	string s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a = 0, b = 0;
		cin >> s;
		for (int j = 0; j < 8; j++) {
			if (j < 3)a += (s[j] - 'A')*pow(26, 2 - j);
			else if (j > 3)b += (s[j] - '0')*pow(10, 7 - j);
		}
		if (abs(a - b) <= 100)cout << "nice" << endl;
		else cout << "not nice" << endl;
	}
	return 0;
}
*/