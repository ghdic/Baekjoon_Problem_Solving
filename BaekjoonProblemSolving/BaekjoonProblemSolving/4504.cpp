/*
https://www.acmicpc.net/problem/4504

&Title
4504�� - ��� ã��

&Question
���� n(0 < n < 1000)�� ���� ����� 
�־����� ��, ���� ��Ͽ� ����ִ� ���ڰ� n�� ������� �ƴ����� 
���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� n�� �־�����. ���� �ٺ��� �� �ٿ� 
�� ���� ���� ��Ͽ� ����ִ� ���ڰ� �־�����. �� ���ڴ� 
0���� ũ��, 10,000���� �۴�. ���� ����� 0���� ������. 

&Output
���� ��Ͽ� �ִ� ���ڰ� n�� ����� ��� ���� 
�ƴ����� ���� �� ���� ���ó�� ����Ѵ�. 

&Example
-input
3
1
7
99
321
777
0

-output
1 is NOT a multiple of 3.
7 is NOT a multiple of 3.
99 is a multiple of 3.
321 is a multiple of 3.
777 is a multiple of 3.


*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, a = -1;
	cin >> N;
	while (true) {
		cin >> a;
		if (a == 0)break;
		if (a%N == 0)cout << a << " is a multiple of " << N << "." << endl;
		else cout << a << " is NOT a multiple of " << N << "." << endl;
	}
	return 0;
}
*/