/*
https://www.acmicpc.net/problem/10768

&Title
10768�� - Ư���� ��

&Question
2�� 18���� ���� CCC�� �־ Ư���� ���̴�.����ڷκ��� ������ 
���� ���� �Է¹޾� ��¥�� 2�� 18������ ������ �������� ����ϴ� 
���α׷��̴�.���� ��¥�� 2�� 18�� ���̸�, "Before"�� ����Ѵ�. ���� ��¥�� 
2�� 18�� �ĸ�, "After"�� ����Ѵ�. ���� 2�� 18���̶�� "Special" 
�� ����Ѵ�. 

&Input
�Է��� �� ���� ������ �� �ٿ� ���� �Էµȴ�. 
�� �������� 2015���� ��¥�� ���Եȴ�.ù��°���� 1���� 12������ ���� �Է��Ѵ�.�ι�°���� 
1���� 31������ �� �޿� ����ִ� ��¥�� �Է��Ѵ� . 

&Output
������ �ٿ� "Before", "After"�� "Special"�� ����Ѵ�. 

&Example
-input
1
7

-output
Before

-input
8
31

-output
After

-input
2
18

-output
Special


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
	int m, d;
	scanf("%d %d", &m, &d);
	if (m == 2 && d == 18)
		printf("Special\n");
	else if ((m == 2 && d < 18) || m==1)
		printf("Before\n");
	else
		printf("After\n");

	return 0;
}
*/