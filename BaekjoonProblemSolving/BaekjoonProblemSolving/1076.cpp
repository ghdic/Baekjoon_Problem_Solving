/*
https://www.acmicpc.net/problem/1076

&Title
1076�� - ����

&Question
���� ��ǰ���� ������ ����. ������ �� 3���� �̿��ؼ� 
�� ������ �� ������ ��Ÿ����.ó�� �� 2���� ������ ���̰�, 
������ ���� ���ؾ� �ϴ� ���̴�.������ ���� ���� ǥ�� �̿��ؼ� 
���Ѵ�.������black01brown110red2100orange31000yellow410000green5100000blue61000000violet710000000grey8100000000white91000000000���� ���, ���׿� ���� yellow, violet, red���ٸ� ������ ���� 
4,700�� �ȴ�. 

&Input
ù° �ٿ� ù��° ��, ��° �ٿ� �ι�° ��, 
��° �ٿ� ����° ���� �־�����. ���� ��� ���� ǥ�� 
�� �ִ� ���� �־�����. 

&Output
ù° �ٿ� �Է��� �־��� ������ ���װ��� ����Ѵ�. 

&Example
-input
yellow
violet
red
-output
4700

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	long long N = 0;
	const string s[10] = { "black", "brown", "red", "orange", "yellow", "green",
					"blue", "violet", "grey", "white" };
	
	for (int i = 0; i < 3; i++) {
		string k;
		cin >> k;
		for (int j = 0; j < 10; j++) {
			if (k == s[j]) {
				if (i == 0)
					N = j;
				else if (i == 1)
					N = N * 10 + j;
				else if(i==2)
					N *= pow(10, j);
				break;
			}
		}
	}
	cout << N << endl;
	return 0;
}
*/