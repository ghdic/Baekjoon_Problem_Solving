/*
https://www.acmicpc.net/problem/10866

&Title
10866�� - ��

&Question
������ �����ϴ� ��(Deque)�� ������ ����, �Է����� �־����� ����� 
ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.����� �� ���� �����̴�.push_front X: ���� X�� 
���� �տ� �ִ´�.push_back X: ���� X�� ���� �ڿ� �ִ´�.pop_front: 
���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�. 
����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.pop_back: ���� 
���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, 
���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.size: ���� ����ִ� 
������ ������ ����Ѵ�.empty: ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.front: 
���� ���� �տ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� 
������ ���� ��쿡�� -1�� ����Ѵ�.back: ���� ���� �ڿ� �ִ� 
������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� 
����Ѵ�. 

&Input
ù° �ٿ� �־����� ����� �� N (1 �� 
N �� 10,000)�� �־�����. �Ѥ� �ٺ��� N���� �ٿ��� ����� 
�ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� 
����. ������ �������� ���� ����� �־����� ���� ����. 

&Output
����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�. 


&Example
-input
15
push_back 1
push_front 2
front
back
size
empty
pop_front
pop_back
pop_front
size
empty
pop_back
push_front 3
empty
front

-output
2
1
2
0
2
1
-1
0
1
-1
0
3


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	int N, num;
	string s;
	deque <int> deq;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		cin >> s;
		if (s == "push_front") {
			scanf("%d", &num);
			deq.push_front(num);
		}
		else if (s == "push_back") {
			scanf("%d", &num);
			deq.push_back(num);
		}
		else if (s == "pop_front") {
			if (deq.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", deq.front());
				deq.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (deq.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", deq.back());
				deq.pop_back();
			}
		}
		else if (s == "size") {
			printf("%d\n", deq.size());
		}
		else if (s == "empty") {
			printf("%d\n", deq.empty());
		}
		else if (s == "front") {
			if (deq.empty())printf("-1\n");
			else printf("%d\n", deq.front());
		}
		else if (s == "back") {
			if (deq.empty())printf("-1\n");
			else printf("%d\n", deq.back());
		}

	}
	return 0;
}
*/

//�ð��ʰ� �ѤѤ�
/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

typedef struct deq {
	struct deq *next;
	int item;
}deq;

deq *head = NULL, *tail = NULL;

int empty() {
	if (!head)return 1;
	else return 0;
}

void push_front(int a) {
	deq *temp = new deq;
	temp->item = a;
	if (empty()) {
		head = temp;
		tail = temp;
		temp->next = NULL;
	}
	else {
		temp->next = head;
		head = temp;
	}
}

void push_back(int a) {
	deq *temp = new deq;
	temp->item = a;
	if (empty()) {
		head = temp;
		tail = temp;
		temp->next = NULL;
	}
	else {
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
	}
}

int pop_front() {
	deq *temp;
	int it;
	if (empty())return -1;
	if (head == tail) {
		temp = head;
		it = temp->item;
		head = NULL;
		tail = NULL;
	}
	else {
		temp = head;
		it = temp->item;
		head = head->next;
	}
	delete temp;
	return it;
}

int pop_back() {
	deq *temp, *hd;
	int it;
	if (empty())return -1;
	if (head == tail) {
		temp = head;
		it = temp->item;
		head = NULL;
		tail = NULL;
	}
	else {
		temp = tail;
		it = temp->item;
		hd = head;
		while (hd->next != tail) {
			hd = hd->next;
		}
		tail = hd;
	}
	delete temp;
	return it;
}

int deqSize(){
	int k = 0;
	deq * temp = head;
	while (temp) {
		temp = temp->next;
		k++;
	}
	return k;
}

int front() {
	if (empty())return -1;
	else return head->item;
}

int back() {
	if (empty())return -1;
	else return tail->item;
}
int main() {
	int N, num;
	string s;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		cin >> s;
		if (s == "push_front") {
			scanf("%d", &num);
			push_front(num);
		}
		else if (s == "push_back") {
			scanf("%d", &num);
			push_back(num);
		}
		else if (s == "pop_front") {
			printf("%d\n", pop_front());
		}
		else if (s == "pop_back") {
			printf("%d\n", pop_back());
		}
		else if (s == "size") {
			printf("%d\n", deqSize());
		}
		else if (s == "empty") {
			printf("%d\n", empty());
		}
		else if (s == "front") {
			printf("%d\n", front());
		}
		else if (s == "back") {
			printf("%d\n", back());
		}

	}
	return 0;
}
*/