/*
https://www.acmicpc.net/problem/1085

&Title
1085�� - ���簢������ Ż��

&Question
�Ѽ��� ���� (x, y)�� �ִ�. ���簢���� ���� �Ʒ� 
�������� (0, 0)�� �ְ�, ������ �� �������� (w, h)�� 
�ִ�. ���簢���� ��輱���� ���� �Ÿ��� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 


&Input
ù° �ٿ� x y w h�� �־�����. w�� 
h�� 1,000���� �۰ų� ���� �ڿ����̰�, x�� 1���� ũ�ų� ����, 
w-1���� �۰ų� ���� �ڿ����̰�, y�� 1���� ũ�ų� ����, h-1���� 
�۰ų� ���� �ڿ����̴�. 

&Output
ù° �ٿ� ������ ������ ����Ѵ�. 

&Example
-input
6 2 10 3
-output
1

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int X = x > w - x ? w - x : x;
	int Y = y > h - y ? h - y : y;
	printf("%d\n", X > Y ? Y : X);

	return 0;
}
*/