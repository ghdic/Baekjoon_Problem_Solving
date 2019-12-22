/*
https://www.acmicpc.net/problem/13163

&Title
13163번 - 닉네임에 갓 붙이기

&Question
방금 막 프로그래밍을 배우기 시작한 찬우는 acmicpc.net에 있는 
회원들이 모두 신같이 보였다. 그래서 찬우는 모든 회원의 닉네임 
앞에 ‘갓’을 붙이려고 한다.찬우가 ‘koosaga’라는 닉네임을 가진 회원을 갓으로 
바꿔 부른다면 ‘godsaga’가 된다. 또, 찬우가 ‘acka’라는 닉네임을 가진 
회원을 갓으로 바꿔 부른다면 ‘godka’가 될 것이다. 찬우는 닉네임을 
갓으로 바꾸는 알고리즘을 생각하다가, 아래와 같이 2단계 방법을 사용하면 
될 것으로 생각했다.닉네임을 음절 단위로 쪼갠다.가장 첫 음절을 ‘god’으로 
바꾼 후 쪼갠 음절을 합친다.찬우는 수작업으로 N명의 닉네임을 모두 
음절 단위로 쪼갰다. 찬우를 도와 이 닉네임들에 갓을 붙이는 
프로그램을 작성하자. 

&Input
첫 번째 줄에는 닉네임의 수 N(1 ≤ N 
≤ 100)이 주어진다. 두 번째 줄부터 N개의 줄에는 음절 
단위로 쪼갠 닉네임이 주어진다. 각 줄은 알파벳 소문자와 공백만으로 
이루어지며, 쪼갠 닉네임의 총 길이(공백 포함)는 100을 넘지 않는다. 
쪼갠 닉네임에는 1개 이상의 공백이 존재한다. 

&Output
각 줄에 하나씩 갓을 붙인 닉네임을 출력한다. 

&Example
-input
5
baek joon
koo sa ga
ac ka
yu ka ri ko
ke sa ki yo

-output
godjoon
godsaga
godka
godkariko
godsakiyo


*/

/*
#include <iostream>
#include <string>
using namespace std;

int n, i;
string name;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	cin.ignore();
	while (n--) {
		getline(cin, name);
		string god = "god";
		i = 0;
		while (i < name.length() && name[i] != ' ') ++i;

		for (i; i < name.length(); ++i) {
			if (name[i] != ' ')
				god += name[i];
		}
		cout << god << '\n';
	}
	return 0;
}
*/