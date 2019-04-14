/*
https://leetcode.com/problems/combination-sum/

&Title
39. Combination Sum

&Question
Given a set of candidate numbers (candidates) (wit
hout duplicates) and a target number (target), fin
d all unique combinations in candidates where the 
candidate numbers sums to target.
The same repeated number may be chosen from candid
ates unlimited number of times.
Note:
All numbers (including target) will be positive in
tegers.
The solution set must not contain duplicate combin
ations.
Example 1:
Input: candidates = [2,3,6,7], target = 7,
A solution set is:
[
  [7],
  [2,2,3]
]
Example 2:
Input: candidates = [2,3,5], target = 8,
A solution set is:
[
  [2,2,2,2],
  [2,3,3],
  [3,5]
]

*/

/*
#include "header.h"

class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, const int& target) {
		sort(begin(candidates), end(candidates));
		vector<vector<int>> result;
		vector<int> path; 
		this->combinationSum(result, 0, path, target, candidates);
		return result;
	}
private:
	void combinationSum(vector<vector<int>>& result, const int& start, vector<int>& path, const int& target, const vector<int>& candidates) {
		if (target < 0)
			return;
		else if (target == 0) {
			if (path.empty())
				return;
			else {
				result.push_back(path);
				return;
			}
		}
		else {
			for (int i = start; i < candidates.size(); i++) {
				path.push_back(candidates[i]);
				this->combinationSum(result, i, path, target - candidates[i], candidates);
				path.pop_back();
			}
			return;
		}
	}
};


int main() {
	vector<int> candidates = { 2, 3, 6, 7 };
	int target = 7;
	vector<vector<int>> v = Solution().combinationSum(candidates, target);
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
*/

/*
&Solution
��Ʈ��ŷ ������� target - ������ ���� 0���� ������ Ŭ��, 0 �϶��� ��쿡 ���� ó������� ������.
���� return true�ϴ� ������� �Ϸ� �ߴµ� tr == 0 �� �� ��� �׳� ���� ������ push_back �ϴ°� ���� ������ ����..
�׸��� �ߺ��� �����ϱ� ���� start�� ���� ���� ��µ� ��� ������ ���߳� ~~
*/