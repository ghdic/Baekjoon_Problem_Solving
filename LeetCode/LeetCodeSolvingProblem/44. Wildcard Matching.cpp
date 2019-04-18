/*
https://leetcode.com/problems/wildcard-matching/

&Title
44. Wildcard Matching

&Question
Given an input string (s) and a pattern (p), imple
ment wildcard pattern matching with support for '?
' and '*'.
'?' Matches any single character.
'*' Matches any sequence of characters (including 
the empty sequence).
The matching should cover the entire input string 
(not partial).
Note:
s could be empty and contains only lowercase lette
rs a-z.
p could be empty and contains only lowercase lette
rs a-z, and characters like ? or *.
Example 1:
Input:
s = "aa"
p = "a"
Output: false
Explanation: "a" does not match the entire string 
"aa".
Example 2:
Input:
s = "aa"
p = "*"
Output: true
Explanation: '*' matches any sequence.
Example 3:
Input:
s = "cb"
p = "?a"
Output: false
Explanation: '?' matches 'c', but the second lette
r is 'a', which does not match 'b'.
Example 4:
Input:
s = "adceb"
p = "*a*b"
Output: true
Explanation: The first '*' matches the empty seque
nce, while the second '*' matches the substring "d
ce".
Example 5:
Input:
s = "acdcb"
p = "a*c?b"
Output: false

*/

/*
#include "header.h"

class Solution {
private:
	bool helper(const string &s, const string &p, int si, int pi, int &recLevel)
	{
		int sSize = s.size(), pSize = p.size(), i, curLevel = recLevel;
		bool first = true;
		while (si < sSize && (p[pi] == s[si] || p[pi] == '?')) { ++pi; ++si; } //match as many as possible
		if (pi == pSize) return si == sSize; // if p reaches the end, return
		if (p[pi] == '*')
		{ // if a star is met
			while (p[++pi] == '*'); //skip all the following stars
			if (pi >= pSize) return true; // if the rest of p are all star, return true
			for (i = si; i < sSize; ++i)
			{   // then do recursion
				if (p[pi] != '?' && p[pi] != s[i]) continue;
				if (first) { ++recLevel; first = false; }
				if (helper(s, p, i, pi, recLevel)) return true;
				if (recLevel > curLevel + 1) return false; // if the currently processed star is not the last one, return
			}
		}
		return false;
	}
public:
	bool isMatch(string s, string p) {
		int recLevel = 0;
		return helper(s, p, 0, 0, recLevel);
	}
};

int main() {
	string s = "cb", p = "?b";
	cout << Solution().isMatch(s, p);
	
	return 0;
}
*/

/*
&Solution
�̰� ������ Ǯ��ô�...���� �����ΰ� ������ ��..


Approach 1: Backtracking
fater than 99.8% O(n+m)
C���� ¥�����ǵ� c_str�Լ� �Ἥ C++�� ���� ����(�Ѱ����� �μ��� string���θ� ���ָ� ��������)
��Ʈ��ŷ ������� ����Լ��� ���� �ʰ� �������¸� �����ͷ� �����Ͽ� ®��.
���� ����ϴ�.. ���� ����� ����
C++
```
class Solution {
public:
	bool isMatch(string st, string pt) {
		const char* s = st.c_str(), *p = pt.c_str();
		const char* star = NULL;
		const char* ss = s;
		while (*s) {
			// '?' �� ��ġ�� s, p�� ���������ش�.
			//*p�� ���̸� �ѱ�� �������� �ʴ����� �ָ��϶�.(�翬�� '\0'���״ϱ�?)
			if ((*p == '?') || (*p == *s)) { s++; p++; continue; }

			// ������ *�� ��� star�� ���� ������ �����ϰ� ����, ss�� ���� s�� �����Ѵ�(s���������ϳ�?!!(0����ġ�� ��쵵 �ֱ⶧��!))
			if (*p == '*') { star = p++; ss = s; continue; }

			//���� ���ڰ� ��ġ���� ������, ���� ���Ͽ� *�� ���� p��s�� �����Ѵ�(�̶� ss�� �����Ѵ�(��? ���� ���ڵ� ��ġ���� ���� �� �ֱ⶧��!)
			if (star) { p = star + 1; s = ++ss; continue; }

			//star == NULL�� ���� *�� �������� �ʴ´ٴ� ���̴�.
			//��� ���ڵ� ��ġ���� �ʴ´�.
			return false;
		}

		//���� ��Ī�� �ִ��� Ȯ���Ѵ�.
		while (*p == '*') { p++; }

		//���� ��Ī�� �ִ� ��� false
		//���� ��Ī�� ���� ��� true
		return !*p;
	}
};
```

�̰� c++ string���� §�� index�� �����ؼ� �߳�
```
class Solution {
public:
	bool isMatch(string s, string p) {
		int  slen = s.size(), plen = p.size(), i, j, iStar=-1, jStar=-1;

		for(i=0,j=0 ; i<slen; ++i, ++j)
		{
			if(p[j]=='*')
			{ //meet a new '*', update traceback i/j info
				iStar = i;
				jStar = j;
				--i;
			}
			else
			{
				if(p[j]!=s[i] && p[j]!='?')
				{  // mismatch happens
					if(iStar >=0)
					{ // met a '*' before, then do traceback
						i = iStar++;
						j = jStar;
					}
					else return false; // otherwise fail
				}
			}
		}
		while(p[j]=='*') ++j;
		return j==plen;
	}
};
```


Approach2 : Dynamic programming
��ƴ� �����

C++
��¥���� DP �ҽ� faster than 80%
```
class Solution {
public:
	bool isMatch(string s, string p) {
		int pLen = p.size(), sLen = s.size(), i, j, k, cur, prev;
		if(!pLen) return sLen == 0;
		bool matched[2][sLen+1];
		fill_n(&matched[0][0], 2*(sLen+1), false);

		matched[0][0] = true;
		for(i=1; i<=pLen; ++i)
		{
			cur = i%2, prev= 1-cur;
			matched[cur][0]= matched[prev][0] && p[i-1]=='*';
			if(p[i-1]=='*') for(j=1; j<=sLen; ++j) matched[cur][j] = matched[cur][j-1] || matched[prev][j];
			else for(j=1; j<=sLen; ++j)            matched[cur][j] =  matched[prev][j-1] && (p[i-1]=='?' || p[i-1]==s[j-1]);
		}
			return matched[cur][sLen];
	}
};
```


C++
���ظ��ϰھ�... DP �ʸ� ��ƴ�
O(n*m)
```
class Solution {
public:
	bool isMatch(string s, string p) {
		const int m = s.length();
		const int n = p.length();
		vector<bool> prev(n + 1, false);
		prev[0] = true;
		for (int j = 1; j <= n; j++)
			prev[j] = prev[j - 1] && p[j - 1] == '*'; // �ڽŰ� �տ� �κ��� *�ΰ�� true�� �ٲپ���
		for (int i = 1; i <= m; i++) {
			vector<bool> cur(n + 1, false);
			for (int j = 1; j <= n; j++) {
				if (p[j - 1] == '*') {
					cur[j] = cur[j - 1] || prev[j];
				}
				else {
					cur[j] = prev[j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '?');
				}
			}
			prev = cur;
		}
		return prev[n];
	}
};
```

Approach 3 : Greedy
�ּ��� ���� �����ϴ� �˰���

C++
faster than 98%
```
class Solution {
private:
	bool helper(const string &s, const string &p, int si, int pi, int &recLevel)
	{
		int sSize = s.size(), pSize = p.size(), i, curLevel = recLevel;
		bool first=true;
		while(si<sSize && (p[pi]==s[si] || p[pi]=='?')) {++pi; ++si;} //match as many as possible
		if(pi == pSize) return si == sSize; // if p reaches the end, return
		if(p[pi]=='*')
		{ // if a star is met
			while(p[++pi]=='*'); //skip all the following stars
			if(pi>=pSize) return true; // if the rest of p are all star, return true
			for(i=si; i<sSize; ++i)
			{   // then do recursion
				if(p[pi]!= '?' && p[pi]!=s[i]) continue;
				if(first) {++recLevel; first = false;}
				if(helper(s, p, i, pi, recLevel)) return true;
				if(recLevel>curLevel+1) return false; // if the currently processed star is not the last one, return
			}
		}
		return false;
	}
public:
	bool isMatch(string s, string p) {
		int recLevel = 0;
		return helper(s, p, 0, 0, recLevel);
	}
};
```
*/