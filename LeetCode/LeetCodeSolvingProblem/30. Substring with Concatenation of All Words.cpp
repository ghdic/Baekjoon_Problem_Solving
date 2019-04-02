/*
https://leetcode.com/problems/substring-with-concatenation-of-all-words/

&Title
30. Substring with Concatenation of All Words

&Question
You are given a string, s, and a list of words, wo
rds, that are all of the same length. Find all sta
rting indices of substring(s) in s that is a conca
tenation of each word in words exactly once and wi
thout any intervening characters.
Example 1:
Input:
  s = "barfoothefoobarman",
  words = ["foo","bar"]
Output: [0,9]
Explanation: Substrings starting at index 0 and 9 
are "barfoor" and "foobar" respectively.
The output order does not matter, returning [9,0] 
is fine too.
Example 2:
Input:
  s = "wordgoodgoodgoodbestword",
  words = ["word","good","best","word"]
Output: []

*/

/*
#include "header.h"

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
		vector<int> ans;
		int n = s.size(), cnt = words.size();
		if (n <= 0 || cnt <= 0) return ans;

		unordered_map<string, int> dict;
		for (int i = 0; i < cnt; ++i)dict[words[i]]++;

		int wl = words[0].size();
		//�ܾ� ���� ��ŭ�� ����
		for (int i = 0; i < wl; ++i) {
			int left = i, count = 0;
			unordered_map<string, int> tdict;
			//i���� �ܾ���� ������ s���̱��� ����
			for (int j = i; j <= n - wl; j += wl) {
				string str = s.substr(j, wl);

				// dict�ȿ� ��ġ�ϴ� Ű�� �ִ� ��� 1��ȯ ���� ��� 0 ��ȯ�ϴ� �Լ�
				// ���� ��� ��� ��ġ�ϴ��� ��ȯ������ �ʴµ�..
				// �� �պκ��� substr�Ѱ� dict�ȿ� �ִ��� Ȯ����
				if (dict.count(str)) {
					// �ʱ�ȭ�� �ڵ����� 0���� �ǳ���..?
					tdict[str]++;
					if (tdict[str] <= dict[str])
						count++;
					else {
						while (tdict[str] > dict[str]) {
							//������ ���� �������� ���� ��ġ�ߴ��� �������Ѽ� ī��Ʈ�� ���δ�.
							string str1 = s.substr(left, wl);
							tdict[str1]--;
							if (tdict[str1] < dict[str1])count--;
							left += wl;
						}
					}

					//��� ����
					if (count == cnt) {
						ans.push_back(left);
						// �ϳ��� �ܾŭ ������Ų��
						tdict[s.substr(left, wl)]--;
						count--;
						left += wl;
					}
				}
				// ��ȿ�� �ܾ �ƴ� ��� �� �ʱ�ȭ
				else {
					tdict.clear();
					count = 0;
					left = j + wl;
				}
			}
		}
		return ans;
    }
};


int main() {
	string s = "barfoothefoobarman";
	vector<string> words = { "foo", "bar" };
	vector<int> result;
	result = Solution().findSubstring(s, words);
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << " ";
	return 0;
}
*/

/*
&Solution
Substring���� ���ӵ� �������� �ѹ��� ���� ���� ��ġ��
��ȯ�ϴ°� ��ǥ�̴�.

���� �����غ���
1. Substring �ϳ��ϳ� �� �� �غ�(Brute Force)
2. Substring�� ������ ��� ����� ���� ���� ���͸� �����.(������ �ʱ� �񱳱��� ��������.)
3. KMP�˰������� �� Substring�� ��ġ�� ���� ���͸� ������, �ش� ���ͷ� �ش��� ã��
- �̹� �ѹ� ���ȰͿ� ���� ó���� ������ ���Ϳ���
����Ѱ� �����ϴ� ���ΰ� ���� ������ ��ȿ�����ϰŰ���..

!�ܾ��� ���̰� ��� ���ٴ°� s�Ǳ��̴� �ܾ��Ǳ����� ����� �Ǵ°žƴѰ�?
n�� ������ ��� �˻��ϸ�??

�س��� �ҽ� ���� Ǯ ��� ��� �ұ�...?
1. ���� �ҽ��� �״�� ���� �ĺ���.
2. �ҽ��� �м��ϸ� �ּ��� �ܴ�.
3. ������� �غ���.
4. �Ⱥ��� �ٽ� ¥����
*/