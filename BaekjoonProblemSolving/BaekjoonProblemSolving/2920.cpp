/*
https://www.acmicpc.net/problem/2920

&Title
2920�� - ����

&Question
�������� c d e f g a b 
C, �� 8�� ������ �̷�����ִ�. �� �������� 8�� ���� 
������ ���� ���ڷ� �ٲپ� ǥ���Ѵ�. c�� 1��, d�� 2��, 
..., C�� 8�� �ٲ۴�.1���� 8���� ���ʴ�� �����Ѵٸ� ascending, 8���� 
1���� ���ʴ�� �����Ѵٸ� descending, �� �� �ƴ϶�� mixed �̴�.������ 
������ �־����� ��, �̰��� ascending����, descending����, �ƴϸ� mixed���� �Ǻ��ϴ� 
���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� 8�� ���ڰ� �־�����. �� ���ڴ� ���� 
������ ������ ���̸�, 1���� 8���� ���ڰ� �� ���� �����Ѵ�. 


&Output
ù° �ٿ� ascending, descending, mixed �� �ϳ��� ����Ѵ�. 


&Example
-input
1 2 3 4 5 6 7 8

-output
ascending

-input
8 7 6 5 4 3 2 1

-output
descending

-input
8 1 7 2 6 3 5 4

-output
mixed


*/

/*
#include <iostream>
using namespace std;

int main() {
	int arr[8], up = 0, down = 0;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 7; i++) {
		if (arr[i] < arr[i + 1])up++;
		else if (arr[i] > arr[i + 1])down++;
	}

	if (up&&down) {
		cout << "mixed" << endl;
	}
	else if (up) {
		cout << "ascending" << endl;
	}
	else if (down) {
		cout << "descending" << endl;
	}
	return 0;
}
*/