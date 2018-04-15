/*
https://www.acmicpc.net/problem/5063

&Title
TGN
&Question
����̴� TGN���� �����̴�. TGN�� Teenager Game Network�� ���� ������, ��� Temporary Group Name�� �����̴�.

�� ȸ��� û�ҳ��� ���� ���� ����� ȸ���̴�. �ϳ⿡ ��ģ ���߱Ⱓ ���� ���� ���� �ϼ��߰�, ���� �ȱ⸸ �ϸ� �ȴ�.

����̴� ����Ʈ�� �ΰ��� �γ��� ������ �� ���� ������ ���� �Ѵ�. ���� ��û�� ����Ʈ ����� �ʿ��ϴ�. ����̴� ���� ������ �ؼ� ������ �ִ��� �ø����� �Ѵ�.

����� �ϴ��� �ٶ󺸴� ����̴� �ø��콺�� ����� �ް� �Ǿ���, ���� ȿ���� �����ϴ� �ɷ��� ���� �Ǿ���.

���� ȿ���� �־����� ��, ���� �ؾ����� ���ƾ����� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٿ� �׽�Ʈ ���̽��� ���� N�� �־�����. ���� N���� �ٿ��� 3���� ���� r, e, c�� �־�����. r�� ���� ���� �ʾ��� �� ����, e�� ���� ���� ���� ����, c�� ���� ����̴�. (-106 �� r,e �� 106, 0 �� c �� 106)
&Output
�� �׽�Ʈ ���̽��� ���ؼ�, ���� �ؾ� �ϸ� "advertise", ���� �ʾƾ� �ϸ� "do not advertise", ���� �ص� ������ ���̰� ���ٸ� "does not matter"�� ����Ѵ�.
&Example
-input
3
0 100 70
100 130 30
-100 -70 40
-output
advertise
does not matter
do not advertise
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	int r, e, c;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> r >> e >> c;
		if (c < e - r)cout << "advertise" << endl;
		else if (c == e - r)cout << "does not matter" << endl;
		else cout << "do not advertise" << endl;
	}
	return 0;
}
*/