/*
https://leetcode.com/problems/two-sum/

&Title
1. Two Sum

&Question
Given an array of integers, return indices of the 
two numbers such that they add up to a specific ta
rget.
You may assume that each input would have exactly 
one solution, and you may not use the same element
 twice.
Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
 

*/

/*
#include "header.h"


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		vector<int>::iterator i, j;

		for (i = nums.begin(); i != nums.end(); ++i) {
			for (j = i; j != nums.end(); ++j) {
				if (i == j)continue;
				if ((*i + *j) == target) {
					return { distance(nums.begin(), i), distance(nums.begin(), j) };
				}
			}
		}
		return nums;
    }
};


int main() {
	vector<int> nums = { 2, 7, 11, 15 };
	int target = 26;
	cout << Solution().twoSum(nums, target)[0] << " " << Solution().twoSum(nums, target)[1] << endl;
	return 0;
}
*/

/*


Solution

Java Code
���ٹ� 1 : Brute Force
target - x�� �ٸ� ���� ���Ͽ� �ݺ����� ���� ���� ã�´�.

```
public int[] twoSum(int[] nums, int target) {
	for (int i = 0; i < nums.length; i++){
		for (int j = i + 1; j < nums.length; j++) {
			if (nums[j] == target - nums[i]) {
				return new int[] { i, j };
			}
		}
	}
	throw new IllegalArgumentException("No two sum solution");
}
```

�ð����⵵ : O(n^2)


���ٹ� 2 : Two-pass Hash Table
�ؽ� ���̺� ���� Ű��, �ε����� ������ �����Ͽ� ��ҿ� �� ������ �����Ѵ�.
target - nums[i] �� ���� ������ ��ġ�����ν� �ð����⵵�� ���δ�.(�ؽ����̺��� ��ġ �ð����⵵�� O(1)�̴�.)

```
public int[] twoSum(int[] nums, int target){
	Map<Integer, Integer> map = new HashMap<>();
	for (int i =0; i < nums.length; i++){
		map.put(nums[i], i);
	}
	for(int i = 0; i < nums.length; i++){
		int complement = target - nums[i];
		if (map.containsKey(complement) && map.get(complement) != i) {
			return new int[] { i, map.get(complement) };
		}
	}
	throw new IllgalArgumentException("No two sum solution");
}

```

�ð����⵵ : O(n)


���ٹ� 3: One-pass Hash Table
�ؽ����̺� ���� �����ϴ� ������ �ѹ��� ���� �ȿ� ���� ����, ���ٹ� 2�� ���� ����
containsKey�Լ��� �˻��Ҷ� map�� ũ����ü�� �����ͺ��� ������ HashMap�̹Ƿ�
map�� ũ��� ������� ã�� �ӵ��� ����, �Ǿ� ���ҿ� �� �� ������ ���� target�� ��찡 �־��� ��찡 �� ��
for���ϳ��� �����ߴٴ� �Ϳ� ����

```
public int[] twoSum(int[] nums, int target){
	Map<Integer, Integer> map = new HashMap<>();
	for (int i = 0; i < nums.length; i++){
		int complement = target - nums[i];
		if (map.containsKey(complement)){
			return new int[]{ map.get(complement), i };
		}
		map.put(nums[i], i);
	}
	throw new IllegalArugmentException("No two sum solution");
}

```

�ð����⵵ : O(n)

*/