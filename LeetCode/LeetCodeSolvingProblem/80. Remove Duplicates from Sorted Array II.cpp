/*
https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

&Title
80. Remove Duplicates from Sorted Array II

&Question
Given a sorted array nums, remove the duplicates i
n-place such that duplicates appeared at most twic
e and return the new length.
Do not allocate extra space for another array, you
 must do this by modifying the input array in-plac
e with O(1) extra memory.
Example 1:
Given nums = [1,1,1,2,2,3],

Your function should return length = 5, with the f
irst five elements of nums being 1, 1, 2, 2 and 3 
respectively.

It doesn't matter what you leave beyond the return
ed length.
Example 2:
Given nums = [0,0,1,1,1,1,2,3,3],

Your function should return length = 7, with the f
irst seven elements of nums being modified to 0, 0
, 1, 1, 2, 3 and 3 respectively.

It doesn't matter what values are set beyond the r
eturned length.
Clarification:
Confused why the returned value is an integer but 
your answer is an array?
Note that the input array is passed in by referenc
e, which means modification to the input array wil
l be known to the caller as well.
Internally you can think of this:
// nums is passed in by reference. (i.e., without 
making a copy)
int len = removeDuplicates(nums);

// any modification to nums in your function would
 be known by the caller.
// using the length returned by your function, it 
prints the first len elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}

*/

/*
#include "header.h"

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		int cnt = 1, i = 1;
		while (i < nums.size()) {
			if (nums[i] == nums[i - 1]) {
				cnt++;
			}
			else {
				cnt = 1;
			}

			if (cnt == 3) {
				nums.erase(nums.begin() + i);
				cnt--;
			}
			else {
				i++;
			}
		}
		if (cnt == 3) {
			nums.erase(nums.begin() + i);
		}

		return nums.size();
    }
};




int main() {
	vector<int> nums = {1,1,1, 2, 2, 3, 3, 3, 3, 4, 5, 5, 5};
	int result = Solution().removeDuplicates(nums);
	for (int i = 0; i < nums.size(); i++)
		cout << nums[i] << " ";
	cout << "\n" << result << endl;
	return 0;
}

*/

/*
&Solution
�׳� �ߺ����� �ϸ� �ɲ��� �����ߴµ� ����� ��뵵 �������� ������ �� �־���..

c++
�̾�.. �̰ɿ� ����������
tar - 2 �� i �� ���ϴ°Ÿ�!!
```
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {

		if (nums.size() <= 1) return nums.size();

		int tar = 2;


		for (int i = 2; i < nums.size(); i++) {

			if (nums[tar - 2] != nums[i]) {
				nums[tar++] = nums[i];
			}

		}

		return tar;
	}
};
```
*/