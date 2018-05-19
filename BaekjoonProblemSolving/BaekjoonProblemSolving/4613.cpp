/*
https://www.acmicpc.net/problem/4613

&Title
4613�� - Quicksum

&Question
�� �������� ����� Quicksum�̶�� �ϴ� checksum �˰����� �����ؾ� 
�Ѵ�. Quicksum ��Ŷ�� ���� �빮�ڿ� �������� �̷�����ִ�. �׸��� ���۰� 
���� �׻� �빮���̴�. ������ ���ڿ� ���������� ������ ���ӵǾ �������� 
�ִ�.Quicksum�� ������ ������ ��ġ�� ���� ���� ���̴�. ������ 0�̴�. 
���ڴ� ������ ��ġ���� ������ �ִµ� ������� A=1, B=2 ... 
Z=26�̴�.���� ������ "ACM" �� "MID CENTRAL"�ε� ���캸�� ������ ����.ACM: 
1*1 + 2*3 + 3*13 = 46MID CENTRAL: 1*13 
+ 2*9 + 3*4 + 4*0 + 5*3 + 
6*5 + 7*14 + 8*20 + 9*18 + 10*1 
+ 11*12 = 650 

&Input
# �� ������ ������ ��� �Է��� �޴´�. ������ 
��Ŷ�� ���ٿ� �ϳ��� �Է��� �Ǹ� �������� ���۵ǰų� ������ ������, 
�빮�ڸ� �Է��� �ȴ�. ��Ŷ�� ���̴� 1~255���̴�. 

&Output
������ ��Ŷ�� ���� ���ٿ� �ϳ��� Quicksum �� ����϶�. 


&Example
-input
ACM
MID CENTRAL
REGIONAL PROGRAMMING CONTEST
ACN
A C M
ABC
BBC
#

-output
46
650
4690
49
75
14
15


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while (true) {
		getline(cin, s);
		if (s == "#")break;

		int value = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				value += (s[i] - 'A' + 1)*(i + 1);
			}
		}
		cout << value << endl;
	}

	return 0;
}
*/