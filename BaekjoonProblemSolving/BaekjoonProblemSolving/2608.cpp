/*
https://www.acmicpc.net/problem/2608

&Title
2608번 - 로마 숫자

&Question
로마 시대 때는 현재 사용하는 아라비아 숫자가 아닌 
다른 방법으로 수를 표현하였다.로마 숫자는 다음과 같은 7개의 기호로 
이루어진다.기호IVXLCDM값1510501005001000수를 만드는 규칙은 다음과 같다.보통 큰 숫자를 왼쪽에 작은 
숫자를 오른쪽에 쓴다. 그리고 그 값은 모든 숫자의 값을 
더한 값이 된다. 예를 들어 LX = 50 + 
10 = 60 이 되고, MLI = 1000 + 
50 + 1 = 1051 이 된다.V, L, D는 
한 번만 사용할 수 있고 I, X, C, M은 
연속해서 세 번까지만 사용할 수 있다. 예를 들어 VV나 
LXIIII 와 같은 수는 없다. 그리고 같은 숫자가 반복되면 
그 값은 모든 숫자의 값을 더한 값이 된다. 예를 
들어 XXX = 10 + 10 + 10 = 
30 이 되고, CCLIII = 100 + 100 + 
50 + 1 + 1 + 1 = 253 
이 된다.작은 숫자가 큰 숫자의 왼쪽에 오는 경우는 다음과 
같다. IV = 4, IX = 9, XL = 
40, XC = 90, CD = 400, CM = 
900 을 나타낸다. 이들 각각은 한 번씩만 사용할 수 
있다. 그런데 IV 와 IX 는 같이 쓸 수 
없으며 XL 과 XC, CD 와 CM 또한 같이 
쓸 수 없다. 이들 외에는 작은 숫자가 큰 숫자 
왼쪽 어디에도 나올 수 없다. 예를 들어 XCXC 나 
CMCD, VX 나 IIX 와 같은 수는 없다. 참고로 
LIX = 50 + 9 = 59, CXC = 
100 + 90 = 190 이 된다.모든 수는 가능한 
가장 적은 개수의 로마 숫자들로 표현해야 한다. 예를 들어 
60 은 LX 이지 XLXX 가 아니고, 5 는 
V 이지 IVI 가 아니다.아래의 예를 참고 하시오.DLIII = 
500 + 50 + 3 = 553MCMXL = 1000 
+ 900 + 40 = 1940235 = CCXXXV2493 = 
MMCDXCIII로마 숫자로 이루어진 두 수를 입력받아 그 둘을 더한 
값을 아라비아 숫자와 로마 숫자로 출력하는 프로그램을 작성하시오. 

&Input
첫째 줄과 둘째 줄에 하나씩 로마 숫자로 표현된 
수가 주어진다. 입력된 각 수는 2000 보다 작거나 같다. 


&Output
입력으로 주어진 두 수를 더한 값을 첫째 줄에 
아라비아숫자로 출력하고 둘째 줄에는 로마 숫자로 출력한다. 

&Example
-input
DLIII
MCMXL

-output
2493
MMCDXCIII

*/

/*
#include <iostream>
#include <string.h>
using namespace std;
int convertInt(char arr[101], int len)
{
	int num = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		switch (arr[i])
		{
		case 'M':
			if (arr[i - 1] == 'C')
				num += 900, i--;
			else
				num += 1000;
			break;
		case 'D':
			if (arr[i - 1] == 'C')
				num += 400, i--;
			else
				num += 500;
			break;
		case 'C':
			if (arr[i - 1] == 'X')
				num += 90, i--;
			else
				num += 100;
			break;
		case 'L':
			if (arr[i - 1] == 'X')
				num += 40, i--;
			else
				num += 50;
			break;
		case 'X':
			if (arr[i - 1] == 'I')
				num += 9, i--;
			else
				num += 10;
			break;
		case 'V':
			if (arr[i - 1] == 'I')
				num += 4, i--;
			else
				num += 5;
			break;
		case 'I':
			num += 1;
			break;
		default:
			break;
		}
	}
	return num;
}
int main(void)
{
	int len1, len2;
	char n[101];
	char m[101];
	int nNum = 0, mNum = 0;
	int sum;
	cin >> n;
	cin >> m;
	len1 = strlen(n);
	len2 = strlen(m);
	nNum = convertInt(n, len1);
	mNum = convertInt(m, len2);
	sum = nNum + mNum;
	cout << sum << endl;
	while (sum > 0)
	{
		if (sum >= 1000)
			cout << "M", sum -= 1000;
		else if (sum >= 900)
			cout << "CM", sum -= 900;
		else if (sum >= 500)
			cout << "D", sum -= 500;
		else if (sum >= 400)
			cout << "CD", sum -= 400;
		else if (sum >= 100)
			cout << "C", sum -= 100;
		else if (sum >= 90)
			cout << "XC", sum -= 90;
		else if (sum >= 50)
			cout << "L", sum -= 50;
		else if (sum >= 40)
			cout << "XL", sum -= 40;
		else if (sum >= 10)
			cout << "X", sum -= 10;
		else if (sum >= 9)
			cout << "IX", sum -= 9;
		else if (sum >= 5)
			cout << "V", sum -= 5;
		else if (sum >= 4)
			cout << "IV", sum -= 4;
		else
			cout << "I", sum -= 1;
	}
	return 0;
}
*/