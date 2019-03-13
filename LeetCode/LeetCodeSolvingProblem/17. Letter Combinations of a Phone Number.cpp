/*
https://leetcode.com/problems/letter-combinations-of-a-phone-number/

&Title
17. Letter Combinations of a Phone Number

&Question
Given a string containing digits from 2-9 inclusiv
e, return all possible letter combinations that th
e number could represent.
A mapping of digit to letters (just like on the te
lephone buttons) is given below. Note that 1 does 
not map to any letters.
Example:
Input: "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd",
 "ce", "cf"].
Note:
Although the above answer is in lexicographical or
der, your answer could be in any order you want.

*/

/*
#include "header.h"

//����Ʈ ���� �ϱ�... 7, 9�϶� 4���־��� ���� 3������ �˰� Ǯ���ٰ� ������..����
string s[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
class Solution {
public:
    vector<string> letterCombinations(string digits) {
		int len = digits.length();
		vector<string> res;
		if (len == 0)return res;
		string z = s[digits[0] - '0'];
		for (int i = 0; i < z.size(); i++) {
			string one(1, z[i]);
			res.push_back(one);
		}
		int max = z.size();
		for (int i = 1; i < len; i++) {
			string val = s[digits[i] - '0'];
			vector<string> temp(res.size() * val.size());
			for (int j = 0; j < res.size(); j++) {
				for (int k = 0; k < val.size(); k++) {
					temp[j*val.size() + k] = res[j];
				}
			}
			
			for (int j = 0; j < max; j++) {
				for (int k = 0; k < val.size(); k++) {
					temp[j*val.size() + k] += val[k];
				}
			}
			max = max * val.size();
			res = temp;
		}
		return res;
    }
};

int main() {
	string s = "72";
	vector<string> res = Solution().letterCombinations(s);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
	return 0;
}
*/


/*
&Solution
���� Ǭ��ó�� for���� ��ø�Ͽ� ������ ũ�⸦ �÷����� Ǫ�� ����� �ְ�

��͸� ���ؼ� Ǫ�°͵� �ִ�. ��Ͱ� Ȯ���� ���ϱ� �ϴ�..

C++
```
class Solution {
public:
	vector<string> letterCombinations(string digits) {
		if (digits.empty()) { return {}; }
		const array<string,10> encoding {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
		string ans;
		vector<string> result;
		letterCombinationsHelper(digits, encoding, ans, result);
		return result;
	}

	void letterCombinationsHelper(string& digits, const array<string,10>& encoding, string& ans, vector<string>& result) {
		if (ans.size() == digits.size()) {
			result.emplace_back(ans);
			return;
		}
		for (const char& c : encoding[digits[ans.size()] - '0']) {
			ans.push_back(c);
			letterCombinationsHelper(digits, encoding, ans, result);
			ans.pop_back();
		}
	}
};
```

*/