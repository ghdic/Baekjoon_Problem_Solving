/*
https://www.acmicpc.net/problem/1977

&Title
����������
&Question
M�� N�� �־��� �� M�̻� N������ �ڿ��� �� ������������ ���� ��� ��� �� ���� ���ϰ� �� �� �ּҰ��� ã�� ���α׷��� �ۼ��Ͻÿ�. ���� ��� M=60, N=100�� ��� 60�̻� 100������ �ڿ��� �� ������������ 64,  81,  100 �̷��� �� 3���� �����Ƿ� �� ���� 245�� �ǰ� �� �� �ּҰ��� 64�� �ȴ�.
&Input
ù° �ٿ� M��, ��° �ٿ� N�� �־�����. M�� N�� 10000������ �ڿ����̸� M�� N���� ���ų� �۴�.
&Output
M�̻� N������ �ڿ��� �� ������������ ���� ��� ã�� ù° �ٿ� �� ����, ��° �ٿ� �� �� �ּҰ��� ����Ѵ�. ��, M�̻� N������ �ڿ��� �� ������������ ���� ���� ù° �ٿ� -1�� ����Ѵ�.
&Example
-input
60
100
-output
245
64
*/

/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int M, N, sum = 0, first = -1;
	bool b = false;
	cin >> M >> N;
	for (int i = 1; i < 317; i++) {
		if (pow(i, 2) > N)break;
		if (b == true)sum += pow(i, 2);
		if (pow(i, 2) >= M && b == false) {
			b = true;
			first = pow(i, 2);
			sum += pow(i, 2);
		}
		
	}
	if (first == -1)cout << -1 << endl;
	else cout << sum << "\n" << first << endl;
	return 0;
}
*/