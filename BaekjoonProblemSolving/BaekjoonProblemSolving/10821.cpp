/*
https://www.acmicpc.net/problem/10821

&Title
10821�� - ������ ����

&Question
���ڿ� �޸��θ� �̷���� ���ڿ� S�� �־�����. �� ��, 
S�� ���ԵǾ��ִ� ������ ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.S�� ù ���ڿ� 
������ ���ڴ� �׻� �����̰�, �޸��� �����ؼ� �־����� �ʴ´�. ��, 
0���� �����ϴ� ������ �־����� �ʴ´�. 

&Input
ù° �ٿ� ���ڿ� S�� �־�����. S�� ���̴� �ִ� 
100�̴�. 

&Output
���ڿ� S�� ���ԵǾ� �ִ� ������ ������ ����Ѵ�. 

&Example
-input
10,20,30,50,100

-output
5


*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	string N;
	int cnt = 0;
	cin >> N;
	int i = 0;
	while (N.find(',', i) != -1) {
		cnt++;
		i = N.find(',', i) + 1;
	}
	cout << cnt + 1 << endl;
	return 0;
}
*/