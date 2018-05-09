/*
https://www.acmicpc.net/problem/5586

&Title
5586�� - JOI�� IOI

&Question
�Է����� �־����� ���ڿ����� �������� 3���� ���ڰ� JOI �Ǵ� 
IOI�� ���� ���� �� �� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
���ڿ��� ���ĺ� �빮�ڷθ� �̷���� �ִ�. ���� ���, �Ʒ��� ���� 
"JOIOIOI"���� JOI�� 1��, IOI�� 2�� �ִ�. 

&Input
ù° �ٿ� ���ĺ� 10000�� �̳��� ���ڿ��� �־�����. 

&Output
ù° �ٿ� ���ڿ��� ���ԵǾ� �ִ� JOI�� ����, ��° 
�ٿ� IOI�� ������ ����Ѵ�. 

&Example
-input
JOIOIOIOI

-output
1
3


*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int joi = 0, ioi = 0;
	cin >> s;
	for (int i = 0; i < s.size();) {
		int temp = s.find("JOI", i);
		if (temp == -1)break;
		else {
			i = temp + 1;
			joi++;
		}
	}
	for (int i = 0; i < s.size();) {
		int temp = s.find("IOI", i);
		if (temp == -1)break;
		else {
			i = temp + 1;
			ioi++;
		}
	}
	cout << joi << "\n" << ioi << endl;
	return 0;
}
*/