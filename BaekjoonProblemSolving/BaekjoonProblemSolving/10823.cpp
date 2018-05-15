/*
https://www.acmicpc.net/problem/10823

&Title
10823�� - ���ϱ� 2

&Question
���ڿ� �޸��θ� �̷���� ���ڿ� S�� �־�����. �� ��, 
S�� ���ԵǾ��ִ� �ڿ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.S�� ù ���ڿ� 
������ ���ڴ� �׻� �����̰�, �޸��� �����ؼ� �־����� �ʴ´�. �־����� 
���� �׻� �ڿ����̴�. 

&Input
���ڿ� S�� ���� �ٿ� ���ļ� �־�����. S�� ���̴� 
�ִ� 10,000�̴�. ���ԵǾ��ִ� ������ 1,000,000���� �۰ų� ���� �ڿ����̴�. 

&Output
���ڿ� S�� ���ԵǾ� �ִ� �ڿ����� ���� ����Ѵ�. 

&Example
-input
10,20,
3
0,50
,1
00

-output
210


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string tmp;
	while (cin >> tmp) {
		s += tmp;
	}
	int num = 0, sum = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			num = 10 * num + (s[i] - '0');
		}
		else if (s[i] == ',') {
			sum += num;
			num = 0;
		}
	}
	sum += num;
	cout << sum << endl;
	return 0;
}
*/