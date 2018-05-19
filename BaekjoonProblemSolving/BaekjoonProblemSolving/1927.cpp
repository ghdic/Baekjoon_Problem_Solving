/*
https://www.acmicpc.net/problem/1927

&Title
1927�� - �ּ� ��

&Question
�θ� �� �˷��� �ڷᱸ�� �� �ּ� ���̶�� ���� 
�ִ�. �ּ� ���� �̿��Ͽ� ������ ���� ������ �����ϴ� ���α׷��� 
�ۼ��Ͻÿ�.�迭�� �ڿ��� x�� �ִ´�.�迭���� ���� ���� ���� ����ϰ�, �� 
���� �迭���� �����Ѵ�.���α׷��� ó���� ����ִ� �迭���� �����ϰ� �ȴ�. 

&Input
ù° �ٿ� ������ ���� N(1��N��100,000)�� �־�����. ���� N���� 
�ٿ��� ���꿡 ���� ������ ��Ÿ���� ���� x�� �־�����. ���� 
x�� �ڿ������ �迭�� x��� ���� �ִ�(�߰��ϴ�) �����̰�, x�� 0�̶�� 
�迭���� ���� ���� ���� ����ϰ� �� ���� �迭���� �����ϴ� 
����̴�. �ԷµǴ� �ڿ����� 2^31���� �۴�. 

&Output
�Է¿��� 0�� �־��� ȸ����ŭ ���� ����Ѵ�. ���� �迭�� 
��� �ִ� ����ε� ���� ���� ���� ����϶�� �� ��쿡�� 
0�� ����ϸ� �ȴ�. 

&Example
-input
9
0
12345678
1
2
0
0
0
0
32

-output
0
1
2
12345678
0


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <queue>
#include <functional>
#include <vector>
using namespace std;

int main() {
	int N, a;
	scanf("%d", &N);
	priority_queue<int, vector<int>, greater<int>> min_heap;

	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		if (a == 0) {
			if (min_heap.empty()) {
				printf("0\n");
			}
			else {
				printf("%d\n", min_heap.top());
				min_heap.pop();
			}
		}
		else {
			min_heap.push(a);
		}
	}
	return 0;
}
*/