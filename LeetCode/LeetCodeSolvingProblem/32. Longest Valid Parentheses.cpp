/*
https://leetcode.com/problems/longest-valid-parentheses/

&Title
32. Longest Valid Parentheses

&Question
Given a string containing just the characters '(' 
and ')', find the length of the longest valid (wel
l-formed) parentheses substring.
Example 1:
Input: "(()"
Output: 2
Explanation: The longest valid parentheses substri
ng is "()"
Example 2:
Input: ")()())"
Output: 4
Explanation: The longest valid parentheses substri
ng is "()()"

*/

/*
#include "header.h"

class Solution {
public:
	int longestValidParentheses(string s) {
		int n = s.length(), longest = 0;
		stack<int> st;
		for (int i = 0; i < n; i++) {
			if (s[i] == '(') st.push(i);
			else {
				if (!st.empty()) {
					if (s[st.top()] == '(') st.pop();
					else st.push(i);
				}
				else st.push(i);
			}
		}

		if (st.empty()) longest = n;
		else {
			int a = n, b = 0;
			while (!st.empty()) {
				b = st.top(); st.pop();
				longest = max(longest, a - b - 1);
				a = b;
			}
			longest = max(longest, a);
		}
		return longest;
	}
};

int main() {
	string s = "(()";
	cout << Solution().longestValidParentheses(s);
	return 0;
}
*/

/*
&Solution
�ùٸ� �Ұ�ȣ�� ������ ���� �ִ� ���ӵ� ������ �ִ� ���̴� ���ϴ� �����̴�.
�翬�� �������� �����ϸ� ���� Ǯ���� �˾Ҵµ� '(' �� ���������� ó���� ��ĳ�ϳİ�
�����̿��ٰ� �� �� �ִ�... �� ���Ī �ϴ� ������ ���ÿ� �����ְ� �ϴ°��� �ٽ��̿���..

Approach 1 : using Asymmetry part
���ÿ� �׾ƾ� �� ���� ��Ī���� �ʴ� '(', ')'�� �ε����̴�.
������ ���� ���� ���Ī�� �͵��� �ε����� ���� �Ǵµ�
�̷��� ó�� ���� ���Ī �ε���, ������ ������ ������ ������ ��Ī�� �̷�� �κ��� �ȴ�.
�̷������� Ǭ�� ���� ���� Ǭ �ҽ�.. �Ӹ��ӿ��� ������ ����µ� ������ ������ ��
�Ʒ��� �̸� ������ �������� ������ ã���� ���� max���� ���ϴ� ����̴�.
�ᱹ �ٽ��� �ε����� ���ÿ� �װ� �ش� ������ ���ϴ°�
C++
```
class Solution {
public:
	int longestValidParentheses(string s) {
		stack<int> st;
		st.push(-1);
		int ans = 0;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == '(') {
				st.push(i);
			} else {
				st.pop();
				if(st.empty()) {
					st.push(i);
				} else {
					ans = max(ans, i - st.top());
				}
			}
		}
		return ans;
	}
};
```
�ð����⵵ : O(N)


Approach2 : Dynamic Programming
DP�� �����ϱ⵵ ���鱸.. �ϴ� ��� ����ϱ���.. ����
C++
```
class Solution {
public:
	int longestValidParentheses(string s) {
		if (s.empty() || s.size()==1)
			return 0;
		int maxi = 0;
		vector<int> dp(s.size(), 0);
		for(int i = 1; i<s.size(); i++){
			if(s[i] == ')' && s[i-1] == '(')
				dp[i] = 2 + (i-2>=0 ? dp[i-2]:0);
			else if (s[i] == ')' && s[i-1] == ')')
				if(i-dp[i-1]-1 >=0 && s[i-dp[i-1]-1] == '(')
					dp[i] = dp[i-1] + 2 + (i-dp[i-1]-2>=0 ? dp[i-dp[i-1]-2:0);
					maxi = max(maxi, dp[i]);
				}
				return maxi;
```
�ð����⵵: O(N)
*/