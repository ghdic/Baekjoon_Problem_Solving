/*
https://www.acmicpc.net/problem/1912

&Title
1912�� - ������

&Question
n���� ������ �̷���� ������ ������ �־�����. �츮�� �� 
�� ���ӵ� �� ���� ���ڸ� �����ؼ� ���� �� �ִ� 
�� �� ���� ū ���� ���Ϸ��� �Ѵ�. ��, ���ڴ� 
�� �� �̻� �����ؾ� �Ѵ�.���� �� 10, -4, 3, 
1, 5, 6, -35, 12, 21, -1 �̶�� ������ 
�־����ٰ� ����. ���⼭ ������ 12+21�� 33�� ������ �ȴ�. 

&Input
ù° �ٿ� ���� n(1��n��100,000)�� �־����� ��° �ٿ��� n���� 
������ �̷���� ������ �־�����. ���� -1,000���� ũ�ų� ����, 1,000���� 
�۰ų� ���� �����̴�. 

&Output
ù° �ٿ� ���� ����Ѵ�. 

&Example
-input
10
10 -4 3 1 5 6 -35 12 21 -1
-output
33

*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	int arr[100010];
	int suc_max[100010];
	cin >> N;
	for (int i = 1; i <= N;i++) 
		cin >> arr[i];
	suc_max[0] = 0;
	for(int i=1;i<=N;i++){
		if (suc_max[i - 1] + arr[i] > arr[i]) {
			suc_max[i] = suc_max[i - 1] + arr[i];
		}
		else suc_max[i] = arr[i];
	
	}
	int max = suc_max[1];
	for (int i = 2; i <= N; i++)
		if (max < suc_max[i])
			max = suc_max[i];
	cout << max << endl;
	return 0;
}
*/

//DP>0 �϶� �� ���� ���ӵ� ���� ����� ��� �ڽ��� �� + ���� ���ӵ� ���� DP�� ������ �Ǵµ�
//�ƴ� ��쿣 �ڽ��� ���� �ִ°� �� ����.