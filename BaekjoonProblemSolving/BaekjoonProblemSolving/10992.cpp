/*
https://www.acmicpc.net/problem/10992

&Title
10992�� - �� ��� - 17

&Question
������ ���� ����� ��Ģ�� ������ �ڿ� ���� ��� 
������. 

&Input
ù° �ٿ� N (1<=N<=100)�� �־�����. 

&Output
ù° �ٺ��� N��° �� ���� ���ʴ�� ���� ����Ѵ�. 


&Example
-input
1

-output
*

-input
2

-output
 *
***
-input
3

-output
  *
 * *
*****
-input
4

-output
   *
  * *
 *   *
*******


*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N*2-1; j++) {
			if (i == N - 1)cout << "*";
			else {
				if (j == N-i-1 || j == N +i-1)cout << "*";
				else if (N - i - 1 > j||(N-i-1<j&&j<N+i-1))cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
*/