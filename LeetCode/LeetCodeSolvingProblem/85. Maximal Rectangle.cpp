/*
https://leetcode.com/problems/maximal-rectangle/

&Title
85. Maximal Rectangle

&Question
Given a 2D binary matrix filled with 0's and 1's, 
find the largest rectangle containing only 1's and
 return its area.
Example:
Input:
{
  {'1','0','1','0','0'},
  {'1','0','1','1','1'},
  {'1','1','1','1','1'},
  {'1','0','0','1','0'}
}
Output: 6

*/

/*
#include "header.h"

class Solution {
private:
	int getMax(vector<int> &heights, vector<int> &stack, int size) {
		int cur = 0, max = 0, top = 0;
		stack[top] = -1;
		for (int i = 0; i < size; ++i) {
			while (top > 0 && heights[stack[top]] > heights[i]) {
				cur = (i - stack[top - 1] - 1) * heights[stack[top]];
				top--;
				if (cur > max)max = cur;
			}
			stack[++top] = i;
		}
		return max;
	}
public:
	int maximalRectangle(vector<vector<char>>& matrix) {
		int rowSize = matrix.size();
		if (!rowSize) return 0;
		int colSize = matrix[0].size();
		vector<int> heights(colSize + 1, 0);
		vector<int> stack(colSize + 2, 0);
		int largest;
		for (int r = 0; r < rowSize; ++r) {
			for (int c = 0; c < colSize; ++c)
				matrix[r][c] == '1' ? heights[c]++ : heights[c] = 0;
			largest = max(largest, getMax(heights, stack, colSize + 1));
		}
		return largest;
	}
};

int main() {

	vector<vector<char>> matrix =
	{
	{'1', '0', '1', '0', '0'},
	{'1', '0', '1', '1', '1'},
	{'1', '1', '1', '1', '1'},
	{'1', '0', '0', '1', '0'}
		};

	cout << Solution().maximalRectangle(matrix) << endl;
	return 0;
}
*/

/*
&Solution
��... �ʹ� ������� �ش��� �ô�.
heights��� 1���� �迭�� �ش� row������ ���̸� ��´�.
�߰��� 0�� �� ��� ���̰� 0���� �ʱ�ȭ �ȴ�.

getMax�Լ��� ������
������ Ư�� ������ �ε����� ������� �� ���� ���� ���� �ε����� ���������� �ݺ�
stack�� index�� ��� ������ �Ѵ�. �ڱ⺸�� ���ʿ� �� ū�� �ִٸ� �ش� �ε����� ���� ��� �� pop�� �ǹ���
�׷��� ���� ���� �ǳ� �� �� ����
��� ��������height[i]���� �� Ŭ ��� �ڷ� �ϳ� ������ �� �簢�� ���� ��� ����... 
*/