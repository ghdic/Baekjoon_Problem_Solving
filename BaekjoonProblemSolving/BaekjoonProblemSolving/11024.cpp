/*
https://www.acmicpc.net/problem/11024

&Title
11024�� - ���ϱ� 4

&Question
�� N���� �־����� ��, N���� ���� ���ϴ� ���α׷���
�ۼ��Ͻÿ�.

&Input
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. ��
�׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, N(1 �� N
�� 100)���� ���� �������� ���еǾ �־�����. �Է����� �־����� ����
10,000���� �۰ų� ���� �ڿ����̴�. ��, 0���� �����ϴ� ���� �־�����
�ʴ´�.

&Output
�� �׽�Ʈ ���̽����� �Է¹��� �� N���� ���� ��
�ٿ� �ϳ��� �Է¹��� ������� ����Ѵ�.

&Example
-input
2
1 2 3 4 5
5 4 5 4 2 3 1 2

-output
15
26

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--) {
		int cnt = 0, sum = 0;
		char arr[1000005];
		gets_s(arr);
		for (int i = 0; arr[i] != '\0'; i++) {
			if (arr[i] == ' ') {
				cnt += sum;
				sum = 0;
			}
			else {
				sum *= 10;
				sum += arr[i] - '0';
			}
		}
		cnt += sum;
		sum = 0;
		cout << cnt << endl;
	}
	return 0;
}
*/