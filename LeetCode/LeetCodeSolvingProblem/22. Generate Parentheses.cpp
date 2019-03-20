/*
https://leetcode.com/problems/generate-parentheses/

&Title
22. Generate Parentheses

&Question
Given n pairs of parentheses, write a function to 
generate all combinations of well-formed parenthes
es.
For example, given n = 3, a solution set is:
[
  "((()))",
  "(()())",
  "(())()",
  "()(())",
  "()()()"
]

*/

#include "header.h"

class Solution {
	vector<string> result;
	string k = "";
public:
    vector<string> generateParenthesis(int n) {
		recursiveGenerateParenthesis(n, n);
		return result;
    }
private:
	void recursiveGenerateParenthesis(int l, int r) {
		
		if (l == 0 && r == 0) {
			result.push_back(k);
			return;
		}
		if (l == 0 && r != 0) {
			k.push_back(')');
			recursiveGenerateParenthesis(l, r - 1);
			k.pop_back();
		}
		else if (l < r) {
			k.push_back('(');
			recursiveGenerateParenthesis(l - 1, r);
			k.pop_back();
			k.push_back(')');
			recursiveGenerateParenthesis(l, r - 1);
			k.pop_back();
		}
		else {
			k.push_back('(');
			recursiveGenerateParenthesis(l - 1, r);
			k.pop_back();
		}
	}
};

int main() {
	vector<string> v = Solution().generateParenthesis(3);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";
	return 0;
}

/*
&Solution

Approach 1: Brute Force
������ ���� �˻縦 ���ֹǷμ� ��� ����� ���� Brute force�ϴ� ���
python
```
class Solution(object):
	def generateParenthesis(self, n):
		def generate(A = []):
			if len(A) == 2*n:
				if valid(A):
					ans.append("".join(A))
			else:
				A.append('(')
				generate(A)
				A.pop()
				A.append(')')
				generate(A)
				A.pop()

		def valid(A):
			bal = 0
			for c in A:
				if c == '(': bal += 1
				else: bal -= 1
				if bal < 0: return False
			return bal == 0

		ans = []
		generate()
		return ans
```

Approach 2: Backtracking
���� �� ��İ� ����.. if �ΰ��� ������ ���ǹ��� ������ �� �� �ִٴ� �x..

Python
```
class Solution(object):
	def generateParenthesis(self, N):
		ans = []
		def backtrack(S = '', left = 0, right = 0):
			if len(S) == 2 * N:
				ans.append(S)
				return
			if left < N:
				backtrack(S+'(', left+1, right)
			if right < left:
				backtrack(S+')', left, right+1)

		backtrack()
		return ans
```

Approach 3: Closure Number
"( left ) right �÷� ��͸� ���� left, right ���� ä������
python
```
class Solution(object):
	def generateParenthesis(self, N):
		if N == 0: return ['']
		ans = []
		for c in xrange(N):
			for left in self.generateParenthesis(c):
				for right in self.generateParenthesis(N-1-c):
					ans.append('({}){}'.format(left, right))
		return ans
```
*/


