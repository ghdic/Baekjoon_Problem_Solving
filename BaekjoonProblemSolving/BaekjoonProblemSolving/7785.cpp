/*
https://www.acmicpc.net/problem/7785

&Title
7785�� - ȸ�翡 �ִ� ���

&Question
����̴� �������� ����Ʈ���� ȸ�� ��ۿ��� ���Ѵ�. �� ȸ���� 
���� ū Ư¡�� �����ο� ����� �ð��̴�. ����, �������� �ݵ�� 
9�ú��� 6�ñ��� ȸ�翡 ���� �ʾƵ� �ȴ�.�� ������ �ڱⰡ ���� 
�� ����� �� �ְ�, �ƹ����� ����� �� �ִ�.����̴� ��� 
����� ����ī�� �ý����� �α׸� ������ �ִ�. �� �α״� � 
����� ȸ�翡 ���Դ���, ���������� ��ϵǾ��� �ִ�. �αװ� �־����� ��, 
���� ȸ�翡 �ִ� ��� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� �α׿� ��ϵ� ���� ����� �� n�� 
�־�����. (2 �� n �� 106) ���� n���� �ٿ��� 
���� ����� ������� �־�����, �� ����� �̸��� �־����� "enter"�� 
"leave"�� �־�����. "enter"�� ���� ���, "leave"�� ���� ����̴�.ȸ�翡�� ���������� 
������, ��ҹ��ڰ� �ٸ� ��쿡�� �ٸ� �̸��̴�. 

&Output
���� ȸ�翡 �ִ� ����� �̸��� ���� ���� �������� 
�� �ٿ� �� �� ����Ѵ�. 

&Example
-input
4
Baha enter
Askar enter
Baha leave
Artem enter

-output
Askar
Artem


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <set>
#include <iterator>
using namespace std;

int main() {
	int N;
	cin >> N;
	set<string> s;
	for (int i = 0; i < N; i++) {
		string a, b;
		cin >> a >> b;
		if (b == "enter") {
			s.insert(a);
		}
		else if(b == "leave") {
			s.erase(s.find(a));
		}
	}
	
	set<string>::reverse_iterator riter;
	for (riter = s.rbegin(); riter != s.rend(); ++riter)
		cout << *riter << endl;
	return 0;
}
*/