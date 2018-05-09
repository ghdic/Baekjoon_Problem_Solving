/*
https://www.acmicpc.net/problem/1506

&Title
1506�� - ������

&Question
�����̰� ����ִ� ���󿡴� ���ð� N�� �ְ�, ������ �Ϻδ� 
�Ϲ� ���� ���η� ����Ǿ� �ִ�. �����̰� ����ִ� ������ ����� 
�����̴� ���˿� �ο�� ���ؼ� �Ϻ� ���ÿ� �������� ������� �Ѵ�. 
���� i�� �������� ����� ����� cost[i] �̴�.���� i�� ���� 
�������� ���� j�� ������ �� ��������, i���� j�� ���ٰ�, 
�ٽ� ���ƿ��� ��ΰ� �����ؾ� �Ѵ�.���ΰ� ����Ǿ� �ִ� ���¿� �� 
���ÿ� �������� ���� �� �ʿ��� ����� �־����� ��, ��� 
���ø� �����ϴµ� �ʿ��� �ּ� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� ������ ���� N (1 �� N 
�� 100)�� �־�����. ��° �ٿ� �� ���ÿ� �������� ����µ� 
��� ����� �־�����. ��° �ٺ��� ���ΰ� ����Ǿ� �ִ� ���°� 
�� �ٿ� �� �ٿ� �ϳ��� �־�����. i��° ���� j��° 
���ڰ� 0�� ��쿡�� ���� i���� ���� j�� �� �� 
���� ���̰�, 1�� ��쿡�� �� �� �ִ� ���̴�. 

&Output
ù° �ٿ� ��� ���ø� �����ϴµ� �ʿ��� �ּ� ����� 
����Ѵ�. 

&Example
-input
5
1 2 3 4 5
00011
10000
00010
00100
01000

-output
4


*/


#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int arr[100][100] = {};
int N, a, result = 0, temp;
pair <int, int> cost[100];
bool finish;
bool bb[100] = {};
stack <int> st;
stack <int> visit;

int main() {
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		cost[i] = make_pair(a, i);
	}
	sort(cost, cost + N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	temp = 0;
	while (!finish) {
		//���ÿ� �׾���
		int start = cost[temp].second;
		bb[start] = true;	//���� �ϴ� ���� true�� ����� �Ѵ�.
		st.push(start);

		while (!st.empty()) {
			int item = st.top();
			visit.push(item);
			st.pop();
			for (int i = 0; i < N; i++) {
				if (arr[item][i] == 1) {
					//1.�ش� ���� start �� ����
					if (i == start) {

					}
					//2.�ش� ���� �̹� �湮�� ������(����Ŭ)
					//�ι�° �̻� ����ÿ��� �̹� �湮�Ѱ��� �� true�� �������Ƿ�
					st.push(i);
					bb[i] = true;
				}
				//3.���̻� �� ��尡 ������
			}
		}
		//��� ����� �ְ� ���� ���� ���� ���� ����
		result += cost[temp].first;
		for (int i = temp; i < N; i++) {
			if (bb[i] == false) {
				temp = i;
				break;
			}
		}

		//��� ���� ������ �Ǵ��� Ȯ��
		finish = true;
		for (int j = 0; j < N; j++) {
			if (bb[j] == false) {
				finish = false;
				break;
			}
		}
	}
	return 0;
}
