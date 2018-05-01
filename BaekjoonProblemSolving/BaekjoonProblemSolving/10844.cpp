/*
https://www.acmicpc.net/problem/10844

&Title
10844�� - ���� ��� ��

&Question
45656�̶� ���� ����.�� ���� ������ ��� �ڸ����� ���̰� 
1�� ����. �̷� ���� ��� ����� �Ѵ�.�����̴� ���� ���̰� 
N�� ��� ���� �� �� �ִ��� �ñ�������.N�� �־��� ��, 
���̰� N�� ��� ���� �� �� �� �ִ��� ���ϴ� 
���α׷��� �ۼ��Ͻÿ�. (0���� �����ϴ� ���� ����.) 

&Input
ù° �ٿ� N�� �־�����. N�� 1���� ũ�ų� ����, 
100���� �۰ų� ���� �ڿ����̴�. 

&Output
ù° �ٿ� ������ 1,000,000,000���� ���� �������� ����Ѵ�. 

&Example
-input
1

-output
9

-input
2

-output
17


*/

/**
//�ڸ����� ���� �Ҷ����� ���� �ڸ��� +-1 ���� ���Ѵ�.
//���������� 1~9 ���� ���� ���Ѵ�. �ְ��ڸ� ���� 0�� ���ü� �����Ƿ�
//0�� ������ �ʴ´�.
#include <iostream>
using namespace std;
#define mod 1000000000
int main() {
	int N;
	int DP[101][10] = {};
	int sum = 0;
	cin >> N;
	for (int i = 0; i < 10; i++) {
		DP[1][i] = 1;
	}
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0)
				DP[i][0] = DP[i - 1][1] % mod;
			else if (j == 9)
				DP[i][9] = DP[i - 1][8] % mod;
			else
				DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % mod;
		}
	}
	for (int i = 1; i < 10; i++)
		sum = (sum + DP[N][i]) % mod;
	cout << sum << endl;
}
*/

//http://oeis.org/A001405 ���� ��Ģ���� �ذ��Ϸ� �ߴµ�
//���丮�� ���� ������ ���ڰ� �ʹ� Ŀ��
/*
#include <iostream>
#include <cmath>
using namespace std;

long long factorial(int n) {
	long long result = 1;
	for (long int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}
long long katarlan(int n) {
	return factorial(2 * n) / (factorial(n)*factorial(n + 1));
}

int main() {
	int N;
	cin >> N;
	
	
	cout << katarlan(N) << endl;
	return 0;
}
*/