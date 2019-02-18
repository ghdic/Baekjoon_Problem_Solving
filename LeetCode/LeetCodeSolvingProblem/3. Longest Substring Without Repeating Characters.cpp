/*
https://leetcode.com/problems/longest-substring-without-repeating-characters/

&Title
3. Longest Substring Without Repeating Characters

&Question
Given a string, find the length of the longest sub
string without repeating characters.
Example 1:
Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length 
of 3. 
Example 2:
Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of
 1.
Example 3:
Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length 
of 3. 
             Note that the answer must be a substr
ing, "pwke" is a subsequence and not a substring.

*/

/*
#include "header.h"

// �ΰ��� �Ǻ��� ���� �������Ǻ��� �ϳ��� �����̸�, ���� ���ڰ� ���� ��� ���� �Ǻ��� �ش� ���� �ִ� ������ �����δ�.
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		
		unordered_set<char> m;
		int length = s.length();
		int best = 0;
		int lpivot = 0, rpivot = 0;
		while (rpivot< length) {
			char item = s[rpivot];
			if (m.find(item) == m.end()) { //���� ���� ������
				rpivot++;
				m.insert(item);
			}
			else {
				while (m.find(item) != m.end()) {
					int present = rpivot - lpivot;
					if (best < present)
						best = present;
					m.erase(s[lpivot]);
					lpivot++;
				}
				m.insert(item);
				rpivot++;
			}
				
		}
		int present = rpivot - lpivot;
		if (best < present) //������ ����� �˻�
			best = present;
		
		return best;
    }
};

int main() {
	Solution sol;
	string s = "abcabcbb";
	int zz = sol.lengthOfLongestSubstring(s);
	cout << zz << endl;
	return 0;
}
*/

/*
Solution

Java Code

���ٹ� 1: Brute Force
��� substring�� �ߺ��� char�� ������ �˻��Ѵ�.
	1. string���� ���� �־��� substring�� �����Ѵ�.
	2. substring���� ���� �ߺ��� ���ڸ� �˻��Ѵ�.


```
public class Solution {
	public int LengthOfLongestSubstring(String s) {
		int n = s.length();
		int ans = 0;
		for (int i = 0; i < n; i++)
			for (int j = 1 + 1; j <= n; j++)
				if (allUnique(s, i, j)) ans = Math.max(ans, j - i);
		return ans;
	}

	public boolean allUnique(String s, int start, int end) {
		Set<Character> set = new HashSet<>();
		for (int i = start; i < end; i++) {
			Character ch = s.charAt(i);
			if(set.contains(ch)) return false;
			set.add(ch);
		}
		return true;
	}
}
```

�ð����⵵ O(n^3)

���ٹ� 2 : Sliding Window
�̹� �ߺ��Ȱŷ� Ȯ�� �� ���ڿ��� �� Ȯ�� �� �ʿ䰡 ����.
HashSet�� �̿��ϸ� find�� O(1)�� �ð����⵵�� ���ȴ�.
���� ���� §��ó�� �Ǻ� ��� i, j�� ����Ͽ� �ϳ��� �����δ�.

```
public class Solution {
	public int lengthOfLongestSubstring(String s) {
		int n = s.length();
		Set<Character> set = new HashSet<>();
		int ans = 0, i = 0, j = 0;
		while ( i < n && j < n) {
			// try to extend to range [ i, j ]
			if (!set.contains(s.charAt(j))) {
				set.add(s.charAt(j++));
				ans = Math.max(ans, j - 1);
			}
			else {
				set.remove(s.charAt(i++));
			}
		}
		return ans;
	}
}
```

�ð����⵵ : O(2n) = O(n)

���ٹ� 3: Sliding Window Optimized
O(2n)�� O(n)���� ���ϼ� ���� HashMap�Ǵ� ASCII�迭�� ����Ͽ� �����ϸ� ���̴�.
���� �ѰŶ� �����. Hash_Set�� ����������

HashMap ����Ҷ�
```
public class Solution {
	public int lnegthOfLongestSubstring(String s) {
		int n = s.length(), ans = 0;
		Map<Character, integer> map = new HashMap<>();
		// try to extend the range [i, j]
		for (int j = 0, i = 0; j < n; j++) {
			if(map.containsKey(s.charAt(j))) { //�ߺ��� ���ڿ��� ������ ������ i�� ������Ʈ
				i = Math.max(map.get(s.charAt(j)), i);
			}
			ans = Math.max(ans, j - i + 1);
			map.put(s.charAt(j), j + 1);
		}
		return ans;
	}
}

```

int[26] for Letters 'a' - 'z' or 'A' - 'Z'
int[128] for ASCII
int[256] for Extend ASCII

ASCII �ڵ带 ����Ҷ�
```
public class Solution {
	public int lengthOfLongestSubstring(String s) {
		int n = s.length(), ans = 0;
		int[] index = new int[128];

		for( int j = 0, i = 0; j < n; j++) {
			i = Math.max(index[s.charAt(j)], i);
			ans = Math.max(ans, j - i + 1);
			index[s.charAt(j)] = j + 1;
		}
		return ans;
	}
}
```

�ð����⵵ : O(n)
*/