/*
https://www.acmicpc.net/problem/3449

&Title
3449�� - �ع� �Ÿ�

&Question
�ع� �Ÿ��� �� ������ ���� �ٸ� �ڸ����� �����̴�. 
�� �������� �־����� ��, �ع� �Ÿ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 


&Input
�Է��� ���� ���� �׽�Ʈ ���̽��� �̷���� �ִ�. ù° 
�ٿ��� �׽�Ʈ ���̽��� ���� T�� �־�����. �� �׽�Ʈ ���̽��� 
�� �ٷ� �̷���� �ִ�. �� �ٿ��� �������� �ϳ��� �־�����. 
�� �������� ���̰� ���� ����, 100�ڸ��� ���� �ʴ´�. 

&Output
�� �׽�Ʈ ���̽��� ���ؼ�, �ع� �Ÿ��� ����� ��, 
"Hamming distance is X."��� ����Ѵ�. X�� �ع� �Ÿ��̴�. 

&Example
-input
4
0
1
000
000
1111111100000000
0000000011111111
101
000

-output
Hamming distance is 1.
Hamming distance is 0.
Hamming distance is 16.
Hamming distance is 2.


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string a, b;
		cin >> a >> b;
		int cnt = 0;
		for (int j = 0; j < a.size(); j++) {
			if (a[j] != b[j])
				cnt++;
		}
		cout << "Hamming distance is " << cnt <<"."<< endl;
	}
	return 0;
}
*/