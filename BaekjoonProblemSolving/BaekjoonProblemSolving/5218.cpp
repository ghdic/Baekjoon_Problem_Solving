/*
https://www.acmicpc.net/problem/5218

&Title
5218�� - ���ĺ� �Ÿ�

&Question
���̰� ���� �� �ܾ �־����� ��, �� �ܾ 
���Ե� ��� ������ ���ĺ� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.�� ���� 
x�� y ������ ���ĺ� �Ÿ��� ���Ϸ���, ���� �� ���ĺ��� 
���ڸ� �Ҵ��ؾ� �Ѵ�. 'A'=1, 'B' = 2, ..., 'Z' 
= 26. �� ���� y �� x�� ��쿡�� y-x, 
y < x�� ��쿡�� (y+26) - x�� ���ĺ� �Ÿ��� 
�ȴ�.���� ���, 'B'�� 'D' ������ �Ÿ��� 4 - 2 
= 2�̰�, 'D'�� 'B' ������ �Ÿ��� (2+26) - 4 
= 24�̴�. 

&Input
ù° �ٿ� �׽�Ʈ ���̽��� �� (< 100)�� �־�����. 
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, �� �ܾ 
�������� ���еǾ��� �ִ�. �ܾ��� ���̴� 4���� ũ�ų� ����, 20���� 
�۰ų� ������, ���ĺ� �빮�ڷθ� �̷���� �ִ�. 

&Output
�� �׽�Ʈ ���̽� ���� �� ������ ���ĺ� �Ÿ��� 
�������� ������ ����Ѵ�. 

&Example
-input
5
AAAA ABCD
ABCD AAAA
DARK LOKI
STRONG THANOS
DEADLY ULTIMO

-output
Distances: 0 1 2 3
Distances: 0 25 24 23
Distances: 8 14 19 24
Distances: 1 14 9 25 1 12
Distances: 17 7 19 5 1 16


*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, num;
	string a, b;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		
		cout << "Distances:";
		for (int i = 0; i < a.size(); i++) {
			a[i] -= 65, b[i] -= 65;
			if (a[i] > b[i])num = 26 + b[i] - a[i];
			else num = b[i] - a[i];
			cout << " " << num;
		}
		cout << endl;
	}
	return 0;
}
*/