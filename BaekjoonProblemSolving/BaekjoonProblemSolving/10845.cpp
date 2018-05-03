/*
https://www.acmicpc.net/problem/10845

&Title
10845�� - ť

&Question
������ �����ϴ� ť�� ������ ����, �Է����� �־����� ����� 
ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.����� �� ���� �����̴�.push X: ���� X�� 
ť�� �ִ� �����̴�.pop: ť���� ���� �տ� �ִ� ������ ����, 
�� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� 
-1�� ����Ѵ�.size: ť�� ����ִ� ������ ������ ����Ѵ�.empty: ť�� ��������� 
1, �ƴϸ� 0�� ����Ѵ�.front: ť�� ���� �տ� �ִ� ������ 
����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.back: 
ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� 
������ ���� ��쿡�� -1�� ����Ѵ�. 

&Input
ù° �ٿ� �־����� ����� �� N (1 �� 
N �� 10,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� 
�ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� 
����. ������ �������� ���� ����� �־����� ���� ����. 

&Output
����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�. 


&Example
-input
15
push 1
push 2
front
back
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
front

-output
1
2
2
0
1
2
-1
0
1
-1
0
3


*/

/*
#include <iostream>
#include <string>
using namespace std;

typedef struct que {
	que * next;
	int item;
}que;

que * head = NULL;

int empty() {
	if (!head)return 1;
	else return 0;
}
void push(int n) {
	que * k = new que, *temp;
	k->item = n;
	k->next = NULL;
	if (empty())head = k;
	else {
		temp = head;
		while (temp->next) {
			temp = temp->next;
		}
		temp->next = k;
	}
}

int pop() {
	if (empty())return -1;
	int itm = head->item;
	que * k = head;
	head = head->next;
	delete k;
	return itm;
}

int qsize() {
	int cnt = 0;
	que * temp = head;
	while (temp) {
		temp = temp->next;
		cnt++;
	}
	return cnt;
}

int front() {
	if (empty())return -1;
	else return head->item;
}

int back() {
	if (empty())return -1;
	que * temp = head;
	while (temp->next) {
		temp = temp->next;
	}
	return temp->item;
}
int main() {
	int N, num;
	string command;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			push(num);
		}
		else if (command == "pop") {
			cout << pop() << endl;
		}
		else if (command == "size") {
			cout << qsize() << endl;
		}
		else if (command == "empty") {
			cout << empty() << endl;
		}
		else if (command == "front") {
			cout << front() << endl;
		}
		else if (command == "back") {
			cout << back() << endl;
		}
	}

	return 0;
}
*/