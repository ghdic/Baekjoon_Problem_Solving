/*
https://www.acmicpc.net/problem/9086

&Title
9086�� - ���ڿ�

&Question
���ڿ��� �Է����� �ָ� ���ڿ��� ù ���ڿ� ������ ���ڸ� 
����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
�Է��� ù �ٿ��� �׽�Ʈ ���̽��� ���� T(1 �� 
T �� 10)�� �־�����. �� �׽�Ʈ ���̽��� �� �ٿ� 
�ϳ��� ���ڿ��� �־�����. ���ڿ��� ���ĺ� A~Z �빮�ڷ� �̷������ ���ĺ� 
���̿� ������ ������ ���ڿ��� ���̴� 1000���� �۴�. 

&Output
�� �׽�Ʈ ���̽��� ���ؼ� �־��� ���ڿ��� ù ���ڿ� 
������ ���ڸ� �����Ͽ� ����Ѵ�. 

&Example
-input
3
ACDKJFOWIEGHE
O
AB

-output
AE
OO
AB


*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string k;
		cin >> k;
		cout << k[0] << k[k.size() - 1] << endl;
	}
	return 0;
}
*/