/*
https://www.acmicpc.net/problem/10886

&Title
0 = not cute / 1 = cute
&Question
����� �ڱⰡ ������ �Ϳ����� ����ϰ� �ִٰ� �����Ѵ�. ������ ������ �� �� �� �ǰ��� ���� �� �߸��� �� ���Ҵ�. �׷��⿡ �������縦 �Ͽ� ���� �Ϳ����� �ƴ��� �˾ƺ���� �ߴ�.
&Input
ù ��° �ٿ� �������縦 �� ����� �� N (1 �� N �� 101, N�� Ȧ��)�� �־�����.

���� N���� �ٿ��� �� �ٸ��� �� ����� ���� ���翡 � �ǰ��� ǥ���ߴ����� ��Ÿ���� ������ �־�����. 0�� ���� �Ϳ��� �ʴٰ� �ߴٴ� ���̰�, 1�� ���� �Ϳ��ٰ� �ߴٴ� ���̴�.
&Output
���� �Ϳ��� �ʴٴ� �ǰ��� �� ���� ��� "Junhee is not cute!"�� ����ϰ� �Ϳ��ٴ� �ǰ��� ���� ��� "Junhee is cute!"�� ����϶�.
&Example
-input
3
1
0
0
-output
Junhee is not cute!
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, boo, cute = 0, ugly = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> boo;
		if (boo == 1)cute++;
		else if (boo == 0)ugly++;
	}
	if (cute > ugly)cout << "Junhee is cute!" << endl;
	else if (cute < ugly)cout << "Junhee is not cute!" << endl;
	return 0;
}
*/