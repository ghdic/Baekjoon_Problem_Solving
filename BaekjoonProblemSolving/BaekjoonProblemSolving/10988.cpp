/*
https://www.acmicpc.net/problem/10988

&Title
�Ӹ�������� Ȯ���ϱ�
&Question
���ĺ� �ҹ��ڷθ� �̷���� �ܾ �־�����. �� ��, �� �ܾ �Ӹ�������� �ƴ��� Ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Ӹ�����̶� ������ ���� ���� �Ųٷ� ���� �� �Ȱ��� �ܾ ���Ѵ�.

level, noon�� �Ӹ�����̰�, baekjoon, online, judge�� �Ӹ������ �ƴϴ�.
&Input
ù° �ٿ� �ܾ �־�����. �ܾ��� ���̴� 1���� ũ�ų� ����, 100���� �۰ų� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.
&Output
ù° �ٿ� �Ӹ�����̸� 1, �ƴϸ� 0�� ����Ѵ�.
&Example
-input
level
-output
1
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	string N;
	bool falendrom;
	cin >> N;
	for (int i = 0; i < N.size() / 2; i++) {
		if (N[i] == N[N.size() - i - 1]) { 
			falendrom = true;
			continue; 
		}
		else {
			falendrom = false;
			break;
		}
	}
	cout << falendrom << endl;
	return 0;
}
*/