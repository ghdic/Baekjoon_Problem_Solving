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

/*
#include <iostream>
#include <algorithm>
using namespace std;

class MaxHeap {
	int* harr;
	int capacity;
	int heap_size;
public:
	MaxHeap(int capacity);

	void MaxHeapify(int i);

	int parent(int i) { return (i - 1) / 2; }

	int left(int i) { return (2 * i + 1); }

	int right(int i) { return (2 * i + 2); }

	int extractMax();

	void decreaseKey(int i, int new_val);

	int getMax() { return harr[0]; };

	void deleteKey(int i);

	void insertKey(int k);
};

MaxHeap::MaxHeap(int cap) {
	heap_size = 0;
	capacity = cap;
	harr = new int[cap];
}

void MaxHeap::insertKey(int k) {
	if (heap_size == capacity) {
		cout << "\n Overflow \n";
		return;
	}

	heap_size++;
	int i = heap_size - 1;
	harr[i] = k;
	while (i != 0 && harr[parent(i)] < harr[i]) {
		swap(harr[i], harr[parent(i)]);
		i = parent(i);
	}
}

void MaxHeap::decreaseKey(int i, int new_val) {
	harr[i] = new_val;
	while (i != 0 && harr[parent(i)] < harr[i]) {
		swap(harr[i], harr[parent(i)]);
		i = parent(i);
	}
}

int MaxHeap::extractMax() {
	if (heap_size <= 0)
		return 0;
	if (heap_size == 1) {
		heap_size--;
		return harr[0];
	}

	int root = harr[0];
	harr[0] = harr[heap_size - 1];
	heap_size--;
	MaxHeapify(0);

	return root;
}

void MaxHeap::deleteKey(int i) {
	decreaseKey(i, -1e9);
	extractMax();
}

void MaxHeap::MaxHeapify(int i) {
	int l = left(i);
	int r = right(i);
	int biggest = i;
	if (l < heap_size && harr[l] > harr[i])
		biggest = l;
	if (r < heap_size && harr[r] > harr[biggest])
		biggest = r;
	if (biggest != i) {
		swap(harr[i], harr[biggest]);
		MaxHeapify(biggest);
	}
}

int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	MaxHeap mh(100001);
	cin >> n;
	int item;
	while (n--) {
		cin >> item;
		if (item) {
			mh.insertKey(item);
		}
		else {
			cout << mh.extractMax() << '\n';
		}
	}

	return 0;
}
*/