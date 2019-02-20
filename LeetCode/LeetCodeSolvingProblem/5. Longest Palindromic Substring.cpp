/*
https://leetcode.com/problems/longest-palindromic-substring/

&Title
5. Longest Palindromic Substring

&Question
Given a string s, find the longest palindromic sub
string in s. You may assume that the maximum lengt
h of s is 1000.
Example 1:
Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.
Example 2:
Input: "cbbd"
Output: "bb"

*/

/*
#include "header.h"

bool compare(tuple<int, int> t1, tuple<int, int> t2) { //���� �Լ�
	int gap1 = get<1>(t1) - get<0>(t1);
	int gap2 = get<1>(t2) - get<0>(t2);
	return gap1 > gap2;
}

// ���� ������ ��ġ�� ���Ϳ� ��Ƽ� ���ݿ� ���� ���͸� �����, ������ ū������ �������� �����Ͽ� ȸ�ͼ��� �˻��Ѵ�.
class Solution {
private:
	bool palindromicCheck(string s) {
		int start = 0, end = s.length() - 1;
		while (start < end) {
			if (s[start] != s[end])
				return false;
			start++;
			end--;
		}
		return true;
	}

public:
	string longestPalindrome(string s) {
		unordered_map<char, vector<int> > map;
		for (int i = 0; i < s.length(); i++)
			map[s[i]].push_back(i);
		vector<tuple<int, int> > order; //����, ��
		for (unordered_map<char, vector<int> >::iterator i = map.begin(); i != map.end(); ++i) {
			vector<int> v = i->second;
			if (v.size() == 0) continue;
			int count = 0;
			for (vector<int>::iterator j = v.begin(); j != v.end() - 1; ++j, count++) {
				for (int k = 1; k < v.size() - count; k++) {
					int start = *j;
					int end = *(j + k);
					order.push_back(make_tuple(start, end));
				}
			}
		}
		sort(order.begin(), order.end(), compare);
		for (vector<tuple<int, int> >::iterator i = order.begin(); i < order.end(); ++i) {
			if (palindromicCheck(s.substr(get<0>(*i), get<1>(*i) - get<0>(*i) + 1))) {
				return s.substr(get<0>(*i), get<1>(*i) - get<0>(*i) + 1);
			}
		}
		return s.substr(0, 1);
	}
};

int main() {
	string s = "babad";
	string subs = Solution().longestPalindrome(s);
	cout << subs << endl;
	return 0;
}
*/

/*
Solution

���ٹ� 1 : Longest Common Substring
���� ���� �� ������ ���� ����� ã���� �װ� ȸ���� �� ���� �� ���ɼ��� �ִ� ���Դϴ�.
���ڿ� S, S�� ������ S'���� ���� �� ȸ������ ã�ƺ��ô�.
���� ��� S = "caba", S' = "abac" �϶�
S�� S'�� "aba"��� ����� ȸ�� substring�� ���� �ֽ��ϴ�.
S = "abacdfgdcaba", S' = "abacdgfdcaba" �϶�
"abacd��� ����� ȸ�͸� ���� ������ �̰� Ÿ���� ȸ�Ͱ� �ƴմϴ�.

```
class Solution {
public:
	string longestPalindrome(string s) {
		int start = 0;
		int maxLength = 1;
		string res;

		if(s.lnegth() == 1)
			return s;
		int low, high,
		for (int i = 1; i < s.length(); ++i){
			low = i - 1;
			high = i;
			while (low >=0 && high < s.length() && s[low] == s[high]){
				if(high - low + 1 > maxLength){
					start = low;
					maxLength = high - low + 1;
				}
				--low;
				++high;
			}
		}
		res = s.substr(start, maxLength);
	return res;
	}
};
```

�ð����⵵ : O(n^2) (���� ���⵵�� O(n^2)�̶��)
���ٹ� 2 : Brute Force
��� ������ substr����Ʈ�� ȸ�ͼ��� �˻��Ѵ�.

C++
```
class Solution {
public:
	string longestPalindrome(string s) {
		int l = s.length();
		if(l == 1)
			return s;
		int maxlen = 0;
		string maxsubstr;
		for(int i = 0; i < l; i++) {
			for(int len = 1; len <= l - i; len++) {
				if(ispalindrome(s.substr(i, len))){
					int temp = s.substr(i, len).length();
					if(temp>maxlen) {
						maxlen = temp;
						maxsubstr = s.substr(i, len);
					}
				}
			}
		}
		return maxsubstr;
	}

	bool ispalindrome(string s) {
		int l = s.length();
		for(int i = 0; i < l/2; i++)
			if(s[i] != s[l-1-i])
				return false;
		return true;
	}
}
```
�ð����⵵ : O(n^3)

���ٹ� 3: ���� ���α׷���
"bab"���� "ababa"�� �����ϴܰ� Ȯ�� �Ҷ� �糡�� a�� Ȯ���ϸ� �ȴٴ°� �����غ���.

P(i, j) =
true, if thee subsring Si, ..., Sj is a
false, otherwise

�׷��Ƿ�
P(i, j) = (P(i + 1, j - 1) and Si == Sj)

�⺻ ������ �̷��ϴ�.
P(i, i) = true
P(i, i+1) = (Si == S(i+1))

Java
```
public String longestPalindrome(String s) {
	int n = s.length();
	String res = null;

	boolean[][] dp = new boolean[n][n];

	for (int i = n - 1; i >= 0; i--) {
		for (int j = i; j < n; j++) {
			dp[i][j] = s.charAt(i) == s.charAt(j) && (j - i < 3 || dp[i + 1][j - 1]);

			if (dp[i][j] && (res == null || j - i + 1 > res.length())) {
				res = s.substring(i, j + 1);
			}
		}
	}

	return res;
}
```

�ð����⵵ : O(n^2)

���ٹ� 4: Expand Around Center
ȸ�͹��� �߰��������� Ȯ���� ������ �����غ���.
�̰��� 2n-1��ŭ�� ������ �ϸ� �ȴ�.

Java
```
public String longestPalindrome(String s) {
	if (s == null || s.length() < 1)
		return "";
	int start = 0, end = 0;
	for (int i = 0; i < s.length(); i++){
		int len1 = expandAroundCenter(s, i, i); // �߰� ���ڿ��� �ϳ��� ���
		int len2 = expandAroundCenter(s, i, i+1); // �߰� ���ڿ��� ���Ƽ� �ΰ��� ���
		if(len > end - start) {
			start = i - (len - 1) / 2; // �߰� ���ڿ��κ��� ù, ���� ��ġ
			end = i + len / 2;
		}
	}
	return s.substring(start, end + 1)
}

private int expandAroundCenter(String s, int left, int right) {
	int L = left, R = right;
	while(L >= 0 && R < s.length() && s.charAt(L) == s.charAt(R)){
		L--;
		R++;
	}
	return R-L-1;
}

```

C++
```
string longestPalindrome(string s) {
	const int size_s = s.size();
	int max_s = 0, max_l = 0;
	for(int i = 0; i < size_s;) {
		int start = i, end = i;
		while(end + 1 < size_s && s[end] == s[end+1]) end++;
		i = end + 1;
		while(start - 1 >= 0 && end + 1 < size_s && s[start-1] == s[end+1]) {
			start--;
			end++;
		}
		if(end - start + 1 > max_l) {
			max_l = end - start + 1;
			max_s = start;
		}
	}
	return s.substr(max_s, max_l);
}
```

�ð����⵵ O(n^2)

���ٹ� 5: Manacher's Algorithm
���� O(n)�� �ð����⵵�� ���� �˰�����
45�и��� �̷��� �˰������� �ڵ��ϱ� �ƹ��� ������� ����
������ �˾Ƶθ� �ſ� ���������

C++
```
string longestPalindrome(string s) {
	if(s.empty()) return "";
	string prep = "#";
	for(auto ch : s) {prep += ch; prep += "#";}
	const int size_p = prep.size();
	vector<int> dp(size_p, 0);
	int center = 0, bCur = 0;
	for(int i =0; i < size_p; i++){
		int mirror = center - (i - center);
		dp[i] = bCur <= i ? 0 : min(bCur - i, dp[mirror]);
		int start = i - dp[i], end = i + dp[i];
		while (start - 1 >= 0 && end + 1 < size_p && prep[start - 1] == prep[end + 1]) {
			--start;
			++end;
			++dp[i];
		}
		if(i + dp[i] > bCur) {
			bCur = i + dp[i];
			center = i;
		}
	}
	center = max_element(dp.begin(), dp.end()) - dp.begin();
	return s.substr((center - dp[center])/2, dp[center]);
}
```
*/