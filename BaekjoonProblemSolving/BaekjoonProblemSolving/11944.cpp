/*
https://www.acmicpc.net/problem/11944

&Title
11944�� - NN

&Question
������ �ſ� �����ϴ�. N�� N�� ����ϴ� ���α׷��� �ۼ��Ͽ���. 
�ٸ�, ���� ������� ��� ���� �� M�ڸ��� ����Ѵ�. 

&Input
ù ��° �ٿ��� N, M�� �־�����. (1 �� 
N, M �� 2016) 

&Output
N�� N�� ����Ѵ�. ���� ���� ������� ���� �� 
M�ڸ��� ����Ѵ�. 

&Example
-input
20 16

-output
2020202020202020


*/

/*
#include <iostream>
using namespace std;

int main() {
	int a, b, cnt = 0, tmp, num, arr[4], i;
	cin >> a >> b;
	tmp = a;
	i = 0;
	while (tmp % 10 != 0 || tmp / 10 != 0) {
		cnt++;
		arr[i++] = tmp % 10;
		tmp /= 10;
	}
	num = a*cnt > b ? b : a*cnt;
	for (int i = 0; i < num;i++) {
		cout << arr[cnt - i % cnt - 1];
	}
	cout << endl;
	return 0;
}
*/