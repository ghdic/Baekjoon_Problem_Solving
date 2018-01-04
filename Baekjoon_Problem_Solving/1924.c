/*
https://www.acmicpc.net/problem/1924

&Title
2007��

&Question
������ 2007�� 1�� 1�� �������̴�. �׷��ٸ� 2007�� x�� y���� ���� �����ϱ�? �̸� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.

&Input
ù° �ٿ� �� ĭ�� ���̿� �ΰ� x(1��x��12)�� y(1��y��31)�� �־�����. ����� 2007�⿡�� 1, 3, 5, 7, 8, 10, 12���� 31�ϱ���, 4, 6, 9, 11���� 30�ϱ���, 2���� 28�ϱ��� �ִ�.

&Output
ù° �ٿ� x�� y���� ���� ���������� ���� SUN, MON, TUE, WED, THU, FRI, SAT�� �ϳ��� ����Ѵ�.

&Example
-input
1 1
-output
MON

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int month, day, sum=0;

	scanf("%d %d", &month, &day);

	for (int i = 1; i < month; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			sum += 31;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			sum += 30;
		else if (i == 2)
			sum += 28;
	}
	
	sum += day - 1;

	if (sum % 7 == 0)
		printf("MON\n");
	else if (sum % 7 == 1)
		printf("TUE\n");
	else if (sum % 7 == 2)
		printf("WED\n");
	else if (sum % 7 == 3)
		printf("THU\n");
	else if (sum % 7 == 4)
		printf("FRI\n");
	else if (sum % 7 == 5)
		printf("SAT\n");
	else if (sum % 7 == 6)
		printf("SUN\n");

	return 0;
}