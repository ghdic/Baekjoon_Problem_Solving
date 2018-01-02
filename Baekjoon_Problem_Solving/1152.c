/*
https://www.acmicpc.net/problem/1152

&Question
���� ��ҹ��ڿ� ���⸸���� �̷���� ������ �־�����. �� ���忡�� �� ���� �ܾ ������? �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

&Input
ù �ٿ� ���� ��ҹ��ڿ� ����� �̷���� ������ �־�����. �� ������ ���̴� 1,000,000�� ���� �ʴ´�. �ܾ�� ���� �� ���� ���еȴ�.

&Output
ù° �ٿ� �ܾ��� ������ ����Ѵ�.

&Example
-input
The Curious Case of Benjamin Button
-output
6

*/


#include <stdio.h>
#include <string.h>

int main() {
	char str[1000001] = " ";
	int i, cnt = 0, length = 0;

	gets(str);
	length = strlen(str);
	for (i = 0; i < length; i++) {
		if (str[i] == ' ') {
			cnt++;
			while (str[i + 1] == ' ')
				i++;
		}
	}

	if (str[0] == ' ')
		cnt--;

	if (str[length - 1] == ' ')
		cnt--;

	printf("%d", cnt + 1);
	return 0;
}
