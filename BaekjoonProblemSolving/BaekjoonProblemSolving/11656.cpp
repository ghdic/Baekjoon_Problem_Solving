/*
https://www.acmicpc.net/problem/11656

&Title
11656�� - ���̻� �迭

&Question
���̻� �迭�� ���ڿ� S�� ��� ���̻縦 ���������� ������ 
���� �迭�̴�.baekjoon�� ���̻�� baekjoon, aekjoon, ekjoon, kjoon, joon, oon, 
on, n ���� �� 8������ �ְ�, �̸� ���������� �����ϸ�, 
aekjoon, baekjoon, ekjoon, joon, kjoon, n, on, oon�� �ȴ�.���ڿ� 
S�� �־����� ��, ��� ���̻縦 ���������� ������ ���� ����ϴ� 
���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� ���ڿ� S�� �־�����. S�� ���ĺ� �ҹ��ڷθ� 
�̷���� �ְ�, ���̴� 1,000���� �۰ų� ����. 

&Output
ù° �ٺ��� S�� ���̻縦 ���������� �� �ٿ� �ϳ��� 
����Ѵ�. 

&Example
-input
baekjoon

-output
aekjoon
baekjoon
ekjoon
joon
kjoon
n
on
oon


*/

/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	string k[1000];
	int z = s.size();
	for (int i = 0; i <z; i++) {
		k[i] = s;
		s.erase(0, 1);
	}
	sort(k, k + z);
	for (int i = 0; i < z; i++) {
		cout << k[i] << endl;
	}

	return 0;
}
*/