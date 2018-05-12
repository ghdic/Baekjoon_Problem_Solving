/*
https://www.acmicpc.net/problem/5524

&Title
5524번 - 입실 관리

&Question
JOI회사에서는 방에 들어가기 위해 입실 기록을 입력할 때 
알파벳으로 이름을 입력한다. 그런데, 컴퓨터에 오류가 나서 대문자 소문자가 
섞여버려 입실 기록이 읽기 힘들어졌다.JOI회사의 입실 기록을 읽기 쉽게 
하기 위해서 기록된 이름을 모두 소문자로 변환하는 프로그램을 작성하라. 
단, 입실 기록에는 같은 이름의 사람이 생기기도 한다. 

&Input
첫째 줄에는 정수 N(1 ≤ N ≤ 100)이 
주어진다. 둘째 줄부터는 1글자 이상 20문자 이하의 영어 대문자, 
소문자로만 이루어지는 문자열 Si가 주어진다. 

&Output
i번째 줄에, i번째 입실자의 이름을 소문자로 출력한다. 

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