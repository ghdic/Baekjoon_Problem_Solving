/*
https://www.acmicpc.net/problem/1181

&Title
1181�� - �ܾ� ����

&Question
���ĺ� �ҹ��ڷ� �̷���� N���� �ܾ ������ �Ʒ��� ���� 
���ǿ� ���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.���̰� ª�� �ͺ��ͱ��̰� ������ ���� 
������ 

&Input
ù° �ٿ� �ܾ��� ���� N�� �־�����. (1��N��20,000) ��° 
�ٺ��� N���� �ٿ� ���� ���ĺ� �ҹ��ڷ� �̷���� �ܾ �� 
�ٿ� �ϳ��� �־�����. �־����� ���ڿ��� ���̴� 50�� ���� �ʴ´�. 


&Output
���ǿ� ���� �����Ͽ� �ܾ���� ����Ѵ�. ��, ���� �ܾ 
���� �� �Էµ� ��쿡�� �� ������ ����Ѵ�. 

&Example
-input
13
but
i
wont
hesitate
no
more
no
more
it
cannot
wait
im
yours

-output
i
im
it
no
but
more
wait
wont
yours
cannot
hesitate


*/

/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s[20000];
int main() {
	int N;
	cin >> N;
	int maxSize = 0;
	for (int i = 0; i < N; i++) {
		cin >> s[i];
		if (maxSize < s[i].size()) {
			maxSize = s[i].size();
		}
	}
	int index = 0;
	for (int i = 1; i <= maxSize; i++) {
		int cnt = index;
		for (int j = 0; j < N; j++) {
			if (s[j].size() == i) {
				swap(s[index++], s[j]);
			}
		}
		sort(s + cnt, s + index);
	}
	cout << s[0] << endl;
	for (int i = 1; i < N; i++) {
		if(s[i]!=s[i-1])
			cout << s[i] << endl;
	}
	return 0;
}
*/