/*
https://www.acmicpc.net/problem/10808

&Title
10808�� - ���ĺ� ����

&Question
���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. �� ��, 
�� ���ĺ��� �ܾ �� ���� ���ԵǾ� �ִ��� ���ϴ� ���α׷��� 
�ۼ��Ͻÿ�. 

&Input
ù° �ٿ� �ܾ� S�� �־�����. �ܾ��� ���̴� 100�� 
���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�. 

&Output
�ܾ ���ԵǾ� �ִ� a�� ����, b�� ����, ��, 
z�� ������ �������� �����ؼ� ����Ѵ�. 

&Example
-input
baekjoon

-output
1 1 0 0 1 0 0 0 0 1 1 0 0 1 2 0 0 0 0 0 0 0 0 0 0 0


*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	string N;
	int arr[26] = { 0 };
	cin >> N;
	for (int i = 0; i < N.size(); i++) {
		arr[N[i] - 97]++;
	}
	for (int i = 0; i < 26; i++)
		if (i == 25)cout << arr[i];
		else cout << arr[i] << " ";
		cout << endl;
	return 0;
}
*/