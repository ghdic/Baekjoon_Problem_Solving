/*
https://www.acmicpc.net/problem/1493

&Title
1493�� - �ڽ� ä���

&Question
�����̴� length * width * height ũ���� �ڽ��� 
������ �ִ�. �׸��� �����̴� �� �ڽ��� ť�긦 �̿��ؼ� ä����� 
�Ѵ�. ť��� ������ü ����̸�, �� ���� ���̴� 2�� �������̴�. 
(1*1*1, 2*2*2, 4*4*4, 8*8*8, ...)�����̰� ������ �ִ� �ڽ��� ������ 
ť���� ������ ������ �־����� ��, �ڽ��� ä��µ� �ʿ��� ť���� 
�ּ� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� length width height�� �־�����. �� ��� 
���� 10^6���� �۰ų� ���� �ڿ����̴�. ��° �ٿ� �����̰� ������ 
�ִ� ť���� ������ ���� N�� �־�����. N�� 20���� �۰ų� 
���� �ڿ����̴�. ��° �ٺ��� �� N���� �ٿ� ť���� ���� 
���� ������� �־�����. ť���� ������ �� ���� ���̸� ��Ÿ�� 
�� ���� 2^i���� i�̴�. ������ 10^6���� �۰ų� ���� ���̾ƴ� 
�����̴�. 

&Output
ù° �ٿ� �ʿ��� ť���� ������ �ּҰ��� ����Ѵ�. ���� 
ä�� �� ���ٸ� -1�� ����Ѵ�. 

&Example
-input
4 4 8
3
0 10
1 10
2 1

-output
9


*/

/*
//������ ū�ڽ����� ä�������� ���������� �ڽ��� �� ä�������� ��ä�������� Ȯ��
//3���������� �����ϸ� �������, 2���� �ܸ� ä��� �Ѵٰ� �����ϸ� �����ϱ� �� ����
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int ary[20] = { }, ans = 0, impossible = 0;	//ans : ��, impossible : ��ä�������ִ°� ���°�
void divide(int L, int W, int H)
{
	if (impossible) return;
	int m = 2, p = 0, num, lwh[3];	//m�� ��, p�� ����
	lwh[0] = L, lwh[1] = W, lwh[2] = H;
	sort(lwh, lwh + 3);
	while (pow(m, p + 1) <= lwh[0])	//L,W,H�� ���� ������ ��������
	{
		p++;	//�� �� �ִ� �ִ� ũ���� ���� ������ ���Ѵ�.
	}
	while (ary[p] == 0 && p >= 0)	//pŸ���� ���ڰ� 0���̰ų� p�� �����϶� --��
	{
		p--;
	}
	if (p < 0)	//p�� �����̸� ���̻� �Է� ���� �μ��� �����Ƿ� �Ұ��� ������ ����
	{
		impossible = 1;	//��ü ���� ũ�⸦ �����ϸ� ��͹��� ���̻� ���ư��� �ʱ⶧���� impossible�� ��������
		return;
	}
	num = pow(m, p);	//���� ���� ũ��
	m = min(lwh[2] / num, ary[p]);	//����ū �� �������� ����ũ��� �������� ���� �ִ�
									//���� vs ���� ���� �ִ� �ش� Ÿ���� ���� ���� �ּҰ�
	ary[p] -= m;	//�� ���� ��ŭ ��
	ans += m;
	if (lwh[2] - m * num != 0) divide(num, num, lwh[2] - m * num);	//���ڸ� �ְ� ������ �κп� ���ؼ� ��͹��� ������.
	if (lwh[0] - num != 0) divide(lwh[0] - num, num, lwh[2]);
	if (lwh[1] - num != 0) divide(lwh[0], lwh[1] - num, lwh[2]);
}

int main()
{
	int L, W, H, N, a, b;
	scanf("%d %d %d %d", &L, &W, &H, &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d%d", &a, &b);
		ary[a] = b;//pair��� ���� ���� ����, ���� ������ ��
	}
	divide(L, W, H);
	if (impossible) printf("-1\n");
	else printf("%d\n", ans);

	return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int N, L, W, H;
	pair <int, int> p[21];
	cin >> L >> W >> H;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> p[i].first >> p[i].second;
	}
	sort(p, p + N);
	long long cnt = 0, ans = 0, temp;//L,W,H�ִ��� 10^6�̹Ƿ� long long ���
	p[N] = make_pair(0, 0);	//ó���� 8���ϴ� ���ǹ� Ż���ϱ� ���� �ʱ�ȭ
	for (int i = N - 1; i >= 0; i--) {//ū����� ���� ����
		for(int j=p[i+1].first;j>p[i].first;j--)
			cnt <<= 3;	//ū����� �Ѵ� �����Ͽ����Ƿ� 2^3�� ������


		temp = min((long long)p[i].second,	// ���� ���� �����ִ� ť�� ����, ������ ���� ������� �ִ��� �޲ܼ� �ִ� ť�� ����
			(long long)(L >> p[i].first)*(W >> p[i].first)*(H >> p[i].first) - cnt);
		//�� L,W,H�� ���� 2^p[i].first �� ������

		cnt += temp, ans += temp;//temp�� �ش� ������ ���� ����
		if (i == 0) {//p[0].first�� 0�� �ƴҰ�� ������ ó��
			for (int j = p[i].first; j > 0; j--)
				cnt <<= 3;
		}
	}
	long long result = cnt == (L * W * H) ? ans : -1;
	cout << result << endl;
	return 0;
}
*/