/*
https://www.acmicpc.net/problem/1427

&Title
1427�� - ��Ʈ�λ��̵�

&Question
�迭�� �����ϴ� ���� ����. ���� �־�����, �� ���� 
�� �ڸ����� ������������ �����غ���. 

&Input
ù° �ٿ� �����ϰ����ϴ� �� N�� �־�����. N�� 1,000,000,000���� 
�۰ų� ���� �ڿ����̴�. 

&Output
ù° �ٿ� �ڸ����� ������������ ������ ���� ����Ѵ�. 

&Example
-input
2143

-output
4321


*/

/*
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	string k;
	priority_queue <int> a;

	cin >> k;
	for (int i = 0; i < k.size(); i++)
		a.push(k[i] - '0');
	for (int i = 0; i < k.size(); i++) {
		cout << a.top();
		a.pop();
	}
	cout << endl;
	return 0;
}
*/