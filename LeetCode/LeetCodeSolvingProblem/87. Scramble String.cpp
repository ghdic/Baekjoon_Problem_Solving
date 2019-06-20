/*
https://leetcode.com/problems/scramble-string/

&Title
87. Scramble String

&Question
Given a string s1, we may represent it as a binary
 tree by partitioning it to two non-empty substrin
gs recursively.
Below is one possible representation of s1 = "grea
t":
    great
   /    \
  gr    eat
 / \    /  \
g   r  e   at
           / \
          a   t
To scramble the string, we may choose any non-leaf
 node and swap its two children.
For example, if we choose the node "gr" and swap i
ts two children, it produces a scrambled string "r
geat".
    rgeat
   /    \
  rg    eat
 / \    /  \
r   g  e   at
           / \
          a   t
We say that "rgeat" is a scrambled string of "grea
t".
Similarly, if we continue to swap the children of 
nodes "eat" and "at", it produces a scrambled stri
ng "rgtae".
    rgtae
   /    \
  rg    tae
 / \    /  \
r   g  ta  e
       / \
      t   a
We say that "rgtae" is a scrambled string of "grea
t".
Given two strings s1 and s2 of the same length, de
termine if s2 is a scrambled string of s1.
Example 1:
Input: s1 = "great", s2 = "rgeat"
Output: true
Example 2:
Input: s1 = "abcde", s2 = "caebd"
Output: false

*/
/*
#include "header.h"


class Solution {
public:
    bool isScramble(string s1, string s2) {
		if (s1 == s2)return true;
		int len = s1.length();
		int count[26] = {};
		for (int i = 0; i < len; i++) {
			count[s1[i] - 'a']++;
			count[s2[i] - 'a']--;
		}
		for (int i = 0; i < 26; i++)	// ���ĺ� ������ ���� ������ false
			if (count[i] != 0)return false;
		for (int i = 1; i <= len - 1; i++) {
			if (isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i), s2.substr(i)))
				return 1;	// i �������� ©������ �����ϸ� ok
			if (isScramble(s1.substr(0, i), s2.substr(len - i)) && isScramble(s1.substr(i), s2.substr(0, len - i)))
				return 1;	// i �������� ©���µ� s2�� �ڿ������� ©������ �����ϸ� ok
		}
		return 0;
    }
};

int main() {
	string s1 = "abb", s2 = "bab";
	cout << Solution().isScramble(s1, s2) << endl;
	return 0;
}
*/

/*
���� ������ �� �����ѵ�..
����Ʈ���� �ݾ� ©�� ��ȯ �����Ҷ���� �����ߴµ�
������ �ƴ� ��𿡼��� ¥�� �� �ִٰ� �ΰ������� �־����...
*/