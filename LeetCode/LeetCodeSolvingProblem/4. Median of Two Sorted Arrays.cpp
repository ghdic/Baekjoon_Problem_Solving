/*
https://leetcode.com/problems/median-of-two-sorted-arrays/

&Title
4. Median of Two Sorted Arrays

&Question
There are two sorted arrays nums1 and nums2 of siz
e m and n respectively.
Find the median of the two sorted arrays. The over
all run time complexity should be O(log (m+n)).
You may assume nums1 and nums2 cannot be both empt
y.
Example 1:
nums1 = [1, 3]
nums2 = [2]

The median is 2.0
Example 2:
nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5

*/

#include "header.h"
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int m = nums1.size();
		int n = nums2.size();
		if (m > n) {
			nums1.swap(nums2);
			swap(m, n);
		}
		int iMin = 0, iMax = m, halfLen = (m + n + 1) / 2;
		while (iMin <= iMax) {
			int partitionX = (iMin + iMax) / 2;
			int partitionY = halfLen - partitionX;
			if (i < iMax && nums2[partitionY - 1] > nums1[partitionX]) {
				iMin = partitionX + 1;
			}
			else if (partitionX > iMin && nums1[partitionX - 1] > nums2[partitionY]) {
				iMax = partitionX - 1;
			}
			else {
				int maxLeft = 0;
				if (partitionX == 0) { maxLeft = nums2[partitionY - 1]; }
				else if (partitionY == 0) { maxLeft = nums1[partitionX - 1]; }
				else { maxLeft = max(nums1[partitionX - 1], nums2[partitionY - 1]); }
				if ((m + n) % 2 == 1) { return maxLeft; }

				int minRight = 0;
				if (partitionX == m) { minRight = nums2[partitionY]; }
				else if (partitionY == n) { minRight = nums1[partitionX]; }
				else { minRight = min(nums2[partitionY], nums1[partitionX]); }

				return (maxLeft + minRight) / 2.0;
			}
		}
		return 0.0;
	}
};

int main() {
	vector<int> nums1 = { 1, 3 }, num2 = { 2 };
	Solution sol;
	double z = sol.findMedianSortedArrays(nums1, num2);
	cout << z << endl;
}

/*
#include "header.h"


// �׳� ���ļ� sort�ؼ� Ǯ����
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> nums3;
		nums3.insert(nums3.end(), nums1.begin(), nums1.end());
		nums3.insert(nums3.end(), nums2.begin(), nums2.end());
		sort(nums3.begin(), nums3.end());
		int length = nums3.size();
		if (length % 2 == 0)
			return (nums3[length / 2 - 1] + nums3[length / 2]) / 2.0;
		else
			return nums3[length / 2];

	}
};

int main() {
	vector<int> nums1 = { 1, 3 }, num2 = { 2 };
	Solution sol;
	double z = sol.findMedianSortedArrays(nums1, num2);
	cout << z << endl;
}
*/

/*
Solution

Python 
���ٹ� : ����� ����
�߾Ӱ��� ���� �����ؾ� �Ѵ�. �߾Ӱ��� �ϳ��� Ư¡�� �� ������
�ΰ��� ���� �ٸ� �������� �����ٴ� ���̴�. ���� ��ҵ��� ���հ� ū ��ҵ��� �������� ���̴�.

�� �迭���� ���� ��ҵ��� ���տ� �����ִ� ��ҵ��̰ų� ū ��ҵ��� ���տ�
�����ִ� ��ҵ��� ���ÿ� ������ �ִ�.

		left_part		|		right_part 
A[0], A[1], ..., A[i-1] | A[i], A[i+1], ..., A[m-1] 
B[0], B[1], ..., B[j-1] | B[j], B[j+1], ..., B[n-1]


left_part�� ���� ��ҵ��� �����̰� right_part�� ū ��ҵ��� �����̴�.
�� ������ �̿��Ͽ� ������ ���� ������ �� �ִ�.

1. len(left_part) = len(right_part) //�̷��� �ǵ��� �����ϴ� ���̴�.
2. max(left_part) <= min(right_part) //�̰�

left_part�� ũ�Ⱑ right_part�� ũ�Ⱑ ����. �̰��� �ڸ��ϴ�.
�� ��° ������ ����Ѵ�, �ֳ��ϸ� ������ left_part���� ��Ҵ� right_part�� ��Һ��� �۱� �����̴�.

�̰� �� ������ �������� ���� ������ ����.

1. i+j = m-i+n-j 
(if n>=m, i=0~m, j=(m+n+1)/2 - i�� �����Ѵ�.)
2. B[j-1]<=A[i] and A[i-1] <= B[j]

�̰���
[0,m] ��������
B[j-1] <= A[i] and A[i-1] <=B[j], where j = (m+n+1)/2 - i
�� �������� �ǹ��Ѵ�.

```
def median(A, B):
	m, n = len(A), len(B)
	if m > n:
		A, B, m, n = B, A, n, m; #�̰� �ǳ�...?
	if n == 0:
		raise ValueError

	imin, imax, half_len = 0, m, (m + n + 1) / 2
	while imin <= imax:
		i = (imin + imax) / 2
		j = half_len - i
		if i < m and B[j-1] > A[i]:
			# i is too small, must increase it
			imin = i + 1
		elif i > 0 and A[i-1] > B[j]:
			# i is too big, must decrease it
			imax = i - 1
		else:
			# i is perfect
			if i == 0: max_of_left = B[j-1]
			elif j == 0: max_of_left = A[i-1]
			else: max_of_left = max(A[i-1], B[j-1])

			if (m + n) % 2 == 1:
				return max_of_left

			if i == m: min_of_right = B[j]
			elif j == n: min_of_right = A[i]
			else: min_of_right = min(A[i], B[j])

			return (max_of_left + min_of_right) / 2.0
```

���ذ� �Ȱ��� ���󺸰� �����߰�
https://www.youtube.com/watch?v=LPFhl65R7ww

1. ũ�Ⱑ �� ������ X, �� ū�� Y �迭�� �����Ѵ�.
2. start = 0(iMin), end = m(iMax), partitionX = (start+end)/2, partitionY = (m+n+1)/2 - partitionX ���� �� ����
3. A1 | A2
   B1 | B2
   ���� A1 < A2�� �������� ������ start = partitionX + 1 �� �����ϰ� ����
   B1 < B2�� �������� ������ end = partitionX - 1 �� �����ϰ� ����
4. ���� �ΰ��� array �� ������ ��Ƽ�ǿ� ���Ұ� ���� ��� �ش� ��Ƽ���� -INF or INF ���Ұ� �ִ°ɷ� �����Ѵ�.
5. 3���� �����ɶ�, �� �迭�� ���Ҽ����� ¦���� ��� avg(max(A1, B1), min(A2, B2))�̰�, Ȧ���� ��� max(A1,B1)�̴�.
```
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int m = nums1.size();
		int n = nums2.size();
		if (m > n) {
			nums1.swap(nums2);
			swap(m, n);
		}
		int iMin = 0, iMax = m, halfLen = (m + n + 1) / 2;
		while (iMin <= iMax) {
			int partitionX = (iMin + iMax) / 2;
			int partitionY = halfLen - partitionX;
			if (i < iMax && nums2[partitionY - 1] > nums1[partitionX]) {
				iMin = partitionX + 1;
			}
			else if (partitionX > iMin && nums1[partitionX - 1] > nums2[partitionY]) {
				iMax = partitionX - 1;
			}
			else {
				int maxLeft = 0;
				if (partitionX == 0) { maxLeft = nums2[partitionY - 1]; }
				else if (partitionY == 0) { maxLeft = nums1[partitionX - 1]; }
				else { maxLeft = max(nums1[partitionX - 1], nums2[partitionY - 1]); }
				if ((m + n) % 2 == 1) { return maxLeft; }

				int minRight = 0;
				if (partitionX == m) { minRight = nums2[partitionY]; }
				else if (partitionY == n) { minRight = nums1[partitionX]; }
				else { minRight = min(nums2[partitionY], nums1[partitionX]); }

				return (maxLeft + minRight) / 2.0;
			}
		}
		return 0.0;
	}
};
```

*/