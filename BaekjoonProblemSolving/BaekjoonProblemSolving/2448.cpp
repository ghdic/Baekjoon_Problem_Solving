/*
https://www.acmicpc.net/problem/2448

&Title
2448�� - ����� - 11

&Question
������ ���� ����� ��Ģ�� ������ �ڿ� ���� ���
������.

&Input
ù° �ٿ� N�� �־�����. N�� �׻� 3*2^k ���̴�.
(3, 6, 12, 24, 48, ...) (k<=10)

&Output
ù° �ٺ��� N��° �ٱ��� ���� ����Ѵ�.

&Example
-input
24
-output
					   *
					  * *
					 *****
					*     *
				   * *   * *
				  ***** *****
				 *           *
				* *         * *
			   *****       *****
			  *     *     *     *
			 * *   * *   * *   * *
			***** ***** ***** *****
		   *                       *
		  * *                     * *
		 *****                   *****
		*     *                 *     *
	   * *   * *               * *   * *
	  ***** *****             ***** *****
	 *           *           *           *
	* *         * *         * *         * *
   *****       *****       *****       *****
  *     *     *     *     *     *     *     *
 * *   * *   * *   * *   * *   * *   * *   * *
***** ***** ***** ***** ***** ***** ***** *****

*/

/*
#include <iostream>
void star(int n, int x, int y);

using namespace std;

char arr[3072][6144];

int main() {
	int n, i, j;

	cin >> n;
	//�迭�� ��ȭ
	//�� ������ ���� ��ҵ��� ��������, ���� ���κи� null�� �ʱ�ȭ�Ѵ�.
	for (i = 0; i < n; i++) {
		for (j = 0; j < 2 * n; j++) {
			if (j == 2 * n - 1)arr[i][j] = '\0';
			else arr[i][j] = ' ';
		}
	}
	star(n, n - 1, 0); //�ﰢ���� ���̿�, �ﰢ�� �� �� ������ ��ǥ�� �Ű������� �ѱ��.

	//�ﰢ�� ���
	for (i = 0; i < n; i++) {
		for (j = 0; j < 2 * n - 1; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}

void star(int n, int x, int y) {
	if (n == 3) {//���̰� 3�̶�� ���� ����� ����Ѵ�.
		//���� �׸���.
		arr[y][x] = '*';
		arr[y + 1][x - 1] = '*';
		arr[y + 1][x + 1] = '*';
		arr[y + 2][x - 2] = '*';
		arr[y + 2][x - 1] = '*';
		arr[y + 2][x] = '*';
		arr[y + 2][x + 1] = '*';
		arr[y + 2][x + 2] = '*';
		return;
	}
	star(n / 2, x, y); //���� �ﰢ�� ���̿� �� ����� ��ǥ�� ������.
	star(n / 2, x - (n / 2), y + (n / 2)); //���� �ϴ� �ﰢ�� ���̿� �� �� ����� ��ǥ�� ������.
	star(n / 2, x + (n / 2), y + (n / 2)); //������ �ϴ� �ﰢ�� ���̿� �� �� ����� ��ǥ�� ������.
}
*/

/*
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	string *arr = new string[n];

	arr[0] = "  *  ";
	arr[1] = " * * ";
	arr[2] = "*****";


	for (int i = 1; 3 * (int)pow(2, i) <= n; i++) {
		int border = 3 * (int)pow(2, i);
		int half = border / 2;

		//�Ʒ� �ﰢ���� ������ش�.
		for (int j = border - 1; j >= half; j--) {
			arr[j] = arr[j - half] + " " + arr[j - half];
		}

		//���� �ﰢ���� �о��ش�.
		string space = "";
		while (space.length() < half) {
			space += " ";
		}
		for (int j = half - 1; j >= 0; j--) {
			arr[j] = space + arr[j] + space;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
}
*/