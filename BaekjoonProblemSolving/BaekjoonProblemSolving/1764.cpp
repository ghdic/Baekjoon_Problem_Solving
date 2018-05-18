/*
https://www.acmicpc.net/problem/1764

&Title
1764�� - �躸��

&Question
�������� �赵 ���� ����� ��ܰ�, ���� ���� ����� 
����� �־��� ��, �赵 ���� ���� ����� ����� ���ϴ� 
���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� �赵 ���� ����� �� N, ���� 
���� ����� �� M�� �־�����. �̾ ��° �ٺ��� N���� 
�ٿ� ���� �赵 ���� ����� �̸���, N+2° �ٺ��� ���� 
���� ����� �̸��� ������� �־�����. �̸��� ���� ���� ���� 
�ҹ��ڷθ� �̷������, �� ���̴� 20 �����̴�. N, M�� 500,000 
������ �ڿ����̴�. 

&Output
�躸���� ���� �� ����� ���������� ����Ѵ�. 

&Example
-input
3 4
ohhenrie
charlie
baesangwook
obama
baesangwook
ohhenrie
clinton

-output
2
baesangwook
ohhenrie


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v;
vector<string> result;
int main() {
	int N, M;
	cin >> N >> M;
	v.resize(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		if (binary_search(v.begin(), v.end(), s)) {
			result.push_back(s);
		}
	}
	sort(result.begin(), result.end());
	
	cout << result.size() << endl;
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << endl;
	return 0;
}
*/