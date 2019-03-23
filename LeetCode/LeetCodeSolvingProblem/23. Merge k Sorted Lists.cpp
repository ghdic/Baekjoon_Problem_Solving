/*
https://leetcode.com/problems/merge-k-sorted-lists/

&Title
23. Merge k Sorted Lists

&Question
Merge k sorted linked lists and return it as one s
orted list. Analyze and describe its complexity.
Example:
Input:
[
  1->4->5,
  1->3->4,
  2->6
]
Output: 1->1->2->3->4->4->5->6

*/

/*
#include "header.h"

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };

struct CustomCompare
{
	bool operator()(const ListNode* lhs, const ListNode* rhs)
	{
		return lhs->val > rhs->val;
	}
};
class Solution {
public:
	
    ListNode* mergeKLists(vector<ListNode*>& lists) {
		ListNode* result = NULL, *lastNode = NULL;
		priority_queue<ListNode*, vector<ListNode*>, CustomCompare> pq;
		for (int i = 0; i < lists.size(); i++) {
			if (lists[i] != NULL) {
				pq.push(lists[i]);
			}
		}
		while (!pq.empty()) {
			if (result == NULL) {
				result = pq.top();
				lastNode = pq.top();
			}
			else {
				lastNode->next = pq.top();
				lastNode = pq.top();
			}
			ListNode* item = pq.top()->next;
			pq.pop();
			if (item != NULL)
				pq.push(item);
			lastNode->next = NULL;
		}
		return result;
    }
};

void PrintNode(ListNode * head) {
	if (head == NULL)
		return;
	cout << head->val << " ";
	PrintNode(head->next);
	
}

int main() {
	vector<ListNode*> lists;
	ListNode *a1, *a2, *a3;
	a1 = new ListNode(3);
	a1->next = new ListNode(4);
	a1->next->next = new ListNode(5);

	a2 = new ListNode(1);
	a2->next = new ListNode(3);
	a2->next->next = new ListNode(4);

	a3 = new ListNode(2);
	a3->next = new ListNode(7);
	a3->next->next = new ListNode(8);

	lists.push_back(a1);
	lists.push_back(a2);
	lists.push_back(a3);

	a1 = Solution().mergeKLists(lists);
	PrintNode(a1);

	return 0;
}
*/

/*
&Solution
�Ź� sort�Ѵ��� �� �� ���Ҹ� ����ϴ½����� �ߴµ�
sort ����� �Ǿ�������. �׷��� priority_queue�� �����
28ms faster than 95.66%�� ���Դ� ��
������ ���� ����������. ������� �����Ͽ� 
�� ������ �� �������� �ٽ��� ������ �� ����.

���ٹ� 1: Brute Force
�׳� ���� ��ģ ������ �����ϴ� ����̴�.
Python
```
class Solution(object):
	def mergeKLists(self, lists):
		self.nodes = []
		head = point = ListNode(0)
		for l in lists:
			while l:
				self.nodes.append(l.val)
				l = l.next
		for x in sorted(self.nodes):
			point.next = ListNode(x)
			point = point.next
		return head.next
```
�ð����⵵ : O(N log N)


���ٹ� 2: �ϳ��� ���ϱ�
��ó�� ���� �����ߴ� ����̴�. �׷��� ���� ������ ã�⺸��
������ ����ؼ� ���� ������ ã�⿡ ����� �ʹ� �Ǿ���.

�ð����⵵ : O(kN)


���ٹ� 3: ���ٹ�2�� Ȱ���� Priority Queue���
���� Ǭ ������� ���ٹ�2 + priority Queue�� ����Ѵ�
priority Queue�� heap�� ������ ������� ����Ʈ������
root�� pop�ϸ� �� �������� ���ı��ؿ� ���� item�� root�� �´�.
���� ���Ŀ� ���� ����� ��û ���� �پ���. ��� item�� �߰��Ҷ�
�ٸ� �Ϳ� ���� ����� ���� �� ���.

Python
```
from queue import PriorityQueue

class Solution(object):
	def mergeKLists(self, lists):

		head = point = ListNode(0)
		q = PriorityQueue()
		for i in lists:
			if l:
				q.put((l.val, l))
		while not q.empty():
			val, node = q.get()
			point.next = ListNode(val)
			point = point.next
			node = node.nnext
			if node:
				q.put((node.val, node))
			return head.next
```
�ð����⵵ : O(Nlogk)


���ٹ� 4: Merge lists one by one
Merge ������ �̿��ؼ� Ǫ�� ����̴�.
���ٹ�1�� ���� ��ģ �� �����̿��ٸ�
���ٹ�4�� �� �տ� �ΰ��� ����Ʈ�� ¦��� �����Ͽ�
�Ѱ��� ����Ʈ�� ���������� �պ��Ѵ�.
�� n-1���� �ݺ��Ѵ�.

�ð����⵵ : O(kN)


���ٹ� 5: Merge with Divide And Conquer
���ٹ�4�� �������� �պ�����(merge sort)�� �����̴�.
�տ� ����Ʈ�� ¦��� ������ ���
�� �տ� �ִ� ����Ʈ�� ũ�Ⱑ �ʹ� Ŀ���� ������
���ϴ� ����� Ŀ���� �ȴ�.
���� �ΰ��� ¦��� �����ϴ� ����̴�.

python
```
class Solution(object):
	def mergeKLists(self, lists):
		amount = len(lists)
		interval = 1
		while interval < amount:
			for i in range(0, amount - interval, interval * 2):
				lists[i] = self.merge2Lists(lists[i], lsts[i + interval]):
				interval *= 2
		return lists[0] if amount > 0 else lists

	def merge2Lists(self, l1, l2):
		head = point = ListNode(0)
		while l1 and l2:
			if l1.val <= l2.val:
				point.next = l1
				l1 = l1.next
			else:
				point.next = l2
				l2 = l1
				l1 = point.next.next
			point = point.next
		if not l1:
			point.next = l2
		else:
			point.next = l1
		return head.next

```
�ð����⵵ : O(Nlogk)
*/