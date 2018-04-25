/*
https://www.acmicpc.net/problem/5800

&Title
5800�� - ���� ���

&Question
�ѻ���� �̹��� �ߴ� ����б��� ���� ������ ���� �������̴�. 
���� ���������μ� ù ��° ���� �� ���� ���� ���� 
������ ��踦 ���� ���̴�.�ߴ� ����б� �� ���� �л����� ���� 
���� ������ �־����� ��, �ִ� ����, �ּ� ����, ���� 
���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� �ߴ� ����б��� �ִ� ���� �� K 
(1 �� K �� 100)�� �־�����. ���� K�� �ٿ��� 
�� ���� �л��� N (2 �� N �� 50)�� 
�� �л��� ���� ������ �־�����. ���� ������ 0���� ũ�ų� 
����, 100���� �۰ų� ���� �����̰�, �������� �������� �ִ�. 

&Output
�� �ݿ� ���� ����� ������ ���� �� �ٷ� 
�̷���� �ִ�.ù° �ٿ��� "Class X"�� ����Ѵ�. X�� ���� ��ȣ�̸� 
�Է����� �־��� ������� 1���� �����Ѵ�.��° �ٿ��� ���� ���� ����, 
���� ����, ������ ������������ �������� �� ���� ū ������ 
���� ���̸� ���� ��°� ���� �������� ����Ѵ�. 

&Example
-input
2
5 30 25 76 23 78
6 25 50 70 99 70 90

-output
Class 1
Max 78, Min 23, Largest gap 46
Class 2
Max 99, Min 25, Largest gap 25


*/

/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int arr[50], gap = 0, student;
		cin >> student;
		for (int j = 0; j < student; j++)
			cin >> arr[j];
		sort(arr, arr + student);
		for (int j = 0; j < student - 1; j++)
			if (gap < arr[j + 1] - arr[j])
				gap = arr[j + 1] - arr[j];
		cout << "Class " << i + 1 << endl;
		cout << "Max " << arr[student - 1] << ", Min " << arr[0] << ", Largest gap " << gap << endl;
	}
	return 0;
}
*/