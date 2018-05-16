/*
https://www.acmicpc.net/problem/9946

&Title
9946�� - �ܾ� ����

&Question
���ϴ� ��ġ������ �ܾ� ��������� ����Ѵ�.�ܾ� ��������̶�, �־��� ���ĺ����� 
��� �ܾ ����� �����̴�.õ�� ���ϴ� ���ĺ��� ���Ƿ� �����Ͽ�, ������ 
��Ī�� �ܾ ����� ���α׷��� ����� �ܾ �ϼ����״�.�׷��� �ϼ��� �ܾ 
����Կ��� ���������� ����, �������� �����̿� �΋H���� �ܾ������� ���� ����߸��� 
���Ҵ�.���ϴ� ������� ������ ȸ��������, ������ ���׹����� �Ǿ���, ���ĺ��� �����ϰų� 
�ٸ� ���ĺ��� ������ ���� �ִ�.���ϰ� ó���� �ϼ��� �ܾ�� ���߿� 
ȸ���� ���ĺ����� �־��� ��,���ϰ� ���ĺ��� ����� ȸ���ߴ��� ���ߴ��� �Ǵ��ϴ� 
���α׷��� ���������. 

&Input
�Է��� ���̽����� ���ٷ� �̷�����ִ�.ù° ���� ���ϰ� ó�� �ϼ��� 
�ܾ��̰�, ��° ���� ����߸� ���� ȸ���� ���ĺ����̴�. �� ���� 
���ĺ� �ҹ��ڷ� �̷���� �ְ�, ���̴� 1000�� ���� �ʴ´�.�������� END��� 
�ܾ ���� �־����µ�, �̴� ���̽��� ���� �ǹ��Ѵ�. 

&Output
���̽����� ��ȣ�� �ٿ��� ������°� ���� �������� ����Ѵ�.���ϰ� ���ĺ��� 
����� ȸ���ߴٸ� same ��, �߸� ȸ���ߴٸ� different �� ����Ѵ�. 


&Example
-input
testing
intestg
abc
aabbbcccc
abcabcbcc
aabbbcccc
abc
xyz
END
END

-output
Case 1: same
Case 2: different
Case 3: same
Case 4: different


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string a, b;

	int cnt = 0;
	while (true) {
		cin >> a >> b;
		if (a == "END" && b == "END")
			break;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		printf("Case %d: %s\n", ++cnt, a == b ? "same" : "different");
	}

	return 0;
}
*/