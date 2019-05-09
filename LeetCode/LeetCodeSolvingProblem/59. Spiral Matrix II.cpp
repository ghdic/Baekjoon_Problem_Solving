/*
https://leetcode.com/problems/spiral-matrix-ii/

&Title
59. Spiral Matrix II

&Question
Given a positive integer n, generate a square matr
ix filled with elements from 1 to n2 in spiral ord
er.
Example:
Input: 3
Output:
[
 [ 1, 2, 3 ],
 [ 8, 9, 4 ],
 [ 7, 6, 5 ]
]

*/

/*
#include "header.h"

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
		vector<vector<int>> matrix(n, vector<int>(n));
		int rowBegin, rowEnd, colBegin, colEnd, cnt;
		rowBegin = colBegin = cnt = 0;
		rowEnd = colEnd = n - 1; //�ѹ��� �̷��� �Ҵ��ϴ°� �޸� �� ����ϳ�...? �����Ҷ����� �־��ִ°ź���...
		while (rowBegin <= rowEnd && colBegin <= colEnd) {
			//������
			for (int i = colBegin; i <= colEnd; i++)
				matrix[rowBegin][i] = ++cnt;
			rowBegin++;

			//�Ʒ�
			for (int i = rowBegin; i <= rowEnd; i++)
				matrix[i][colEnd] = ++cnt;
			colEnd--;

			//����
			for (int i = colEnd; i >= colBegin; i--)
				matrix[rowEnd][i] = ++cnt;

			rowEnd--;

			//��
			for (int i = rowEnd; i >= rowBegin; i--)
				matrix[i][colBegin] = ++cnt;

			colBegin++;
		}
		return matrix;
    }
};

int main() {
	vector<vector<int>> matrix;
	matrix = Solution().generateMatrix(3);
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix.size(); j++)
			cout << matrix[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
*/
/*
�׳� ���� ���� Ǭ��� �״�� �ϸ� ��
*/