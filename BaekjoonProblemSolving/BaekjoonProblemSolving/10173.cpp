/*
https://www.acmicpc.net/problem/10173

&Title
10173�� - �ϸ� ã�Ƽ�

&Question
���� ����� �����ִ� �ϸ�(Nemo)�� ã�ƺ���. �ϸ� ã�µ� �־ 
��ҹ��ڴ� �߿����� �ʴ�. 

&Input
���� ������ �� �ٷ� �ԷµǸ�, �Է��� ���������� "EOI" 
�Էµȴ�. �� ���� �ִ� 80���� ���ڷ� �̷���� �ִ�. 

&Output
������ �ϸ� ã���� ��Found��, ��ã���� ��Missing���� �� �ٿ� 
�°� ����ϸ� �ȴ�. 

&Example
-input
Marlin names this last egg Nemo, a name that Coral liked.
While attempting to save nemo, Marlin meets Dory,
a good-hearted and optimistic regal blue tang with short-term memory loss. 
Upon leaving the East Australian Current,(888*%$^&%0928375)Marlin and Dory
NEMO leaves for school and Marlin watches NeMo swim away.
EOI

-output
Found
Found
Missing
Missing
Found


*/

/*
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string s;
	while (true) {
		getline(cin, s);
		if (s == "EOI")break;
		for (int i = 0; i < s.size(); i++) {
			if (isupper(s[i]))s[i] = tolower(s[i]);
		}
		if (s.find("nemo") != -1) {
			cout << "Found" << endl;
		}
		else {
			cout << "Missing" << endl;
		}
	}

	return 0;
}
*/