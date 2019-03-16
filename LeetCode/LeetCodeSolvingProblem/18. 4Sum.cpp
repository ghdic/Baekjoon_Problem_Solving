/*
https://leetcode.com/problems/4sum/

&Title
18. 4Sum

&Question
Given an array nums of n integers and an integer t
arget, are there elements a, b, c, and d in nums s
uch that a + b + c + d = target? Find all unique q
uadruplets in the array which gives the sum of tar
get.
Note:
The solution set must not contain duplicate quadru
plets.
Example:
Given array nums = [1, 0, -1, 0, -2, 2], and targe
t = 0.

A solution set is:
[
  [-1,  0, 0, 1],
  [-2, -1, 1, 2],
  [-2,  0, 0, 2]
]

*/
/*
#include "header.h"
//��Ʈ��ŷ�� �̿��� Ǭ�Ŷ�µ�... ������ �а� �ٸ�����..
class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		vector<vector<int>>res;
		vector<int>path;
		DFS(res, nums, 0, target, 0, 0, path);
		return res;
	}

	void DFS(vector<vector<int>>& res, vector<int>& nums, int pos, int target, int count, int sum, vector<int>& path) {
		if (count == 4) {
			if (sum == target) res.push_back(path);
			return;
		}
		for (int i = pos; i < nums.size(); i++) {
			if (i != pos && nums[i] == nums[i - 1]) continue;//�ߺ��� �����ΰ�� ����
			if (sum + nums[i] + (3 - count) * nums[nums.size() - 1] < target) continue;
			//���� ū���� ������(3-count)�迡 �������� ���Ѱ� target���� ������ ������ ���°ŷ� ����
			if (sum + (4 - count)* nums[i] > target) break;//���� ���� ���� �� �谡 �Ȱ� target���� ũ�� ���̻� �������ʿ䰡 ����
			path.push_back(nums[i]);
			DFS(res, nums, i + 1, target, count + 1, sum + nums[i], path);
			path.pop_back();
		}
	}
};

int main() {
	vector<int> nums = { 1, 0, -1, 0, -2, 2 };
	int target = 0;
	vector<vector<int>> v = Solution().fourSum(nums, target);
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << " ";
		cout << "\n";
	}
	return 0;
}

*/


/*
Solution


�ٽ��� N-sum�� 2-sum���� ���̴� ��͸� �����ϴ°Ͱ� �ΰ��� �����ͷ� �����Ѱ��� ã�°��̴�.
Python
```
def fourSum(self, nums, target):
	nums.sort()
	results = []
	self.findNsum(nums, target, 4, [], results)
	return results

def findNsum(self, nums, target, N, result, results):
	if len(nums) < N or N < 2: return

	# solve 2-sum
	if N == 2:
		l,r = 0,len(nums)-1
		while l < r:
			if nums[l] + nums[r] == target:
				results.append(result + [nums[l], nums[r]])
				l += 1
				r -= 1
				while l < r and nums[l] == nums[l - 1]:
					l += 1
				while r > l and nums[r] == nums[r + 1]:
					r -= 1
			elif nums[l] + nums[r] < target:
				l += 1
			else:
				r -= 1
	else:
		for i in range(0, len(nums)-N+1):   # careful about range
			if target < nums[i]*N or target > nums[-1]*N:  # take advantages of sorted list
				break
			if i == 0 or i > 0 and nums[i-1] != nums[i]:  # recursively reduce N
				self.findNsum(nums[i+1:], target-nums[i], N-1, result+[nums[i]], results)
	return
```


�ٽ� �湮�ϰ� Ŭ���ϴ� �ڵ�
```
def fourSum(self, nums, target):
	def findNsum(nums, target, N, result, results):
		if len(nums) < N or N < 2 or target < nums[0]*N or target > nums[-1]*N:  # early termination
			return
		if N == 2: # two pointers solve sorted 2-sum problem
			l,r = 0,len(nums)-1
			while l < r:
				s = nums[l] + nums[r]
				if s == target:
					results.append(result + [nums[l], nums[r]])
					l += 1
					while l < r and nums[l] == nums[l-1]:
						l += 1
				elif s < target:
					l += 1
				else:
					r -= 1
		else: # recursively reduce N
			for i in range(len(nums)-N+1):
				if i == 0 or (i > 0 and nums[i-1] != nums[i]):
					findNsum(nums[i+1:], target-nums[i], N-1, result+[nums[i]], results)

	results = []
	findNsum(sorted(nums), target, 4, [], results)
	return results
```

 
���� �� ������, �����̽� ���� ���� ���
```
def fourSum(self, nums, target):
	def findNsum(l, r, target, N, result, results):
		if r-l+1 < N or N < 2 or target < nums[l]*N or target > nums[r]*N:  # early termination
			return
		if N == 2: # two pointers solve sorted 2-sum problem
			while l < r:
				s = nums[l] + nums[r]
				if s == target:
					results.append(result + [nums[l], nums[r]])
					l += 1
					while l < r and nums[l] == nums[l-1]:
						l += 1
				elif s < target:
					l += 1
				else:
					r -= 1
		else: # recursively reduce N
			for i in range(l, r+1):
				if i == l or (i > l and nums[i-1] != nums[i]):
					findNsum(i+1, r, target-nums[i], N-1, result+[nums[i]], results)

	nums.sort()
	results = []
	findNsum(0, len(nums)-1, target, 4, [], results)
	return results
```


*/