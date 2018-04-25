/*
https://www.acmicpc.net/problem/11444

&Title
11444�� - �Ǻ���ġ �� 6

&Question
�Ǻ���ġ ���� 0�� 1�� �����Ѵ�. 0��° �Ǻ���ġ ���� 
0�̰�, 1��° �Ǻ���ġ ���� 1�̴�. �� ���� 2��° ���ʹ� 
�ٷ� �� �� �Ǻ���ġ ���� ���� �ȴ�.�̸� ������ �Ẹ�� 
Fn = Fn-1 + Fn-2 (n>=2)�� �ȴ�.n=17�϶� ���� �Ǻ���ġ 
���� �Ẹ�� ������ ����.0, 1, 1, 2, 3, 5, 
8, 13, 21, 34, 55, 89, 144, 233, 377, 
610, 987, 1597n�� �־����� ��, n��° �Ǻ���ġ ���� ���ϴ� 
���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� n�� �־�����. n�� 1,000,000,000,000,000,000���� �۰ų� ���� 
�ڿ����̴�. 

&Output
ù° �ٿ� n��° �Ǻ���ġ ���� 1,000,000,007���� ���� �������� 
����Ѵ�. 

&Example
-input
1000

-output
517691607


*/

/*
//�޸�������̼��� Ȱ���� fibo
#include <iostream>
#include <map>
using namespace std;
map<long long, long long> d;
const long long mod = 1000000007LL;
long long fibo(long long n) {
	if (n <= 1) {
		return n;
	}
	else if (n == 2) {
		return 1;
	}
	else if (d.count(n) > 0) {
		return d[n];
	}
	else {
		if (n % 2 == 1) {
			long long m = (n + 1) / 2;
			long long t1 = fibo(m);
			long long t2 = fibo(m - 1);
			d[n] = t1 * t1 + t2 * t2;
			d[n] %= mod;
			return d[n];
		}
		else {
			long long m = n / 2;
			long long t1 = fibo(m - 1);
			long long t2 = fibo(m);
			d[n] = (2LL * t1 + t2)*t2;
			d[n] %= mod;
			return d[n];
		}
	}
}

int main() {
	long long n;
	cin >> n;
	cout << fibo(n) << endl;
	return 0;
}
*/

//����� �ŵ������� �̿��� Ǯ��
/*
#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<long long>> matrix;
const long long mod = 1000000007LL;

//���簢 ��� ����
matrix operator * (const matrix &a, const matrix &b) {
	int n = a.size();
	matrix c(n, vector<long long>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++)
				c[i][j] += a[i][k] * b[k][j];
				//(i\j)=(i\k)*(k\j)
			c[i][j] %= mod;
		}
		
	}
	return c;
}

int main() {
	long long n;
	cin >> n;
	if (n <= 1) {
		cout << n << endl;
		return 0;
	}

	matrix ans = { {1, 0}, {0,1} };
	matrix a = { {1,1}, {1,0} };

	//��������� �ŵ������� ���� �����ϸ� �� ������.
	while (n > 0) {
		if (n % 2 == 1) {
			ans = ans * a;
		}
		a = a * a;
		n /= 2;
	}

	cout << ans[0][1] << endl;
	return 0;
}
*/