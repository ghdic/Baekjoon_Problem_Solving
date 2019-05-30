/*
https://leetcode.com/problems/minimum-window-substring/

&Title
76. Minimum Window Substring

&Question
Given a string S and a string T, find the minimum 
window in S which will contain all the characters 
in T in complexity O(n).
Example:
Input: S = "ADOBECODEBANC", T = "ABC"
Output: "BANC"
Note:
If there is no such window in S that covers all ch
aracters in T, return the empty string "".
If there is such window, you are guaranteed that t
here will always be only one unique minimum window
 in S.

*/

#include "header.h"
/*
class Solution {
public:
    string minWindow(string s, string t) {
		if (t.length() == 0)return "";
		unordered_map<char, int> alpha, beta;
		int m = s.length() + 1;
		string result = "";
		for (int i = 0; i < t.length(); i++)
			alpha[t[i]]++;
		int start = 0, end = 0;
		for(;end < s.length(); end++){
			char c = s[end];
			if (alpha.find(c) != alpha.end()) {
				beta[c]++;
			}
			
			
			bool check = true;
			for (auto j : alpha) {
				if (j.second > beta[j.first]) {
					check = false;
					break;
				}
			}
			if (check) {
				int prev;
				do {
					prev = start;
					c = s[start];
					if (alpha.find(c) != alpha.end()) {
						if (beta[c] > alpha[c]) {
							beta[c]--;
							start++;
						}
					}
					else {
						start++;
					}
				} while (prev != start);


				if (end - start + 1 < m) {
					m = end - start + 1;
					result = s.substr(start, m);
				}
			}
		}
		return result;
    }
};

int main() {
	string s = "ADOBECODEBANC", t = "ABC";
	cout << Solution().minWindow(s, t) << endl;
	return 0;
}
*/

/*
&Solution
�ڷ� Ȯ���س����� ��� ���� ������ front�� �������� �ּ��� ��츦 ã�� ���������� ������� Ǯ����.
���� ��û ������...

C++
���� >0�� �������� counter�� 0�� �ɶ����� �����°Ͱ�..
start�� ������ ������ ���������°�..(������ end�� �ϳ��� �����̹Ƿ� start�� �ϳ� �������൵ �ּ� ���̿� ������ ������!)
�� �ΰ��� ����� ���� �ذ���� ����� �ƴѰ� �ʹ�.
```
class Solution {
public:
	string minWindow(string s, string t) {
		vector<int> v(128, 0);
		for(auto c:t) v[c]++;
		int start=0, end=0, counter=t.size();
		int minStart=0, minLen=INT_MAX;
		int len=s.size();
		while(end<len){
			if(v[s[end]]>0)  counter--;
			v[s[end]]--;
			end++;
			while(counter==0){
				if(end-start<minLen){
					minStart=start;
					minLen=end-start;
				}
				v[s[start]]++;
				if(v[s[start]]>0)  counter++;
				start++;
			}
		}
		if(minLen!=INT_MAX)
			return s.substr(minStart, minLen);
		return "";
	}
};
```
*/