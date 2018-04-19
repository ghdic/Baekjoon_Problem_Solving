/*
https://www.acmicpc.net/problem/1408

&Title
24
&Question
�����̴� Counter Terror Unit (CTU)���� ���ϴ� Ư������̴�. �����̴� ��� ����� ��Ȯ�ϰ� 24�ð��� �Ǵ� ���� �ذ��ϴ� ������ �����ϴ�. �����̴� 1�ð� ���� ������ ���� �� �־ ���� �ʴ´�. ��Ȯ�ϰ� 24�ð��� �Ǵ� ������ �ƴϸ� ���� �ʴ� CTU Ư������̴�.
2008�� 3�� 3�� ������, CTU�� ���б⿡ ���� ����ź�� �����ڴٴ� �׷� ������ �Լ��ߴ�. CTU������ Ư����� �����̿��� �� �ӹ��� �ð��. CTU�� ���α׷��� �رԴ� �� ����� ���İ� �輱���̶� ���� ��ŷ�� ���� ����������.
�����̴� �����̸� �ӹ��� �������� ��Ȯ�ϰ� 24�ð��� �Ǵ� ������ �������� �Ѵ�.

���� ���� �ð��� 13:52:30�̰�, �ӹ��� ������ �ð��� 14:00:00 �̶�� �����̿��� �����ð��� 00:07:30 �̴�.

��� �ð��� 00:00:00 ~ 23:59:59�� ǥ���� �� �ִ�. �Է°� ��¿� �־����� ��� �ð��� XX:XX:XX �����̸�, ���ڰ� 2�ڸ��� �ƴ� ��쿡�� 0���� ä���.

�����̰� �ӹ��� ������ �ð���, ���� �ð��� �־����� ��, �����̿��� ���� �ð��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
&Input
ù° �ٿ��� ���� �ð���, ��° �ٿ��� �����̰� �ӹ��� ������ �ð��� �־�����. �ӹ��� ������ �ð��� ���� �ð��� ���� ���� �־����� �ʴ´�.
&Output
ù° �ٿ� �� �ٿ� �ϳ��� �����̰� �ӹ��� �����ϴµ� ���� �ð��� �������� �־����� �ð��� ���� (XX:XX:XX)�� ���� ����Ѵ�.
&Example
-input
13:52:30
14:00:00
-output
00:07:30
*/

/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const vector<string> split(const string& s, const char& c)
{
	string buff{ "" };
	vector<string> v;

	for (auto n : s)
	{
		if (n != c) buff += n; else
			if (n == c && buff != "") { v.push_back(buff); buff = ""; }
	}
	if (buff != "") v.push_back(buff);

	return v;
}
int main() {
	string n, s;
	cin >> n >> s;
	vector<string> N{ split(n, ':') }, S{ split(s, ':') };
	int h1 = stoi(N[0]), m1 = stoi(N[1]), s1 = stoi(N[2]),
		h2 = stoi(S[0]), m2 = stoi(S[1]), s2 = stoi(S[2]),
		rh = h2 - h1, rm = m2 - m1, rs = s2 - s1;

	if (rs < 0) {
		rm--;
		rs = 60 + rs;
	}
	if (rm < 0) {
		rh--;
		rm = 60 + rm;
	}
	if (rh < 0) {
		rh = 24 + rh;
	}

	string r;
	if (rh < 10)r += '0';
	r += to_string(rh);
	r += ':';
	if (rm < 10)r += '0';
	r += to_string(rm);
	r += ':';
	if (rs < 10)r += '0';
	r += to_string(rs);
	cout << r << endl;
	return 0;
}
*/