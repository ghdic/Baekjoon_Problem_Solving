/*
https://www.acmicpc.net/problem/5524

&Title
5524�� - �Խ� ����

&Question
JOIȸ�翡���� �濡 ���� ���� �Խ� ����� �Է��� �� 
���ĺ����� �̸��� �Է��Ѵ�. �׷���, ��ǻ�Ϳ� ������ ���� �빮�� �ҹ��ڰ� 
�������� �Խ� ����� �б� ���������.JOIȸ���� �Խ� ����� �б� ���� 
�ϱ� ���ؼ� ��ϵ� �̸��� ��� �ҹ��ڷ� ��ȯ�ϴ� ���α׷��� �ۼ��϶�. 
��, �Խ� ��Ͽ��� ���� �̸��� ����� ����⵵ �Ѵ�. 

&Input
ù° �ٿ��� ���� N(1 �� N �� 100)�� 
�־�����. ��° �ٺ��ʹ� 1���� �̻� 20���� ������ ���� �빮��, 
�ҹ��ڷθ� �̷������ ���ڿ� Si�� �־�����. 

&Output
i��° �ٿ�, i��° �Խ����� �̸��� �ҹ��ڷ� ����Ѵ�. 

&Example
-input
3
WatanabE
ITO
YamaMoto

-output
watanabe
ito
yamamoto

-input
4
SUZUKI
tanaka
tAkAhAshi
SuZuKi

-output
suzuki
tanaka
takahashi
suzuki


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cctype>
using namespace std;

int main() {
	int N;
	char s[20];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", s);
		int j = 0;
		while (s[j] != '\0') {
			if (isupper(s[j]))
				s[j] = tolower(s[j]);
			j++;
		}
		printf("%s\n", s);
	}
	return 0;
}
*/