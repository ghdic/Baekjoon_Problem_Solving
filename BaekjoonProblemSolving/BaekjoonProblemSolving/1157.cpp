/*
https://www.acmicpc.net/problem/1157

&Title
1157�� - �ܾ� ����

&Question
���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� 
���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. ��, �빮�ڿ� 
�ҹ��ڸ� �������� �ʴ´�. 

&Input
ù° �ٿ� ���ĺ� ��ҹ��ڷ� �̷���� �ܾ �־�����. �־����� 
�ܾ��� ���̴� 1,000,000�� ���� �ʴ´�. 

&Output
ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� 
�빮�ڷ� ����Ѵ�. ��, ���� ���� ���� ���ĺ��� ���� �� 
�����ϴ� ��쿡�� ?�� ����Ѵ�. 

&Example
-input
Mississipi

-output
?

-input
zZa

-output
Z

-input
z

-output
Z

-input
baaa

-output
A


*/

/*
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
	pair <int, char> p[26];
	for (int i = 0; i < 26; i++) {
		p[i] = make_pair(0, 'a' + i);
	}
	string N;
	cin >> N;
	for (int i = 0; i < N.size(); i++) {
		if (isupper(N[i]))N[i] = tolower(N[i]);
	}
	for (int i = 0; i < N.size(); i++) {
		p[N[i] - 97].first++;
	}
	sort(p, p + 26);
	if (p[25].first == p[24].first)cout << "?" << endl;
	else cout << (char)toupper(p[25].second) << endl;
		return 0;
}
*/