/*
https://www.acmicpc.net/problem/10822

&Title
10822�� - ���ϱ�

&Question
���ڿ� �޸��θ� �̷���� ���ڿ� S�� �־�����. �� ��, 
S�� ���ԵǾ��ִ� �ڿ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.S�� ù ���ڿ� 
������ ���ڴ� �׻� �����̰�, �޸��� �����ؼ� �־����� �ʴ´�. �־����� 
���� �׻� �ڿ����̴�. 

&Input
ù° �ٿ� ���ڿ� S�� �־�����. S�� ���̴� �ִ� 
100�̴�. ���ԵǾ��ִ� ������ 1,000,000���� �۰ų� ���� �ڿ����̴�. 

&Output
���ڿ� S�� ���ԵǾ� �ִ� �ڿ����� ���� ����Ѵ�. 

&Example
-input
10,20,30,50,100

-output
210


*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, sum = 0, num = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if ('0' <= s[i] && s[i] <= '9')num = num * 10 + (s[i] - '0');
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