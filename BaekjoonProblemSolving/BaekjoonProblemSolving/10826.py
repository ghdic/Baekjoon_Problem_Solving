/*
https://www.acmicpc.net/problem/10826

&Title
10826�� - �Ǻ���ġ �� 4

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
ù° �ٿ� n�� �־�����. n�� 10,000���� �۰ų� ���� 
�ڿ��� �Ǵ� 0�̴�. 

&Output
ù° �ٿ� n��° �Ǻ���ġ ���� ����Ѵ�. 

&Example
-input
10

-output
55


*/

N = int(input())
dp = [0 for i in range(max(N + 1, 3))];
dp[0] = 0
dp[1] = 1
for i in range(2, N + 1) :
	dp[i] = dp[i - 1] + dp[i - 2]
	print(dp[N])
#���̼� �ڷ��� �ʻ���...

//c++ code
/*
//���� ������
//�ð� �ʰ�.. �Ф�
#include <iostream>
#include <string>
using namespace std;

string sumStr(string a, string b) {
	string tmp;
	char add;
	bool raised = false;
	int aSize = a.size(), bSize = b.size();
	int size = aSize > bSize ? aSize : bSize;
	for (int i = 1; i <= size; i++) {
		
		if (i > aSize)
			add = b[bSize - i];
		else if (i > bSize)
			add = a[aSize - i];
		else 
			add = a[aSize - i] + b[bSize - i] - '0';

		if (raised == true)add += 1;
		if (add - '0' >= 10) {
			raised = true;
			add = add - 10;
			tmp = add + tmp;
		}
		else {
			raised = false;
			tmp = add + tmp;
		}
			
	}
	if (raised == true)tmp = '1' + tmp;
	return tmp;
}

int compStr(string a, string b) {
	if (a.size() > b.size())return -1;
	else if (a.size() < b.size())return 1;
	else {
		for (int i = a.size()-1; i >=0; i--) {
			if (a[i] > b[i])return -1;
			else if (a[i] < b[i])return 1;
		}
		return 0;
	}
}

long long int fibo_int(int n) {
	long long int n0 = 0, n1 = 1, n2 = 1;
	if (n == 0)return 0;
	if (n == 1)return 1;
	for (int i = 2; i <= n; i++) {
		n2 = n0 + n1;
		n0 = n1;
		n1 = n2;
	}
	return n2;
}

string fibo(string n) {
	if (n.size() < 3) {
		int a = stoi(n);
		if (a <= 88)return to_string(fibo_int(a));
	}
	string n0 = to_string(fibo_int(87)), n1 = to_string(fibo_int(88)), n2;
	for (string i = "88"; compStr(i, n) != 0;i=sumStr(i, "1")) {
		n2 = sumStr(n0, n1);
		n0 = n1;
		n1 = n2;
	}
	return n2;
}
int main() {
	string N;
	cin >> N;
	cout << fibo(N) << endl;

	return 0;
}
*/