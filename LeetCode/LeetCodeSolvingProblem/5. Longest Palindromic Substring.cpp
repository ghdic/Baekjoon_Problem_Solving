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

�ð����⵵ O(n^2)

���ٹ� 5: Manacher's Algorithm
���� O(n)�� �ð����⵵�� ���� �˰�����
45�и��� �̷��� �˰������� �ڵ��ϱ� �ƹ��� ������� ����
������ �˾Ƶθ� �ſ� ���������
*/