/*
https://www.acmicpc.net/problem/7785

&Title
7785�� - ȸ�翡 �ִ� ���

&Question
����̴� �������� ����Ʈ���� ȸ�� ��ۿ��� ���Ѵ�. �� ȸ���� 
���� ū Ư¡�� �����ο� ����� �ð��̴�. ����, �������� �ݵ�� 
9�ú��� 6�ñ��� ȸ�翡 ���� �ʾƵ� �ȴ�.�� ������ �ڱⰡ ���� 
�� ����� �� �ְ�, �ƹ����� ����� �� �ִ�.����̴� ��� 
����� ����ī�� �ý����� �α׸� ������ �ִ�. �� �α״� � 
����� ȸ�翡 ���Դ���, ���������� ��ϵǾ��� �ִ�. �αװ� �־����� ��, 
���� ȸ�翡 �ִ� ��� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

&Input
ù° �ٿ� �α׿� ��ϵ� ���� ����� �� n�� 
�־�����. (2 �� n �� 106) ���� n���� �ٿ��� 
���� ����� ������� �־�����, �� ����� �̸��� �־����� "enter"�� 
"leave"�� �־�����. "enter"�� ���� ���, "leave"�� ���� ����̴�.ȸ�翡�� ���������� 
������, ��ҹ��ڰ� �ٸ� ��쿡�� �ٸ� �̸��̴�. 

&Output
���� ȸ�翡 �ִ� ����� �̸��� ���� ���� �������� 
�� �ٿ� �� �� ����Ѵ�. 

&Example
-input
4
Baha enter
Askar enter
Baha leave
Artem enter

-output
Askar
Artem


*/

/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int n;
unordered_map<string, string> um;
string a, b;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (b == "enter") {
			um[a] = a;
		}
		else {
			um.erase(a);
		}
	}
	vector<string> res(um.size());
	auto value_selector = [](auto pair) {return pair.second; };
	transform(um.begin(), um.end(), res.begin(), value_selector);
	sort(res.begin(), res.end(), greater<string>());
	for (auto k : res)
		cout << k << '\n';
	return 0;
}
*/

// õ�鰡 �̻��?
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
	ios_base::sync_with_stdio(false);
	vector<string> enter;
	vector<string> leave;
	int inNum,n=0;
	string inStr1,inStr2;

	cin>>inNum;

	while(inNum--){
		cin>>inStr1;
		cin>>inStr2;
		if(inStr2=="enter")
			enter.emplace_back(inStr1);
		else
			leave.emplace_back(inStr1);
	}
	sort(enter.begin(),enter.end());
	sort(leave.begin(),leave.end());

	for(int i=0;i<enter.size();i++){
		if(n==leave.size()){
			cout<<enter[enter.size()-i-1]<<'\n';
			continue;
		}
		if(leave[leave.size()-n-1]!=enter[enter.size()-i-1])
			cout<<enter[enter.size()-i-1]<<'\n';
		else
			n+=1;
	}

	return 0;
}

*/