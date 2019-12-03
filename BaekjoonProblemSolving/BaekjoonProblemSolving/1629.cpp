/*
https://www.acmicpc.net/problem/1629

&Title
1629�� - ����

&Question
�ڿ��� A�� B�� ���� ���� �˰� �ʹ�. �� 
���Ϸ��� ���� �ſ� Ŀ�� �� �����Ƿ� �̸� C�� ���� 
�������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� A, B, C�� �� ĭ�� ���̿� 
�ΰ� ������� �־�����. A, B, C�� ��� 2,147,483,647 ������ 
�ڿ����̴�. 

&Output
ù° �ٿ� A�� B�� ���� ���� C�� ���� 
�������� ����Ѵ�. 

&Example
-input
10 11 12

-output
4

*/

/*
#include <iostream>
using namespace std;

long long a, b, c;

long long divide_conquer(int num) {
	if (num == 0)return 1;
	long long k = divide_conquer(num / 2);
	k = (k * k) % c;
	if (num & 1) {
		return (a * k) % c;
	}
	else {
		return k;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> a >> b >> c;
	cout << divide_conquer(b) << endl;
	return 0;
}
*/