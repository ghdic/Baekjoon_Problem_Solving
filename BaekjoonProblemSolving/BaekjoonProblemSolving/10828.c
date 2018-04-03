/*
https://www.acmicpc.net/problem/10828

&Title
����

&Question
������ �����ϴ� ������ ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.
����� �� �ټ� �����̴�.
push X: ���� X�� ���ÿ� �ִ� �����̴�.
pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
top: ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

&Input
ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. 
�־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.

&Output
����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.

&Example
-input
14
push 1
push 2
top
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
top
-output
2
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack {
	int item;
	struct Stack * next;
}stack;

stack * head=NULL;

void push(int item) {
	stack *tmp = (stack*)malloc(sizeof(stack));
	
	tmp->item= item;
	tmp->next = head;
	head = tmp;
}

int pop() {
	int item;
	if (head == NULL)
		return -1;
	stack *tmp=head;
	item = head->item;
	head = head->next;
	free(tmp);

	return item;
}

int size() {
	stack* tmp = head;
	int cnt = 0;
	while (tmp) {
		tmp = tmp->next;
		cnt++;
	}

	return cnt;
}

int empty() {
	if (head == NULL)
		return 1;
	else
		return 0;
}

int top() {
	if (head == NULL)
		return -1;
	else
		return head->item;
}

int main() {
	int N, item;
	char a[10];
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", &a);
		if (!strcmp(a, "push")) {
			scanf("%d", &item);
			push(item);
		}
		else if (!strcmp(a, "pop")) {
			printf("%d\n", pop());
		}
		else if (!strcmp(a, "size")) {
			printf("%d\n", size());
		}
		else if (!strcmp(a, "empty")) {
			printf("%d\n", empty());
		}
		else if (!strcmp(a, "top")) {
			printf("%d\n", top());
		}

	}

	return 0;
}

*/