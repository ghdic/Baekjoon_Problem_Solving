/*
https://www.acmicpc.net/problem/2711

&Title
��Ÿ�� ��â��
&Question
��â���� �ǳ� ��Ÿ�� ����. â���̰� ��Ÿ�� �� ����� ��Ÿ�� �� ��ġ�� �־����� ��, ��Ÿ�� ���� ���ڿ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

â���̴� ��Ÿ�� �ݵ�� 1���� ����.
&Input
ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1<=T<=1,000)�� �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �����Ǿ� �ִ�. ù ���ڴ� â���̰� ��Ÿ�� �� ��ġ�̰�, �ι�° ���ڿ��� â���̰� ģ ���ڿ��̴�. ���ڿ��� ���� ù ���ڴ� 1��° �����̰�, ���ڿ��� ���̴� 80�� ���� �ʰ�, �빮�ڷθ� �̷���� �ִ�. ��Ÿ�� �� ��ġ�� ���ڿ� ���̺��� �۰ų� ����
&Output
�� �׽�Ʈ ���̽��� ���� ��Ÿ�� ���� ���ڿ��� ����Ѵ�.
&Example
-input
4
4 MISSPELL
1 PROGRAMMING
7 CONTEST
3 BALLOON
-output
MISPELL
ROGRAMMING
CONTES
BALOON
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, miss;
	string k;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> miss >> k;
		k.erase(miss - 1, 1);
		cout << k << endl;
	}

	return 0;
}
*/