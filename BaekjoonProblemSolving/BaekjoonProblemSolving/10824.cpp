/*
https://www.acmicpc.net/problem/10824

&Title
10824�� - �� ��

&Question
�� �ڿ��� A, B, C, D�� �־�����. �� 
��, A�� B�� ���� ���� C�� D�� ���� ���� 
���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.�� �� A�� B�� ��ġ�� ���� 
A�� �ڿ� B�� ���̴� ���� �ǹ��Ѵ�. ��, 20�� 30�� 
���̸� 2030�� �ȴ�. 

&Input
ù° �ٿ� �� �ڿ��� A, B, C, D�� 
�־�����. (1 �� A, B, C, D �� 1,000,000) 


&Output
A�� B�� ���� ���� C�� D�� ���� ���� 
���� ����Ѵ�. 

&Example
-input
10 20 30 40

-output
4060


*/

//sprintf�� ���� �迭�� ���� char���·� ����
//sscanf�� ���� ���˿� ���� ������ ���� ����
/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	long long a, b, c, d;
	char arr[101];
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

	long long A, B;
	sprintf(arr, "%lld%lld %lld%lld", a, b, c, d);
	sscanf(arr, "%lld %lld", &A, &B);

	printf("%lld\n", A + B);
	return 0;
}
*/