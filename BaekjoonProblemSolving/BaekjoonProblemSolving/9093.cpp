/*
https://www.acmicpc.net/problem/9093

&Title
9093�� - �ܾ� ������

&Question
������ �־����� ��, �ܾ ��� ����� ����ϴ� ���α׷��� 
�ۼ��Ͻÿ�. ��, �ܾ��� ������ �ٲ� �� ����. �ܾ�� ���� 
���ĺ����θ� �̷���� �ִ�. 

&Input
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. �� 
�׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, ������ �ϳ� �־�����. 
�ܾ��� ���̴� �ִ� 20, ������ ���̴� �ִ� 1000�̴�. �ܾ�� 
�ܾ� ���̿��� ������ �ϳ� �ִ�. 

&Output
�� �׽�Ʈ ���̽��� ���ؼ�, �Է����� �־��� ������ �ܾ 
��� ������ ����Ѵ�. 

&Example
-input
2
I am happy today
We want to win the first prize

-output
I ma yppah yadot
eW tnaw ot niw eht tsrif ezirp


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		string s;
		getline(cin, s);
		int start = 0, end = 0;
		while (true) {
			end++;
			if (s[end] == ' ') {
				for (int j = end - 1; j >= start; j--)
					cout << s[j];
				cout << " ";
				start = end + 1;
			}
			else if (end == s.size()) {
				for (int j = end - 1; j >= start; j--)
					cout << s[j];
				cout << "\n";
				break;
			}
		}
		
	}

	return 0;
}
*/