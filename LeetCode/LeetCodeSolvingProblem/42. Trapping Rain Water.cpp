/*
https://leetcode.com/problems/trapping-rain-water/

&Title
42. Trapping Rain Water

&Question
Given n non-negative integers representing an elev
ation map where the width of each bar is 1, comput
e how much water it is able to trap after raining.

The above elevation map is represented by array [0
,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of 
rain water (blue section) are being trapped. Thank
s Marcos for contributing this image!
Example:
Input: [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6

*/
/*
#include "header.h"
class Solution {
public:
	int trap(vector<int>& height)
	{
		int left = 0, right = height.size() - 1;
		int ans = 0;
		int left_max = 0, right_max = 0;
		while (left < right) {
			if (height[left] < height[right]) {
				height[left] >= left_max ? (left_max = height[left]) : ans += (left_max - height[left]);
				++left;
			}
			else {
				height[right] >= right_max ? (right_max = height[right]) : ans += (right_max - height[right]);
				--right;
			}
		}
		return ans;
	}
};
int main() {
	vector<int> height = { 5,2,1,2,1,5 };
	cout << Solution().trap(height);
}
*/

/*
&Solution
�� ������ ��� ���̿� ���� �󸶸�ŭ �ʺ� ���ϰ��ΰ��� ���ϴ� �����̴�.
÷�� �� ������ ���ϱ�� ������ time limit�ɷȰ�..
���û���ؼ� �ҷ� �ߴµ� 5, 2, 1, 2, 5 �̷� ��� �ذ��� ���ߴ� ��
�ʹ� ��ư� �����ؼ� ������ ��Ǭ�� ����.. Ǯ�̺��ϱ� �׸� ����� ������ ��
C++
��÷�� ��� ���̸� ���ϴ°� �ƴ� �� ������ ���� ���� ���̱��� ���̿� ���ִ� ���� �ʺ� ���ϴ� ������ �ߴµ�
���� ����� ���������� ����. Time Limit�ɷȴ� �Ф�
```
class Solution {
public:
	int trap(vector<int>& height) {
		int max = 0, result = 0;
		for (int i = 0; i < height.size(); i++)
			if (max < height[i])max = height[i];
		int pivot = 0;
		for (int i = 1; i <= max; i++) {
			for (int j = 0; j < height.size(); j++)
				if (height[j] >= i) {
					pivot = j;
					break;
				}
			for (int j = pivot + 1; j < height.size(); j++) {
				if (height[j] >= i) {
					result += (j - pivot - 1);
					pivot = j;
				}
			}

		}

		return result;
	}
};
```

Approach 1 : Brute Force
�ش� �κ��� �ּ� ���̸� ���Ͽ� �����ִ� ���̴�.

C++
```
class Solution {
public:
	int trap(vector<int>& height) {
		int ans = 0;
		for(int i = 1; i < height.size() - 1; i++) {
			int max_left = 0, max_right = 0;
			for(int j = i; j >= 0; j--) {
				max_left = max(max_left, height[j]);
			}
			for(int j = i; j < height.size(); j++) {
				max_right = max(max_right, height[j]);
			}
			ans += min(max_left, max_right) - height[i];
		}
		return ans;
	}
};
```
�ð����⵵ : O(n^2)


Approach 2 : Dynamic Programming

C++
�������κ��� ���� ū ����, ���������κ��� ���� ū ���̸� ����
�ش� �κ��� �ּ� ���̸� �� ���ϴ� �����
��������� ���׷��̵� ����..
�ٵ� ������ �������� �̿��ϴ°� �ƴѵ� �������α׷����̶� �ϳ�?�̰�?
������ 8ms faster than 100% ;;
```
class Solution {
public:
	int trap(vector<int>& height){
		if(height.empty())
			return 0;
		int ans = 0;
		int size = height.size();
		vector<int> left_max(size), right_max(size);
		left_max[0] = height[0];
		for(int i = 1; i < size; i++) {
			left_max[i] = max(height[i], left_max[i-1]);
		}
		right_max[size-1] = height[size -1];
		for(int i = size - 2; i > 0; i--) {
			right_max[i] = max(height[i], right_max[i+1]);
		}
		for(int i = 1; i < size - 1; i++) {
			ans += min(left_max[i], right_max[i]) - height[i];
		}
		return ans;
	}
};

```

�ð����⵵ : O(n)


Approach 3 : Using stack
���ÿ� �ε����� �����Ͽ�
�Ʒ��� ���� �׸�ŭ�� ������ ���� ���ؼ�
���������� ����� ��´�
�̰� ���� ������.

C++
```
class Solution {
public:
	int trap(vector<int>& height){
		int ans = 0, current = 0;
		stack<int> st;
		while(current < height.size()) {
			while(!st.empty() && height[current] > height[st.top()]) {
				int top = st.top();
				st.pop();
				if(st.empty())break;

				int distance = current - st.top() - 1;
				int bound_height = min(height[current], height[st.top()]) - height[top];
				ans += distance * bound_height;
			}
			st.push(current++);
		}
		return ans;
	}
};

```

�ð����⵵ : O(n)


Approach 4 : Using two Pointers

C++
```
class Solution {
public:
	int trap(vector<int>& height){
		int left = 0, right = height.size() - 1;
		int ans = 0;
		int left_max = 0, right_max = 0;
		while(left < right) {
			if(height[left] < height[right]) {
				height[left] >= left_max ? (left_max = height[left]) : ans += (left_max - height[left]);
				++left;
			}
			else {
				height[right] >= right_max ? (right_max = height[right]) : ans += (right_max - height[right]);
				--right;
			}
		}
		return ans;
	}
};
```

�ð����⵵ : O(n)
*/