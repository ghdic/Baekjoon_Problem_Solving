/*
https://www.acmicpc.net/problem/2562

&Title
�ִ밪
&Question
9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ밪�� ã�� �� �ִ밪�� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���, ���� �ٸ� 9���� �ڿ���

3, 29, 38, 12, 57, 74, 40, 85, 61

�� �־�����, �̵� �� �ִ밪�� 85�̰�, �� ���� 8��° ���̴�.
&Input
ù ° �ٺ��� ��ȩ ��° �ٱ��� �� �ٿ� �ϳ��� �ڿ����� �־�����. �־����� �ڿ����� 100 ���� �۴�.
&Output
ù° �ٿ� �ִ밪�� ����ϰ�, ��° �ٿ� �ִ밪�� �� ��° �������� ����Ѵ�.
&Example
-input
3
29
38
12
57
74
40
85
61
-output
85
8
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, max = 0, index = 0;
	for (int i = 0; i < 9; i++) {
		cin >> N;
		if (N > max) {
			max = N;
			index = i + 1;
		}
	}
	cout << max << endl;
	cout << index << endl;
	return 0;
}
*/