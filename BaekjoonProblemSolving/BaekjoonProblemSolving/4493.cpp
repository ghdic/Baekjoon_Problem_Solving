/*
https://www.acmicpc.net/problem/4493

&Title
4493�� - ���� ���� ��?

&Question
���� ���� ���� �� ���̼� �ϴ� �����̴�. ���� 
�̸� ���س��� �� ��ŭ ������ �ϰ�, ���� ������ �̱� 
����� ���� ���ڰ� �ȴ�. ���� ���� ���� �� Ƚ���� 
�Ź� �� ���� ������ �´����� �־����� ��, ���� ���ڸ� 
����ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ ������ �̱��. ������ ���� �̱��. 
���� ������ �̱��. 

&Input
ù° �ٿ��� �׽�Ʈ ���̽��� ���� t(0 < t 
< 1000)�� �־�����. �� �׽�Ʈ ���̽��� ù° �ٿ��� ���� 
���� ���� �� Ƚ�� n(0 < n < 100)�� 
�־�����. ���� n���� �ٿ��� R, P, S�� �������� ���еǾ� 
�־�����. R, P, S�� ������� ����, ��, �����̰� ù��° 
���ڴ� Player 1�� ����, �ι�° ���ڴ� Player 2�� �����̴�. 


&Output
�� �׽�Ʈ ���̽��� ���ؼ� ���ڸ� ����Ѵ�. (Player 1 
�Ǵ� Player 2) ����, ����� ��쿡�� TIE�� ����Ѵ�. 

&Example
-input
3
2
R P
S R
3
P P
R S
S R
1
P R

-output
Player 2
TIE
Player 1


*/

/*
#include <cstdio>
using namespace std;

int change(char c) {
if (c == 'R') {
return 0;
}
else if (c == 'S') {
return 1;
}
else {
return 2;
}
}
int main() {
int N;
scanf("%d", &N);
for (int i = 0; i < N; i++) {
int z, winA = 0, winB = 0;
scanf("%d", &z);

char a, b;
for (int j = 0; j < z; j++) {
scanf(" %c %c", &a, &b);
int x = change(a), y = change(b);
if (x == (y + 1) % 3) {
winB++;
}
else if ((x + 1) % 3 == y) {
winA++;
}
}
if (winA > winB)
printf("Player 1\n");
else if (winA == winB)
printf("TIE\n");
else
printf("Player 2\n");
}
return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int t;
	char winning[3][2] = { { 'S', 'P' },{ 'R', 'S' },{ 'P', 'R' } };
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		char player1, player2;
		int score1 = 0, score2 = 0;
		for (int i = 0; i < n; i++) {
			cin >> player1 >> player2;
			for (int j = 0; j < 3; j++) {
				if (winning[j][0] == player1 && player2 == winning[j][1])
					score1++;
				if (winning[j][0] == player2 && player1 == winning[j][1])
					score2++;
			}
		}
		if (score2 > score1) cout << "Player 2" << endl;
		else if (score1 > score2) cout << "Player 1" << endl;
		else cout << "TIE" << endl;

	}
	return 0;
}
*/