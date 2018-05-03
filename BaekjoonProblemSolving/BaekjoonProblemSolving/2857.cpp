/*
https://www.acmicpc.net/problem/2857

&Title
2857�� - FBI

&Question
5���� ��� �� FBI ����� ã�� ���α׷��� �ۼ��Ͻÿ�. 
FBI����� ����� ø������ FBI�� ����ִ�. 

&Input
5�� �ٿ� ����� ø�������� �־�����. ø�������� ���ĺ� �빮��, 
���� 0~9, ��� (-)�θ� �̷���� ������, �ִ� 10�����̴�. 

&Output
ù° �ٿ� FBI ����� ����Ѵ�. �� ��, �ش��ϴ� 
����� �� ��° �Է������� �������� �����Ͽ� ����ؾ� �ϸ�, ������������ 
����ؾ� �Ѵ�. ���� FBI ����� ���ٸ� "HE GOT AWAY!"�� 
����Ѵ�. 

&Example
-input
47-FBI
BOND-007
RF-FBI18
MARICA-13
13A-FBILL

-output
1 3 5


*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int arr[5] = { 0 }, cnt = 0;
	for (int i = 1; i <= 5; i++) {
		cin >> s;
		if (s.find("FBI") != -1) {
			arr[cnt++] = i;
		}
	}
	if (cnt == 0)cout << "HE GOT AWAY!" << endl;
	else {
		for (int i = 0; i < cnt; i++) {
			if (i == cnt - 1)cout << arr[i] << endl;
			else cout << arr[i] << " ";
		}
	}
	return 0;
}
*/