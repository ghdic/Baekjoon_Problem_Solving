/*
https://www.acmicpc.net/problem/5532

&Title
5532�� - ���� ����

&Question
����̴� �ʵ��б��� �ٴ� ��, ���� ������ ���麸�� ���� 
�̸� �ϰ� ���� �Ⱓ�� ��Ҵ�. ���� ������ ���а� ���� 
���� Ǯ���̴�.������ �� L���̴�. ������ �� B������, ����� �� 
A�������� Ǯ��� �Ѵ�. ����̴� �Ϸ翡 ��� �ִ� C������, ������ 
�ִ� D������ Ǯ �� �ִ�.����̰� �ܿ� ���е��� ������ ���� 
�ʰ� �� �� �ִ� �ִ� ���� ���� ���ϴ� ���α׷��� 
�ۼ��Ͻÿ�. 

&Input
�� �ٿ� �ϳ��� �� �ټ� �ٿ� ���� L, 
A, B, C, D�� �־�����. (2 �� L �� 
40, 1 �� A, B �� 1000, 1 �� 
C, D �� 100)�׻� ���� ������ ���� �Ⱓ���� �� 
�� �� �ִ� ��츸 �Է����� �־�����. 

&Output
ù° �ٿ� ����̰� �� �� �ִ� ���� �ִ밪�� 
����Ѵ�. 

&Example
-input
20
25
30
6
8

-output
15


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
	int L, A, B, C, D;
	scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
	int aMax = 0, bMax = 0;
	aMax = A / C + (A % C > 0 ? 1 : 0);
	bMax = B / D + (B % D > 0 ? 1 : 0);

	int max = aMax > bMax ? aMax : bMax;
	printf("%d\n", L - max);
	return 0;
}
*/