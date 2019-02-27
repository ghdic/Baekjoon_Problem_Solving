/*
https://leetcode.com/problems/roman-to-integer/

&Title
13. Roman to Integer

&Question
Roman numerals are represented by seven different 
symbols: I, V, X, L, C, D and M.
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, two is written as II in Roman numeral
, just two one's added together. Twelve is written
 as, XII, which is simply X + II. The number twent
y seven is written as XXVII, which is XX + V + II.
Roman numerals are usually written largest to smal
lest from left to right. However, the numeral for 
four is not IIII. Instead, the number four is writ
ten as IV. Because the one is before the five we s
ubtract it making four. The same principle applies
 to the number nine, which is written as IX. There
 are six instances where subtraction is used:
I can be placed before V (5) and X (10) to make 4 
and 9. 
X can be placed before L (50) and C (100) to make 
40 and 90. 
C can be placed before D (500) and M (1000) to mak
e 400 and 900.
Given a roman numeral, convert it to an integer. I
nput is guaranteed to be within the range from 1 t
o 3999.
Example 1:
Input: "III"
Output: 3
Example 2:
Input: "IV"
Output: 4
Example 3:
Input: "IX"
Output: 9
Example 4:
Input: "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 5:
Input: "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 
4.

*/

/*
#include "header.h"

map<char, int> m = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
class Solution {
public:
    int romanToInt(string s) {
		int result = 0, temp = 0, len = s.length();
		for (int i = 0; i < len - 1; i++) {
			char c = s[i];
			temp += m[c];
			if (c == s[i + 1]) { //���ڰ� ���� ���
				;
			}
			else if (m[c] > m[s[i + 1]]) { //���ڰ� �� ū ���
				result += temp;
				temp = 0;
			}
			else if (m[c] < m[s[i + 1]]) { //���ڰ� �� ���� ���
				result -= temp;
				temp = 0;
			}
		}
		result += temp;
		result += m[s[len - 1]];
		return result;
    }
};

int main() {
	string s = "MCMXCIV";
	cout << Solution().romanToInt(s) << endl;
	return 0;
}
*/

/*
Solution
1. ���� �ӽú����� �����ش�.
2. �������ڰ� ������ �� ū��, �� ������ Ȯ���Ѵ�.
3. ���� ��� �ƹ���ó�� x, �� ū ��� result�� temp�� �����ְ� �ʱ�ȭ, �� ���� ��� result�� temp�� ���ְ� �ʱ�ȭ

�ð����⵵ : O(n)
*/