/*
https://www.acmicpc.net/problem/11655

&Title
11655�� - ROT13

&Question
ROT13�� ī�̻縣 ��ȣ�� �������� ���� ���ĺ��� 13���ھ� �о 
�����.���� ���, "Baekjoon Online Judge"�� ROT13���� ��ȣȭ�ϸ� "Onrxwbba Bayvar 
Whqtr"�� �ȴ�. ROT13���� ��ȣȭ�� ������ ���� �������� �ٲٷ��� ��ȣȭ�� 
���ڿ��� �ٽ� ROT13�ϸ� �ȴ�. �տ��� ��ȣȭ�� ���ڿ� "Onrxwbba Bayvar 
Whqtr"�� �ٽ� ROT13�� �����ϸ� "Baekjoon Online Judge"�� �ȴ�.ROT13�� ���ĺ� 
�빮�ڿ� �ҹ��ڿ��� ������ �� �ִ�. ���ĺ��� �ƴ� ���ڴ� ���� 
���� �״�� ���� �־�� �Ѵ�. ���� ���, "One is 
1"�� ROT13���� ��ȣȭ�ϸ� "Bar vf 1"�� �ȴ�.���ڿ��� �־����� ��, 
"ROT13"���� ��ȣȭ�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� ���ĺ� �빮��, �ҹ���, ����, ���ڷθ� �̷���� 
���ڿ� S�� �־�����. S�� ���̴� 100�� ���� �ʴ´�. 

&Output
ù° �ٿ� S�� ROT13���� ��ȣȭ�� ������ ����Ѵ�. 

&Example
-input
Baekjoon Online Judge

-output
Onrxwbba Bayvar Whqtr

-input
One is 1

-output
Bar vf 1


*/

/*
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string N;
	getline(cin, N);
	for (int i = 0; i < N.size(); i++) {
		
		if (isupper(N[i])) {
			N[i] = (N[i] - 65 + 13) % 26 + 65;
		}
		else if(islower(N[i])){
			N[i] = (N[i] - 97 + 13) % 26 + 97;
		}
	}
	cout << N << endl;
	return 0;
}
*/