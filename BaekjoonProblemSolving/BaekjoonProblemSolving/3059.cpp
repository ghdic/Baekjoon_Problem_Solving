/*
https://www.acmicpc.net/problem/3059

&Title
3059�� - �������� �ʴ� ������ ��

&Question
���ĺ� �빮�ڷ� �����Ǿ��ִ� ���ڿ� S�� �־����� ��, S�� 
�������� �ʴ� ���ĺ� �빮���� �ƽ�Ű �ڵ� ���� ���� ���ϴ� 
���α׷��� �ۼ��Ͻÿ�. ���ڿ� S�� ��ABCDEFGHIJKLMNOPQRSTUVW�� �� ��, S�� �������� 
�ʴ� ���ĺ� �빮�ڴ� X, Y, Z�̴�. X�� �ƽ�Ű �ڵ� 
���� 88, Y�� 89, Z�� 90�̹Ƿ� �� �ƽ�Ű �ڵ� 
���� ���� 267�̴�. ���ĺ� �빮���� �ƽ�Ű �ڵ� ���� ������ 
����.ABCDEFGHIJKLMNOPQRSTUVWXYZ 65 66 67 68 69 70 71 72 
73 74 75 76 77 78 79 80 81 
82 83 84 85 86 87 88 89 90 


&Input
�Է��� T���� �׽�Ʈ �����ͷ� �����ȴ�. �Է��� ù ��° 
�ٿ��� �Է� �������� ���� ��Ÿ���� ���� T�� �־�����. �� 
�׽�Ʈ �����ʹ� �� �ٷ� �����Ǿ� �ְ�, ���ڿ� S�� �־�����. 
S�� ���ĺ� �빮�ڷθ� �����Ǿ� �ְ�, �ִ� 1000�����̴�. 

&Output
�� �׽�Ʈ �����Ϳ� ����, �Է����� �־��� ���ڿ� S�� 
�������� �ʴ� ���ĺ� �빮���� �ƽ�Ű �ڵ� ���� ���� �� 
�ٿ� �ϳ��� ����Ѵ�. 

&Example
-input
2
ABCDEFGHIJKLMNOPQRSTUVW
A

-output
267
1950


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string s;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int value = 0;
		bool check[26] = {};
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			check[s[i] - 65] = true;
		}
		for (int i = 0; i < 26; i++)
			if (check[i] == false)
				value += i + 65;
		printf("%d\n", value);
	}
	return 0;
}
*/