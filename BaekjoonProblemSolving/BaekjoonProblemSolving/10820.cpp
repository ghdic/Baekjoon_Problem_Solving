/*
https://www.acmicpc.net/problem/10820

&Title
10820�� - ���ڿ� �м�

&Question
���ڿ� N���� �־�����. �� ��, ���ڿ��� ���ԵǾ� �ִ� 
�ҹ���, �빮��, ����, ������ ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.�� ���ڿ��� 
���ĺ� �ҹ���, �빮��, ����, �������θ� �̷���� �ִ�. 

&Input
ù° �ٺ��� N��° �ٱ��� ���ڿ��� �־�����. (1 �� 
N �� 100) ���ڿ��� ���̴� 100�� ���� �ʴ´�. 

&Output
ù° �ٺ��� N��° �ٱ��� ������ ���ڿ��� ���ؼ� �ҹ���, 
�빮��, ����, ������ ������ �������� ������ ����Ѵ�. 

&Example
-input
This is String
SPACE    1    SPACE
 S a M p L e I n P u T     
0L1A2S3T4L5I6N7E8

-output
10 2 0 2
0 10 1 8
5 6 0 16
0 8 9 0


*/


/*
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string s;
	while (getline(cin, s)) {
		int a = 0, b = 0, c = 0, d = 0;
		for (int i = 0; i < s.size(); i++) {
			if (islower(s[i])) {
				a++;
			}
			else if (isupper(s[i])) {
				b++;
			}
			else if (s[i] >= '0' && s[i] <= '9') {
				c++;
			}
			else if (s[i] == ' ') {
				d++;
			}
		}
		cout << a << " " << b << " " << c << " " << d << endl;
	}
	return 0;
}
*/