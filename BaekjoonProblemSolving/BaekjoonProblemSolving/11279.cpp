/*
https://www.acmicpc.net/problem/11279

&Title
11279�� - �ִ� ��

&Question
�θ� �� �˷��� �ڷᱸ�� �� �ִ� ���̶�� ���� 
�ִ�. �ִ� ���� �̿��Ͽ� ������ ���� ������ �����ϴ� ���α׷��� 
�ۼ��Ͻÿ�.�迭�� �ڿ��� x�� �ִ´�.�迭���� ���� ū ���� ����ϰ�, �� 
���� �迭���� �����Ѵ�. ���α׷��� ó���� ����ִ� �迭���� �����ϰ� �ȴ�. 


&Input
ù° �ٿ� ������ ���� N(1��N��100,000)�� �־�����. ���� N���� 
�ٿ��� ���꿡 ���� ������ ��Ÿ���� ���� x�� �־�����. ���� 
x�� �ڿ������ �迭�� x��� ���� �ִ�(�߰��ϴ�) �����̰�, x�� 0�̶�� 
�迭���� ���� ū ���� ����ϰ� �� ���� �迭���� �����ϴ� 
����̴�. �ԷµǴ� �ڿ����� 2^31���� �۴�. 

&Output
�Է¿��� 0�� �־��� ȸ����ŭ ���� ����Ѵ�. ���� �迭�� 
��� �ִ� ����ε� ���� ū ���� ����϶�� �� ��쿡�� 
0�� ����ϸ� �ȴ�. 

&Example
-input
13
0
1
2
0
0
3
2
1
0
0
0
0
0

-output
0
2
1
3
2
1
0
0


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <queue>
using namespace std;

int main() {
	int N, a;
	priority_queue <int> max_heap;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		if (a == 0) {
			if (max_heap.empty())
				printf("0\n");
			else {
				printf("%d\n", max_heap.top());
				max_heap.pop();
			}
		}
		else {
			max_heap.push(a);
		}
	}
	return 0;
}
*/