/*
https://www.acmicpc.net/problem/3062

&Title
3062�� - �� ������

&Question
�� 124�� �������� 421�� �ǰ� �� �� ���� 
���ϸ� 545�� �ȴ�. 124�� ���� ���� ���� ������ ���� 
���� ���� �¿� ��Ī�� �Ǵ��� �׽�Ʈ �ϴ� ���α׷��� �ۼ��Ͻÿ�. 


&Input
�Է��� ù �ٿ��� �׽�Ʈ ���̽��� ���� T�� �־�����. 
�� �׽�Ʈ ���̽��� �� �ٿ� �ϳ��� ���� N(10 �� 
N �� 100000)�� �־�����. 

&Output
�� �׽�Ʈ ���̽��� ���ؼ� ���� ���� ������ ���� 
���� ���� �¿� ��Ī�� �Ǹ� YES�� �ƴϸ� NO�� �� 
�ٿ� �ϳ��� ����Ѵ�. 

&Example
-input
4
13
58
120
5056

-output
YES
NO
YES
NO


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int a, reverse = 0, b;
		scanf("%d", &a);
		b = a;
		while (b) {
			reverse = reverse * 10 + b % 10;
			b /= 10;
		}
		a += reverse;
		string s = to_string(a);
		bool check = true;
		for (int j = 0; j < s.size() / 2; j++) {
			if (s[j] != s[s.size() - j - 1]) {
				check = false;
				break;
			}
		}
		printf("%s\n", check ? "YES" : "NO");
	}
	return 0;
}
*/