/*
https://www.acmicpc.net/problem/2948

&Title
2948�� - 2009��

&Question
2009�� ��¥�� �־����� ��, ���� �������� ����ϴ� ���α׷��� 
�ۼ��Ͻÿ�. 

&Input
ù° �ٿ� D�� M�� �־�����. M�� D���̴�. 

&Output
2009�� M�� D���� ������ ����� ����Ѵ�. ����� ���� 
�� �ϳ��̴�. "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday". 


&Example
-input
1 1

-output
Thursday


*/

/*
//2009�� 1�� 1���� ������̴�.
#include <iostream>
using namespace std;

int main() {
	int M, D;
	cin >> D >> M;
	M--;
	while (M != 0) {
		if (M == 1)D+=31;
		else if (M == 2)D+=28;
		else if (M == 3)D += 31;
		else if (M == 4)D += 30;
		else if (M == 5)D += 31;
		else if (M == 6)D += 30;
		else if (M == 7)D += 31;
		else if (M == 8)D += 31;
		else if (M == 9)D += 30;
		else if (M == 10)D += 31;
		else if (M == 11)D += 30;
		else if (M == 12)D += 31;
		M--;

	}
	D--;
	D %= 7;
	if (D == 0)cout << "Thursday" << endl;
	else if (D == 1)cout << "Friday" << endl;
	else if (D == 2)cout << "Saturday" << endl;
	else if (D == 3)cout << "Sunday" << endl;
	else if (D == 4)cout << "Monday" << endl;
	else if (D == 5)cout << "Tuesday" << endl;
	else if (D == 6)cout << "Wednesday" << endl;
	return 0;
}
*/