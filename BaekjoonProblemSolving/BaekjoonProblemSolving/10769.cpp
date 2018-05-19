/*
https://www.acmicpc.net/problem/10769

&Title
10769�� - �ູ���� ������

&Question
�¿��̴� �ڽ��� ������ ǥ���ϱ� ���ؼ� ���� ���� �޽����� 
�̸�Ƽ���� �־� ������ �Ѵ�. �¿��̰� ������ �̸�Ƽ���� �� ���� 
���ڰ� �پ��ִ� ������ �̷���� ������, �ູ�� ���� ��Ÿ���� :-) 
�� ���� ���� ��Ÿ���� :-( �� �ִ�.�����̴� �¿����� �̸�Ƽ���� 
�Ϳ��� ô�̶�� ������ �ſ� �Ⱦ��ϹǷ�, �¿����� ���ڰ� ���� ��ü���� 
�����⸸ �Ǵ��ؼ� �˷��ִ� ���α׷��� �ۼ��ϰ� �ʹ�. 

&Input
ù �ٿ� �ּ� 1������ �ִ� 255���� ���ڵ��� �Էµȴ�. 


&Output
����� ���� ��Ģ�� ���� ��������.� �̸�Ƽ�ܵ� ���ԵǾ� ���� 
������, none �� ����Ѵ�.�ູ�� �̸�Ƽ�ܰ� ���� �̸�Ƽ���� ���� �����ϰ� 
���ԵǾ� ������, unsure �� ����Ѵ�.�ູ�� �̸�Ƽ���� ���� �̸�Ƽ�ܺ��� ���� 
���ԵǾ� ������, happy �� ����Ѵ�.���� �̸�Ƽ���� �ູ�� �̸�Ƽ�ܺ��� ���� 
���ԵǾ� ������, sad �� ����Ѵ�. 

&Example
-input
How are you :-) doing :-( today :-)?

-output
happy

-input
:)

-output
none

-input
This:-(is str:-(:-(ange te:-)xt.

-output
sad


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	int happy = 0, sad = 0;
	string s;
	getline(cin, s);
	int i = 0;
	while (s.find(":-)", i) != -1) {
		i = s.find(":-)", i) + 1;
		happy++;
	}
	i = 0;
	while (s.find(":-(", i) != -1) {
		i = s.find(":-(", i) + 1;
		sad++;
	}

	if (happy == 0 && sad == 0)
		cout << "none" << endl;
	else if (happy == sad)
		cout << "unsure" << endl;
	else if (happy > sad)
		cout << "happy" << endl;
	else
		cout << "sad" << endl;
	return 0;
}
*/