/*
https://www.acmicpc.net/problem/2822

&Title
���� ���
&Question
����̴� ������� PD�̴�. �� ������� �����ڴ� �� 8�� ������ Ǭ��. �����ڴ� �� ������ Ǯ��, �� ������ Ǯ���� �� ��� ������ ������ Ǯ�� ������ �ð����� ����� �ð��� ���̵��� �����Ѵ�. ������ Ǯ�� ���� ��쿡�� 0���� �޴´�. �������� �� ������ ���� ���� ���� 5���� ���̴�.

����̴� ��� ����ģ���� ��ȭ ��ȭ�� �ϴ��� �������� ������ ������� �ʰ� �־���. �������� 8�� ���� ������ �־����� ��, �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
8�� �ٿ� ���ļ� �� ������ ���� �������� ������ �־�����. ������ 0���� ũ�ų� ����, 150���� �۰ų� ����. ��� ������ ���� ������ ���� �ٸ���. �Է����� �־����� ������� 1�� ����, 2�� ����, ... 8�� �����̴�.
&Output
ù° �ٿ� �������� ������ ����Ѵ�. ��° �ٿ��� � ������ ���� ������ ���ԵǴ����� �������� �����Ͽ� ����Ѵ�. ����� ���� ��ȣ�� �����ϴ� �����̾�� �Ѵ�.
&Example
-input
20
30
50
48
33
66
0
64
-output
261
3 4 5 6 8
*/

/*
#include <iostream>
#include <utility>
using namespace std;

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
		if (arr[j] <= pivot)
			swap(arr[++i], arr[j]);
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int partition_c(pair<int, int> arr[], int low, int high) {
	int pivot = arr[high].first;
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
		if (arr[j].first <= pivot)
			swap(arr[++i], arr[j]);
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void quickSort_c(pair<int, int> arr[], int low, int high) {
	if (low < high) {
		int pi = partition_c(arr, low, high);
		quickSort_c(arr, low, pi - 1);
		quickSort_c(arr, pi + 1, high);
	}
}
int main() {
	pair<int, int> p1[8];
	int a, sum = 0, z[5];
	for (int i = 0; i < 8; i++) {
		cin >> a;
		p1[i] = make_pair(a, i + 1);
	}
	quickSort_c(p1, 0, 7);
	for (int i = 0; i < 5; i++) {
		sum += p1[i + 3].first;
		z[i] = p1[i + 3].second;
	}
	cout << sum << endl;
	quickSort(z, 0, 4);
	for (int i = 0; i < 5; i++)
		if (i == 4)cout << z[i] << endl;
		else cout << z[i] << " ";
	return 0;
}
*/