/*
https://www.acmicpc.net/problem/14503

&Title
14503�� - �κ� û�ұ�

&Question
�κ� û�ұⰡ �־����� ��, û���ϴ� ������ ������ ���ϴ� 
���α׷��� �ۼ��Ͻÿ�.�κ� û�ұⰡ �ִ� ��Ҵ� N��M ũ���� ���簢������ ��Ÿ�� 
�� ������, 1��1ũ���� ���簢�� ĭ���� �������� �ִ�. ������ ĭ�� 
�� �Ǵ� �� ĭ�̴�. û�ұ�� �ٶ󺸴� ������ ������, �� 
������ ��, ��, ��, ���� �ϳ��̴�. ������ �� ĭ�� 
(r, c)�� ��Ÿ�� �� �ְ�, r�� �������κ��� ������ ĭ�� 
����, c�� �������� ���� ������ ĭ�� �����̴�.�κ� û�ұ�� ������ 
���� �۵��Ѵ�.���� ��ġ�� û���Ѵ�.���� ��ġ���� ���� ������ �������� ���ʹ������ 
���ʴ�� Ž���� �����Ѵ�. ���� ���⿡ ���� û������ ���� ������ 
�����Ѵٸ�, �� �������� ȸ���� ���� �� ĭ�� �����ϰ� 1������ 
�����Ѵ�.���� ���⿡ û���� ������ ���ٸ�, �� �������� ȸ���ϰ� 2������ 
���ư���.�� ���� ��� û�Ұ� �̹� �Ǿ��ְų� ���� ��쿡��, �ٶ󺸴� 
������ ������ ä�� �� ĭ ������ �ϰ� 2������ ���ư���.�� 
���� ��� û�Ұ� �̹� �Ǿ��ְų� ���̸鼭, ���� ������ ���̶� 
������ �� �� ���� ��쿡�� �۵��� �����.�κ� û�ұ�� �̹� 
û�ҵǾ��ִ� ĭ�� �� û������ ������, ���� ����� �� ����. 


&Input
ù° �ٿ� ���� ũ�� N�� ���� ũ�� M�� 
�־�����. (3 �� N, M �� 50)��° �ٿ� �κ� 
û�ұⰡ �ִ� ĭ�� ��ǥ (r, c)�� �ٶ󺸴� ���� d�� 
�־�����. d�� 0�� ��쿡�� ������, 1�� ��쿡�� ������, 2�� 
��쿡�� ������, 3�� ��쿡�� ������ �ٶ󺸰� �ִ� ���̴�.��° �ٺ��� 
N���� �ٿ� ����� ���°� ���ʺ��� ���� �������, �� ���� 
���ʺ��� ���� ������� �־�����. �� ĭ�� 0, ���� 1�� 
�־�����. ����� ��� �ܰ��� ���̴�.�κ� û�ұⰡ �ִ� ĭ�� ���´� 
�׻� �� ĭ�̴�. 

&Output
�κ� û�ұⰡ û���ϴ� ĭ�� ������ ����Ѵ�. 

&Example
-input
3 3
1 1 0
1 1 1
1 0 1
1 1 1

-output
1

-input
11 10
7 4 0
1 1 1 1 1 1 1 1 1 1
1 0 0 0 0 0 0 0 0 1
1 0 0 0 1 1 1 1 0 1
1 0 0 1 1 0 0 0 0 1
1 0 1 1 0 0 0 0 0 1
1 0 0 0 0 0 0 0 0 1
1 0 0 0 0 0 0 1 0 1
1 0 0 0 0 0 1 1 0 1
1 0 0 0 0 0 1 1 0 1
1 0 0 0 0 0 0 0 0 1
1 1 1 1 1 1 1 1 1 1

-output
57


*/

/*
#include <iostream>
using namespace std;

// U, R, D, L        (0, 1, 2, 3)
int N, M, robot_x, robot_y, robot_direction, moved_area = 0;
int next_x, next_y;
int** map;
int round_val[4][2] = { { -1, 0 },{ 0, 1 },{ 1 , 0 },{ 0, -1 } };

// �������� �̵��� �������� Ȯ���ϴ� �Լ� 
int isBackPossible() {
	// ���� �� 
	next_x = robot_x + round_val[(robot_direction + 2) % 4][0];
	next_y = robot_y + round_val[(robot_direction + 2) % 4][1];

	// ������ ����. 
	if (next_x < 0 || next_x >= N || next_y < 0 || next_y >= M) return 0;
	// ������ ���̴�. 
	else if (map[next_x][next_y] == 1) return 0;
	else {
		return 1;
	}
}

// �ֺ��� ������� Ȯ���ϴ� �Լ� 
int isRoundEmpty() {
	int roundFull = 0;
	for (int i = 0; i < 4; i++) {
		// ���� �� 
		next_x = robot_x + round_val[(robot_direction + i + 3) % 4][0];
		next_y = robot_y + round_val[(robot_direction + i + 3) % 4][1];

		// ������ ����. 
		if (next_x < 0 || next_x >= N || next_y < 0 || next_y >= M) roundFull++;
		// ������ �̹� û�ҵǾ��ִ�.
		else if (map[next_x][next_y] == 7) roundFull++;
		// ������ ���̴�. 
		else if (map[next_x][next_y] == 1) roundFull++;
		// ������ û�ҵǾ����� �ʴ�.
		else if (map[next_x][next_y] == 0) return i;
	}

	if (roundFull == 4) return 0;
}

int howStatusLeft() {
	// ���� �� 
	next_x = robot_x + round_val[(robot_direction + 3) % 4][0];
	next_y = robot_y + round_val[(robot_direction + 3) % 4][1];

	// ������ ����. 
	if (next_x < 0 || next_x >= N || next_y < 0 || next_y >= M) return 2;
	// ������ �̹� û�ҵǾ��ִ�.
	else if (map[next_x][next_y] == 7) return -1;
	// ������ ���̴�. 
	else if (map[next_x][next_y] == 1) return 1;
	// ������ û�ҵǾ����� �ʴ�.
	else if (map[next_x][next_y] == 0) return 0;
}

int move() {
	// 1. ���� ��ġ�� û���Ѵ�. 
	if (map[robot_x][robot_y] == 0) {
		map[robot_x][robot_y] = 7;
		moved_area++;
	}

	// 2. ���� ��ġ���� ���� ������ �������� ���ʹ������ ���ʴ�� Ž���� �����Ѵ�. 
	// - ���� ���⿡ ���� û������ ���� ������ �����Ѵٸ�, �� �������� ȸ���� ���� �� ĭ�� �����ϰ� 1������ �����Ѵ�.
	int left_status = howStatusLeft();
	int is_round_empty = isRoundEmpty();
	if (left_status == 0) {
		// �������� ȸ�� 
		robot_direction = (robot_direction + 3) % 4;
		robot_x = next_x;
		robot_y = next_y;
	}
	// �� ���� ��ΰ� û�� ���ְų� ���� ��쿡�� 
	else if (!is_round_empty) {
		//    - �� ���� ��� û�Ұ� �̹� �Ǿ��ְų� ���� ��쿡��, �ٶ󺸴� ������ ������ ä�� �� ĭ ������ �ϰ� 2������ ���ư���.
		if (isBackPossible()) {
			robot_x = robot_x + round_val[(robot_direction + 2) % 4][0];
			robot_y = robot_y + round_val[(robot_direction + 2) % 4][1];
		}
		//    - �� ���� ��� û�Ұ� �̹� �Ǿ��ְų� ���̸鼭, ���� ������ ���̶� ������ �� �� ���� ��쿡�� �۵��� �����.
		else {
			return 0;
		}
	}
	// - ���� ���⿡ û���� ������ ���ٸ�, �� �������� ȸ���ϰ� 2������ ���ư���.
	else if (left_status == 1 || left_status == -1) {
		// �������� ȸ�� 
		robot_direction = (robot_direction + 3) % 4;
	}

	return 1;
}

int main() {
	cin >> N >> M;
	cin >> robot_x >> robot_y >> robot_direction;

	// �� ����
	map = (int**)malloc(sizeof(int*)*N);
	for (int i = 0; i < N; i++) {
		map[i] = (int*)malloc(sizeof(int)*M);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}

	while (move()) {
	}

	cout << moved_area;

	return 0;
}
*/