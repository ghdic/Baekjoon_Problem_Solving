/*
https://leetcode.com/problems/jump-game-ii/

&Title
45. Jump Game II

&Question
Given an array of non-negative integers, you are i
nitially positioned at the first index of the arra
y.
Each element in the array represents your maximum 
jump length at that position.
Your goal is to reach the last index in the minimu
m number of jumps.
Example:
Input: [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach 
the last index is 2.
    Jump 1 step from index 0 to 1, then 3 steps to
 the last index.
Note:
You can assume that you can always reach the last 
index.

*/

/*
#include "header.h"

class Solution {
public:
	int jump(vector<int>& nums) {
		int n = nums.size(), step = 0, start = 0, end = 0;
		while (end < n - 1) {
			step++;
			int maxend = end + 1;
			for (int i = start; i <= end; i++) {
				if (i + nums[i] >= n - 1) return step; // �ε��� ������ �Ѿ� ���ٴ� ���� �� �̻� ������ �����ϴٴ� ���� �ǹ�
				maxend = max(maxend, i + nums[i]); // �ִ��� ���� �� �� �ִ� ���� ���Ѵ�
			}
			start = end + 1; // �ִ��� �ָ��� �� ���� ��찡 �ִ� ������ �ݺ����� ������
			end = maxend;
		}
		return step;
	}
};

int main() {
	vector<int> nums = { 2,3,1,1,4 };
	cout << Solution().jump(nums);
	return 0;
}
*/

/*
&Solution
�� �ε����� �ִ� ���������� ���ڰ� �����ִµ� �̸� ���� �ּ����� ������� ������ �ε����� �����ϴ°� ��ǥ�̴�.
Greedy�� BFS�� ����ϴ� �����̴�.
���� § �ҽ��� �׽�Ʈ ���̽��� ������� AddressSanitizer: stack-overflow on address ������ ���� �Ф�
��͸� �ʹ� ���� �׷��� ����.

���� �ҽ��� ����

C++
����§ �ҽ�..
```
class Solution {
public:
	int jump(vector<int>& nums) {
		int result = recur(nums, 0) - 1;
		return result;
	}

	int recur(vector<int>& nums, int pos) {
		if (pos == nums.size() - 1)return 1;
		vector<int> v;
		while (v.size() != nums.size()) {

			int max = 0, idx = 0;
			for (int i = nums[pos]; i >= 1; i--) {
				if (i + pos >= nums.size())continue;
				if (find(v.begin(), v.end(), i + pos) != v.end())continue;
				if (nums[i + pos] + i > max) {
					max = nums[i + pos] + i;
					idx = i + pos;
				}
			}
			if (int result = recur(nums, idx)) return result + 1;
			v.push_back(idx);
		}
		return 0;
	}
};
```


C++
O(n)�ذ���̴�. ��Ŀ���� ��ü�� �� ���� �ҽ��� ����.
```
class Solution {
public:
	int jump(vector<int> &nums) {
		int n = nums.size();
		if (n == 0 || n == 1) {
			return 0;
		}
		int maxReachPos = nums[0];
		int curMaxReachPos = nums[0];
		int curStep = 1;
		for (int i = 1; i <= min(n, maxReachPos); i++) {
			curMaxReachPos = max(curMaxReachPos, i + nums[i]);
			if (i == n - 1) {
				return curStep;
			}
			if (i == maxReachPos) {
				maxReachPos = curMaxReachPos;
				curStep++;
			}
		}
		return 0;
	}
};

```
*/