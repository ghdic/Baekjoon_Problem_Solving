/*
https://www.acmicpc.net/problem/2675

&Title
���ڿ� �ݺ�
&Question
���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� T�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�ٽ� �������ڸ�, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ T�� ����� �ȴ�. S���� QR Code "alphanumeric" ���ڸ� ����ִ�.

QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%*+-./: �̴�.
&Input
ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 <= T <= 1,000)�� �־�����. �� �׽�Ʈ ���̽���  �ݺ� Ƚ�� R(1 <= R <= 8), ���ڿ� S�� �������� ���еǾ� �־�����. S�� ���̴� ��� 1�̸�, 20���ڸ� ���� �ʴ´�.
&Output
�� �׽�Ʈ ���̽��� ���� T�� ����Ѵ�.
&Example
-input
2
3 ABC
5 /HTP
-output
AAABBBCCC
/////HHHHHTTTTTPPPPP
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, input;
	string str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input >> str;
		for (int j = 0; j < str.size(); j++) {
			for (int k = 0; k < input; k++)
				cout << str[j];
		}
		cout << endl;
	}
	
	return 0;
}
*/