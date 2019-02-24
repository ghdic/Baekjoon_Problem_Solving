/*
https://leetcode.com/problems/zigzag-conversion/

&Title
6. ZigZag Conversion

&Question
The string "PAYPALISHIRING" is written in a zigzag
 pattern on a given number of rows like this: (you
 may want to display this pattern in a fixed font 
for better legibility)
P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make th
is conversion given a number of rows:
string convert(string s, int numRows);
Example 1:
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:

P     I    N
A   L S  I G
Y A   H R
P     I

*/

/*
#include "header.h"

class Solution {
public:
    string convert(string s, int numRows) {
		if (numRows == 1)
			return s;
		string *zigzag = new string[numRows];
		bool pos = true;
		int num = 0;
		int len = s.length();
		for (int i = 0; i < len; i++) {
			if (pos == true) {
				zigzag[num++] += s[i];
				if (num == numRows - 1) pos = false;
			}
			else {
				zigzag[num--] += s[i];
				if (num == 0) pos = true;
			}
		}
		string result;
		for (int i = 0; i < numRows; i++)
			result += zigzag[i];
		return result;
    }
};

int main() {
	string s = "ABCDEF";
	int numRows = 1;
	cout << Solution().convert(s, numRows) << endl;
	return 0;
}
*/

/*
���ٹ� 1: Sort by Row
ù��° ����� ���� §�Ͱ� �Ȱ���. ���ڿ��� ���� ������ �����ϰ�
���ʷ� �ش� �迭�� �� ���ھ� �־��ִ� ���̴�.

C++
```
class Solution {
pulic:
	string conver(string s, int numRows) {
		if (numRows == 1) return s;

		vector<string> rows(min(numRows, int(s.size())));
		int curRow = 0;
		bool = goingDown = false;

		for (char c : s) {
			rows[curRow] += c;
			if(curRow == 0 || curRow == numRows - 1)
				goingDonw = !goinDown;
			curRow += goingDown ? 1 : -1;
		}
		string ret;
		for (string row : rows) ret += row;
		return ret;
	}
};
```

�ð����⵵ O(n)
Approach 2: Visit by Row
���� for������ �ش� ���� �켱������ ������ ��������
������ ��Ģ�� ���� ���Ѵ�.

C++
```
class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 1) return s;

		string ret;
		int n = s.size();
		int cycleLen = 2 * numRows - 2;

		for(int i = 0; i < numRows; i++) {
			for(int j = 0; j + i < n; j += cycleLen) {
				ret += s[j + i];
				if (i != 0 && i != numRows - 1 && j + cycleLen - i < n)
					ret += s[j + cycleLen - i];
				}
			}
			return ret;
		}
	};
```

�ð����⵵ : O(n)
*/