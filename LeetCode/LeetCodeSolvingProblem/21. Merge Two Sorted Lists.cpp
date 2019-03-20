/*
https://leetcode.com/problems/merge-two-sorted-lists/

&Title
21. Merge Two Sorted Lists

&Question
Merge two sorted linked lists and return it as a n
ew list. The new list should be made by splicing t
ogether the nodes of the first two lists.
Example:
Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* head = NULL, *last = NULL, *temp = NULL;
		int item;
		while (l1 && l2) {
			item = l1->val > l2->val ? l2->val : l1->val;
			temp = new ListNode(item);
			if (!head) {
				head = temp;
				last = temp;
			}
			else {
				last->next = temp;
				last = temp;
			}
			
			if (l1->val > l2->val) l2 = l2->next;
			else l1 = l1->next;
		}
		while (l1) {
			item = l1->val;
			temp = new ListNode(item);
			if (!head) {
				head = temp;
				last = temp;
			}
			else {
				last->next = temp;
				last = temp;
			}
			l1 = l1->next;
		}
		while (l2) {
			item = l2->val;
			temp = new ListNode(item);
			if (!head) {
				head = temp;
				last = temp;
			}
			else {
				last->next = temp;
				last = temp;
			}
			l2 = l2->next;
		}
		return head;
    }
};

void PrintList(ListNode* head) {
	while (head) {
		cout << head->val << " ";
		head = head->next;
	}
}

int main() {
	ListNode *l1, *l2, *head;
	l1 = new ListNode(1);
	l1->next = new ListNode(2);
	l1->next->next = new ListNode(4);
	
	l2 = new ListNode(1);
	l2->next = new ListNode(3);
	l2->next->next = new ListNode(4);
	head = Solution().mergeTwoLists(l1, l2);
	PrintList(head);

	return 0;
}
*/

/*
Solution
�� ���� ���� �����ϰ� �� ����� ���� ���Ͽ� �����ϴ� �����̴�.
��͸� ����ϸ� �� ª�� ������ �����ϴ�.
���� ���� �ϳ��� null ��ȯ�Ǹ� �ڿ� ���� ��尡
�׳� ��¥�� ����´ٴ°� ���� ���ߴ�..����

Python
```
class Solution:
	def mergeTwoLists(self, a, b):
		if a and b:
			if a.val > b.val:
				a, b = b, a
			a.next = self.mergeTwoLists(a.next, b)
		return a or b
```

�� �ڵ��� ������ �� �մ�
```
def mergeTwoLists(self, a, b):
	if not a or b and a.val > b.val:
		a, b = b, a
	if a:
		a.next = self.mergeTwoLists(a.next, b)
	return a
```
*/