/*
https://www.acmicpc.net/problem/1371

&Title
1371�� - ���� ���� ����

&Question
������� � ���ڰ� �ٸ� ���ں��� ���� ���δ�. ���� 
���, �� �ۿ��� �� 12.31% ���ڴ� e�̴�.� ���� �־����� 
��, ���� ���� ���� ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٺ��� ���� ������ �־�����. ���� �ִ� 5000���ڷ� 
�����Ǿ� �ְ�, ����, ���ĺ� �ҹ���, ���ͷθ� �̷���� �ִ�. �׸��� 
��� �ϳ��� ���ĺ��� �ִ�. 

&Output
ù° �ٿ� ���� ���� ���� ���ڸ� ����Ѵ�. ���� 
���� ��쿡�� ���ĺ� ������ �ռ��� �ͺ��� ��� ������� ����Ѵ�. 


&Example
-input
english is a west germanic
language originating in england
and is the first language for
most people in the united
kingdom the united states
canada australia new zealand
ireland and the anglophone
caribbean it is used
extensively as a second
language and as an official
language throughout the world
especially in common wealth
countries and in many
international organizations

-output
a


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int arr[26] = {};
	while (getline(cin, s)) {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= 'a' && s[i] <= 'z')
				arr[s[i] - 'a']++;
		}
	}
	int max = 0, cnt = 0;
	for (int i = 0; i < 26; i++)
		if (max < arr[i]) {
			max = arr[i];
		}

	for (int i = 0; i < 26; i++)
		if (arr[i] == max)
			printf("%c", i + 'a');
	printf("\n");
	return 0;
}
*/