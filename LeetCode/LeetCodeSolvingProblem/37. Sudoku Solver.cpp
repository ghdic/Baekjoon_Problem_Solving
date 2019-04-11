/*
https://leetcode.com/problems/sudoku-solver/

&Title
37. Sudoku Solver

&Question
Write a program to solve a Sudoku puzzle by fillin
g the empty cells.
A sudoku solution must satisfy all of the followin
g rules:
Each of the digits 1-9 must occur exactly once in 
each row.
Each of the digits 1-9 must occur exactly once in 
each column.
Each of the the digits 1-9 must occur exactly once
 in each of the 9 3x3 sub-boxes of the grid.
Empty cells are indicated by the character '.'.

A sudoku puzzle...

...and its solution numbers marked in red.
Note:
The given board contain only digits 1-9 and the ch
aracter '.'.
You may assume that the given Sudoku puzzle will h
ave a single unique solution.
The given board size is always 9x9.

*/


#include "header.h"
/*
class Solution {
public:
	void solveSudoku(vector<vector<char>>& board) {
		vector<vector<char>> row, column, rectangle;
		row.resize(9);
		column.resize(9);
		rectangle.resize(9);
		vector<char>::iterator it;
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (board[i][j] != '.') {
					row[i].push_back(board[i][j]);
					rectangle[(i / 3) * 3 + j / 3].push_back(board[i][j]);
				}
				if (board[j][i] != '.') {
					column[i].push_back(board[j][i]);
				}
			}
		}
		bool check = true;
		while (check) {
			check = false; //�ƹ��͵� �ٲ��� ������ �׸�����
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					if (board[i][j] == '.') {
						set<char> s;
						s.insert(row[i].begin(), row[i].end());
						s.insert(column[j].begin(), column[j].end());
						s.insert(rectangle[(i / 3) * 3 + j / 3].begin(), rectangle[(i / 3) * 3 + j / 3].end());
						char val;
						if (s.size() == 8) {
							for (char k = '1'; k <= '9'; k++) {
								set<char>::iterator iter = s.find(k);
								if (iter == s.end()) {
									val = k;
									break;
								}
							}
							board[i][j] = val;
							check = true;
							row[i].push_back(val);
							rectangle[(i / 3) * 3 + j / 3].push_back(val);
							column[j].push_back(val);
						}
					}
				}
			}
		}

		solve(board);
	}

	bool solve(vector<vector<char>>& board) {
		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board[0].size(); j++) {
				if (board[i][j] == '.') {
					for (char c = '1'; c <= '9'; c++) {//trial. Try 1 through 9
						if (isValid(board, i, j, c)) {
							board[i][j] = c; //Put c for this cell

							if (solve(board))
								return true; //If it's the solution return true
							else
								board[i][j] = '.'; //Otherwise go back
						}
					}

					return false;
				}
			}
		}
		return true;
	}
private:
	bool isValid(vector<vector<char>>& board, int row, int col, char c) {
		for (int i = 0; i < 9; i++) {
			if (board[i][col] != '.' && board[i][col] == c) return false; //check row
			if (board[row][i] != '.' && board[row][i] == c) return false; //check column
			if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] != '.' &&
				board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false; //check 3*3 block
		}
		return true;
	}
};


int main() {
	vector<vector<char>> board = {
	{'.','.','9','7','4','8','.','.','.'},
	{'7','.','.','.','.','.','.','.','.'},
	{'.','2','.','1','.','9','.','.','.'},
	{'.','.','7','.','.','.','2','4','.'},
	{'.','6','4','.','1','.','5','9','.'},
	{'.','9','8','.','.','.','3','.','.'},
	{'.','.','.','8','.','3','.','2','.'},
	{'.','.','.','.','.','.','.','.','6'},
	{'.','.','.','2','7','5','9','.','.'}
	};
	
	
	//{
	//		{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
	//		{'6' , '.', '.', '1', '9', '5', '.', '.', '.'},
	//		{'.', '9', '8', '.', '.', '.', '.', '6', '.'},
	//		{'8', '.', '.', '.', '6', '.', '.', '.', '3'},
	//		{'4', '.', '.', '8', '.', '3', '.', '.', '1'},
	//		{'7', '.', '.', '.', '2', '.', '.', '.', '6'},
	//		{'.', '6', '.', '.', '.', '.', '2', '8', '.'},
	//		{'.', '.', '.', '4', '1', '9', '.', '.', '5'},
	//		{'.', '.', '.', '.', '8', '.', '.', '7', '9'}
	//};
	Solution().solveSudoku(board);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++)
			cout << board[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
*/


/*
&Solution
������ Ǯ�� �����̴�. ������������ �̹� ¥�а� �־ ���� ���� �;��µ�...
�Ϲ����� ������� ��Ǫ�� ������ ���� �־���.(8���� ��ġ�� ��� ������ �ϳ� ä��� ������θ� Ǯ �� ���� ��찡 �ִ�.)
���� ������ ����Ǽ��� ��Ʈ��ŷ���� Ǯ���Ѵ�.

���⼭ ������ ����Ǯ���� ��� + ��Ʈ��ŷ�� �ϸ� �� �� �������� ������ �ؼ� �����غô�.

C++
������ ���� § �ҽ�(��û ����...)
��Ʈ��ŷ�� �ϴµ� ���͸� �������� ����ϸ� ���Ҹ� �ְ� ���� ����� �ʹ� Ŀ�� �������� ����.
```
class Solution {
public:
	vector<vector<char>> row, column, rectangle;
	bool init = true, check = false;
	void solveSudoku(vector<vector<char>>& board) {
		if (init) {
			row.resize(9);
			column.resize(9);
			rectangle.resize(9);
			vector<char>::iterator it;
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					if (board[i][j] != '.') {
						row[i].push_back(board[i][j]);
						rectangle[(i / 3) * 3 + j / 3].push_back(board[i][j]);
					}
					if (board[j][i] != '.') {
						column[i].push_back(board[j][i]);
					}
				}
			}
			init = false;
		}

		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (board[i][j] == '.') {
					set<char> s;
					s.insert(row[i].begin(), row[i].end());
					s.insert(column[j].begin(), column[j].end());
					s.insert(rectangle[(i / 3) * 3 + j / 3].begin(), rectangle[(i / 3) * 3 + j / 3].end());
					// s.size == 8 �϶��� �ߴµ� �ϸ� ��Ǫ�� ������ ����...
					// �ϴ� ���ɼ� �ִ°� ����ְ� �ƴϸ� ���ƿ��½�����
					for (char k = '1'; k <= '9'; k++) {
						if (s.find(k) == s.end()) {
							board[i][j] = k;
							row[i].push_back(k);
							rectangle[(i / 3) * 3 + j / 3].push_back(k);
							column[j].push_back(k);
							solveSudoku(board);
							if (check) return;
							board[i][j] = '.';
							row[i].erase(find(row[i].begin(), row[i].end(), k));
							rectangle[(i / 3) * 3 + j / 3].erase(find(rectangle[(i / 3) * 3 + j / 3].begin(), rectangle[(i / 3) * 3 + j / 3].end(), k));
							column[j].erase(find(column[j].begin(), column[j].end(), k));
						}
					}
					if (board[i][j] == '.') return;
				}
			}
		}
		check = true;

	}
};
```


C++
��Ʈ��ŷ �̿��� �������� Ǯ��
```
class Solution {
public:
	void solveSudoku(vector<vector<char>>& board) {
		if (board.empty() || board.size() == 0)
			return;
		solve(board);
	}

	bool solve(vector<vector<char>>& board) {
		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board[0].size(); j++) {
				if (board[i][j] == '.') {
					for (char c = '1'; c <= '9'; c++) {//trial. Try 1 through 9
						if (isValid(board, i, j, c)) {
							board[i][j] = c; //Put c for this cell

							if (solve(board))
								return true; //If it's the solution return true
							else
								board[i][j] = '.'; //Otherwise go back
						}
					}

					return false;
				}
			}
		}
		return true;
	}
private:
	bool isValid(vector<vector<char>>& board, int row, int col, char c) {
		for (int i = 0; i < 9; i++) {
			if (board[i][col] != '.' && board[i][col] == c) return false; //check row
			if (board[row][i] != '.' && board[row][i] == c) return false; //check column
			if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] != '.' &&
				board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false; //check 3*3 block
		}
		return true;
	}
};
```

*/