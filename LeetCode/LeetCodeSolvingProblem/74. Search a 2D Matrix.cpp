/*
https://leetcode.com/problems/search-a-2d-matrix/

&Title
74. Search a 2D Matrix

&Question
Write an efficient algorithm that searches for a v
alue in an m x n matrix. This matrix has the follo
wing properties:
Integers in each row are sorted from left to right
.
The first integer of each row is greater than the 
last integer of the previous row.
Example 1:
Input:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 3
Output: true
Example 2:
Input:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 13
Output: false

*/

/*
#include "header.h"

class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		if (matrix.empty())
			return false;
		int i = 0;
		int j = matrix[i].size() - 1;
		while (i >= 0 && i < matrix.size() && j >= 0 && j < matrix[i].size()) {

			if (matrix[i][j] > target) {
				j--;
			}
			else if (matrix[i][j] < target) {
				i++;
			}
			else
				return true;
			
		}
		return false;
	}
};

int main() {
	vector<vector<int>> matrix = { {1,3,5,7},{10,11,16,20},{23,30,34,50} };

	int target = 11;
	cout << Solution().searchMatrix(matrix, target) << endl;
	return 0;
}
*/

/*
&Solution
��ó�� �ܼ� ���Ͽ� ��ġ�� ã�ư��� ��� ez�ϰ� ������...

����Ž���� �翬�� ������ �˾Ҵµ� ���̴�.

C++
����Ž���� �̿��ߴµ� �� ȹ�����̴�.
���� �ʺ�, ���̿� ���� ����Ž���� �����ߴµ�
�ִ� n*m�� ���� ����Ž���� �����ߴ�. �ϳ��� ��� �����Ѱ�..
�������� 1���� �迭�� ����� �����ߴٰ� ���� �ɰͰ���.
÷�� ������ ������ �ڵ�� �����ϸ� �̸� �Ǵ±��� ����
```
class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
	// treat the matrix as an array, just taking care of indices
	// [0..n*m]
	// (row, col) -> row*n + col
	// i -> [i/n][i%n]
	if(matrix.empty() || matrix[0].empty())
	{
		return false;
	}
	int m = matrix.size(), n = matrix[0].size();
	int start = 0, end = m*n - 1;
	while(start <= end)
	{
		int mid = start + (end - start)/2;
		int e = matrix[mid/n][mid%n];
		if(target > e)
		{
			start = mid + 1;
		}
		else if(target < e)
		{
			end = mid - 1;
		}
		else
		{
			return true;
		}
	}
	return false;
}
};
```
*/