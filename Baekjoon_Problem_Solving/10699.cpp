/*
https://www.acmicpc.net/problem/10699

&Title
���� ��¥
&Question
������ ���� ��¥�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
�Է��� ����.
&Output
������ ���� ��¥�� "YYYY-MM-DD" �������� ����Ѵ�.
&Example
-input

-output
2015-01-24
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <ctime>
using namespace std;

int main() {
	time_t t = time(NULL);
	struct tm * now = localtime(&t);
	printf("%04d-%02d-%02d\n", now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);
	return 0;
}
*/