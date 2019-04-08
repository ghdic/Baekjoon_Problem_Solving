/*
https://leetcode.com/problems/search-insert-position/

&Title
35. Search Insert Position

&Question
Given a sorted array and a target value, return th
e index if the target is found. If not, return the
 index where it would be if it were inserted in or
der.
You may assume no duplicates in the array.
Example 1:
Input: [1,3,5,6], 5
Output: 2
Example 2:
Input: [1,3,5,6], 2
Output: 1
Example 3:
Input: [1,3,5,6], 7
Output: 4
Example 4:
Input: [1,3,5,6], 0
Output: 0

*/

/*
#include "header.h"

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
		int front = 0, back = nums.size() - 1, mid = 0;
		while (front <= back) {
			mid = (front + back) / 2;
			if (nums[mid] > target)
				back = mid - 1;
			else if (nums[mid] < target)
				front = mid + 1;
			else
				return mid;
		}
		return front;
    }
};

int main() {
	vector<int> nums = { 1,3,5,6 };
	int target = 7;
	cout << Solution().searchInsert(nums, target);
	return 0;
}
*/

/*
&Solution
Target�� ���� ���� �ִ� ��� �ش� index�� ��ȯ,
���� ��� Target�� insert�� index�� ��ȯ�ϴ� �����̴�.

�翬�� binary search�� �����ϴ� �Ŵ�..
�ű�� �� ã���� ��� front�� return�ϸ� Target�� Insert�� index�� ��ȯ�ϰ� �ȴ�.
�ٵ� �� �ҽ��� faster than 12%������ �߱淡 ����� �ҽ��� �ô�...
�� ���� ������...
�ٵ� if�� �� �ϴ� ������ num[mid] > target�� �� ���� �ø��� 98.5%�� ���� ���信 ������ �Ǿ���.
�ƹ����� ä�� �����Ϳ� target�� �� ������ ��� �ֳ�����... ����

C++
�׳� Brute Force�� Ǫ�¹��
```
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		for(int i=0;i<nums.size();i++){
			if(nums[i]>=target)
				return i;
		}
		return nums.size();
	}
};
```
�ð����⵵ : O(N)
*/