/*
https://www.acmicpc.net/problem/10867

&Title
10867�� - �ߺ� ���� �����ϱ�

&Question
N���� ������ �־�����. �� ��, N���� ������ ������������ 
�����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ������ �� ���� ����Ѵ�. 

&Input
ù° �ٿ� ���� ���� N (1 �� N 
�� 100,000)�� �־�����. ��°���� ���ڰ� �־�����. �� ���� ���밪�� 
1,000���� �۰ų� ���� �����̴�. 

&Output
ù° �ٿ� ���� ������������ ������ ����� ����Ѵ�. �� 
��, ���� ���� �� ���� ����Ѵ�. 

&Example
-input
10
1 4 2 3 1 4 2 3 1 2

-output
1 2 3 4


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int N, arr[100000] = {};
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + N);

	printf("%d ", arr[0]);
	for (int i = 1; i < N; i++) {
		if (arr[i] != arr[i - 1])
			printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
*/