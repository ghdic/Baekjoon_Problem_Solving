/*
https://leetcode.com/problems/remove-nth-node-from-end-of-list/

&Title
19. Remove Nth Node From End of List

&Question
Given a linked list, remove the n-th node from the
 end of list and return its head.
Example:
Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the l
inked list becomes 1->2->3->5.
Note:
Given n will always be valid.
Follow up:
Could you do this in one pass?

*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


#include "header.h"

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

//�ڿ��� n��°�� �����ϴ°Ŵϱ� �ڿ��� n+1��°�� ���������� �ǰڴ�
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
		if (head->next == NULL && n == 1) {
			delete head;
			head = NULL;
			return head;
		}
		ListNode* temp = head, *target = head;
		int count = 0, num = 1;
		while (temp->next != NULL) {
			if (count == n) {
				target = target->next;
			}
			else {
				count++;
			}
			temp = temp->next;
			num++;
		}
		if (num == n) {
			temp = head->next;
			delete head;
			head = temp;
		}
		else {
			temp = target->next->next;
			delete target->next;
			target->next = temp;
		}
		return head;
    }
};

int main() {
	ListNode *head = NULL, *lastNode = NULL;
	int k = 1;
	for (int i = 1; i <= 5; i++) {
		ListNode *n = new ListNode(i);
		if (head == NULL) {
			head = n;
			lastNode = n;
		}
		lastNode->next = n;
		lastNode = n;
	}
	head = new ListNode(1);
	head = Solution().removeNthFromEnd(head, k);
	while (head) {
		cout << head->val << " ";
		head = head->next;
	}
	return 0;
}

/*
Solution
Approach 1: Two pass algorithm
����� ������� �� Ž���Ͽ� ����Ʈ�� ���̸� ���� ��
�ش� ������ �ڿ��� n��° �� ���� ��带 ���� �ڿ��� n��° ��带 �����Ѵ�.

Java
```
public ListNode removeNthFromEnd(ListNode head, int n) {
	ListNode dummy = new ListNode(0);
	dummy.next = head;
	int length  = 0;
	ListNode first = head;
	while (first != null) {
		length++;
		first = first.next;
	}
	length -= n;
	first = dummy;
	while (length > 0) {
		length--;
		first = first.next;
	}
	first.next = first.next.next;
	return dummy.next;
}
```

Approach 2: One pass algorithm
���� § ����̴�. �ٵ� �� ȿ�������� ���ϰ� ®������..
�� �Ѱ� ���ϱ� ���� n��ŭ ��� �ϳ��� ������Ű�� �ع�����..
�� �̸� ������Ų�� NULL�̸� �Ǿղ� �����ϸ� �ǰ� ���� �̷����Ҳ�..����
��ư n��ŭ �������� ��� ���� ���������� �Ǹ����� ��忡 ����������
�ڿ��� n��° ��带 ������ ���� �� �ִ�.

Java
```
public ListNode removeNthFromEnd(ListNode head, int n){
	ListNode dummy = new ListNode(0);
	dummy.next = head;
	ListNode first = dummy;
	ListNode second = dummy;

	//�� ��尣�� �������� ������
	for(int i = 1; i <= n + 1; i++){
		first = first.next;
	}
	//���� ������ä �����δ�.
	while(first != null) {
		first = first.next;
		second = second.next;
	}
	seconde.next = seconde.next.next;
	return dummy.next;
}
```
*/