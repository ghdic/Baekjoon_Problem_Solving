/*
https://leetcode.com/problems/first-missing-positive/

&Title
41. First Missing Positive

&Question
Given an unsorted integer array, find the smallest
 missing positive integer.
Example 1:
Input: [1,2,0]
Output: 3
Example 2:
Input: [3,4,-1,1]
Output: 2
Example 3:
Input: [7,8,9,11,12]
Output: 1
Note:
Your algorithm should run in O(n) time and uses co
nstant extra space.

*/

/*
#include "header.h"

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int num = 1;
		for (int i = 0; i < nums.size(); i++) {
			
			if (nums[i] > 0) {
				if (i != 0 && nums[i] == nums[i - 1])continue;
				if (num != nums[i]) {
					return num;
				}
				num++;
			}
		}
		return num;
    }
};

int main() {
	vector<int> nums = { 0,2,2,1,1 };
	cout << Solution().firstMissingPositive(nums) << endl;
	return 0;
}
*/

/*
&Solution
���� ���� �� ���·� �ٲ۵ڿ� �ذ��ϴ� ������� ®��.
���� �̷��� �ϸ� �ſ� ���� �ذ��� �ȴ�.

C++
������ ���� �ʰ� Ǭ Ǯ�̰� �ִ�.
���� faster than 100%
���ڸ� �ڱ� �ڸ��� ���� �ǵ��� swap�� �Ѵ�.
�׸��� �ڱ� �ڸ��� �־���� ���Ұ� ���ٸ� �װ� ���� �Ǵ°�..
���� ���̵� ��ü�� hard�� �ƴѵ�
```
class Solution {
public:
	int firstMissingPositive(vector<int>& nums) {
		for (int i = 0; i < nums.size(); ++i)
			while (nums[i] > 0 && nums[i] <= nums.size() && nums[nums[i] - 1] != nums[i])
				swap(nums[i], nums[nums[i] - 1]);

		for (int i = 0; i < nums.size(); ++i)
			if (nums[i] != i + 1)
				return i + 1;

		return nums.size() + 1;
	}
};
```
*/

