/*
https://leetcode.com/problems/swap-nodes-in-pairs/

&Title
24. Swap Nodes in Pairs

&Question
Given a linked list, swap every two adjacent nodes
 and return its head.
You may not modify the values in the list's nodes,
 only nodes itself may be changed.
  Example:
Given 1->2->3->4, you should return the list as 2-
>1->4->3.

*/

/*
#include "header.h"

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
		if (!head || !head->next)
			return head;
		ListNode *temp1 = head, *temp2 = head->next, *swap, *prev = head;
		
		head = temp2;
		while (true) {
			if (!temp1 || !temp2) break;
			prev->next = temp2;
			prev = temp1;
			prev = temp1;
			swap = temp1;
			temp1 = temp2;
			temp2 = swap;
			temp2->next = temp1->next;
			temp1->next = temp2;
			
			temp1 = temp2->next;
			if (temp1) temp2 = temp2->next->next;
		}
		return head;
    }
};

void PrintNode(ListNode * head) {
	if (head == NULL)
		return;
	cout << head->val << " ";
	PrintNode(head->next);

}

int main() {
	ListNode* head;
	head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head = Solution().swapPairs(head);
	PrintNode(head);
	return 0;
}

*/

/*
&Solution
��� ���� ���� �����̴�.
��� ������ ���� ���� �״�� �ΰ� ���� �ٲٴ°� x

C++
���� § ����� ������ ���� ����ϴ�... �Ƿ����� �������°�? ����
```
class Solution {
public:
	ListNode* swapPairs(ListNode* head) {
		ListNode dummy = ListNode(-1);
		dummy.next = head;

		ListNode *p = &dummy;
		ListNode *q = nullptr;
		ListNode *r = nullptr;

		while (p && p->next && p->next->next) {
			q = p->next;
			r = q->next;

			q->next = r->next;
			r->next = q;
			p->next = r;

			p = p->next->next;
		}
		return dummy.next;
	}
};
``
*/
