/*
https://www.acmicpc.net/problem/2579

&Title
2579�� - ��� ������

&Question
��� ������ ������ ��� �Ʒ� ���������� ��� ����⿡ 
��ġ�� ���������� ���� �����̴�. <�׸� 1>�� ���� ������ ��ܿ��� 
������ ������ ���� �ִµ� ����� ������ �� ��ܿ� ���� 
�ִ� ������ ��� �ȴ�.���� ��� <�׸� 2>�� ���� �������������� 
ù ��°, �� ��°, �� ��°, ���� ��°, ����� 
��� �������� �����ϸ� �� ������ 10 + 20 + 
25 + 20 = 75���� �ȴ�.��� ������ ���� ������ 
���� ��Ģ�� �ִ�.����� �� ���� �� ��ܾ� �Ǵ� �� 
��ܾ� ���� �� �ִ�. ��, �� ����� �����鼭 �̾ 
���� ����̳�, ���� ���� ������� ���� �� �ִ�.���ӵ� �� 
���� ����� ��� ��Ƽ��� �ȵȴ�. ��, �������� ��ܿ� ���Ե��� 
�ʴ´�.������ ���� ����� �ݵ�� ��ƾ� �Ѵ�.���� ù ��° ����� 
��� �̾� �� ��° ����̳�, �� ��° ������� ���� 
�� �ִ�. ������, ù ��° ����� ��� �̾� �� 
��° ������� �ö󰡰ų�, ù ��°, �� ��°, ����° ����� 
�����ؼ� ��� ���� ���� ����.�� ��ܿ� ���� �ִ� ������ 
�־��� �� �� ���ӿ��� ���� �� �ִ� �� ������ 
�ִ밪�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
�Է��� ù° �ٿ� ����� ������ �־�����.��° �ٺ��� �� 
�ٿ� �ϳ��� ���� �Ʒ��� ���� ��ܺ��� ������� �� ��ܿ� 
���� �ִ� ������ �־�����. ����� ������ 300������ �ڿ����̰�, ��ܿ� 
���� �ִ� ������ 10,000������ �ڿ����̴�. 

&Output
ù° �ٿ� ��� ������ ���ӿ��� ���� �� �ִ� 
�� ������ �ִ밪�� ����Ѵ�. 

&Example
-input
6
10
20
15
25
10
20
-output
75

*/

/*
#include <iostream>
using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}
int main() {
	int N, arr[301] = {}, dp[301] = {};
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	
	//������ܿ� ���� dp�� ���� 1,2 ��ܿ� ���� ó��
	for (int i = 1; i <= 2 && i <= N; i++) {
			dp[i] = dp[i - 1] + arr[i];
	}

	//���� ��� �������� �Ѱ�� ������ �ð��, �ΰ�� ������ �ð�� �� ū ��
	for (int i = 3; i <= N; i++) {
		dp[i] = max(arr[i] + arr[i - 1] + dp[i - 3], arr[i] + dp[i - 2]);
	}
	cout << dp[N] << endl;
	return 0;
}
*/