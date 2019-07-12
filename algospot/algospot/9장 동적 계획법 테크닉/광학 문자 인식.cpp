// 9.4 ���� ���� �ν� OCR (��)
// https://algospot.com/judge/problem/read/OCR
/*
#include <iostream>
#include <string>
#include <cmath> //log
using namespace std;

//������ �����ϴ� �ܾ��� ����, �ܾ��� ��, ó���� ������ ��
int composition, wordNum, sentenceNum;
//�з��Ⱑ ��ȯ�� ����, �ܾ� ��ȣ�� ��ȯ�Ǿ� ����
int classified[100];
//Begin[i] i��° �ܾ ù �ܾ�� ���� Ȯ��
double Begin[501];
//rightAfter[i][j]=i �ܾ� ���Ŀ� j �ܾ ���� Ȯ���� �αװ�
double rightAfter[501][501];
//missMatched[i][j]=i �ܾ j �ܾ�� �з��� Ȯ���� �αװ�
double missMatched[501][501];
int choice[102][502];
double cache[102][502]; //1�� �ʱ�ȭ
string word[501]; //�Է¹��� �ܾ���� ���

//Q[segment] ���ĸ� ä���� ���� �� �ִ� �ִ� g() ���� �αװ� ��ȯ
//Q[segment-1]==previousMatch�� ����
double recognize(int segment, int previousMatch)
{
	if (segment == composition)
		return 0;
	double& result = cache[segment][previousMatch];
	if (result != 1.0)
		return result;
	result = -1e200; //log(0)=���� ���Ѵ�
	int& choose = choice[segment][previousMatch];
	//classified[segment]�� �����Ǵ� �ܾ�
	for (int thisMatch = 1; thisMatch <= wordNum; thisMatch++)
	{
		//���� R�� �־��� �� ���Ǻ�Ȯ�� P(Q|R)�� �ִ�ȭ�ϴ� ���� Q�� ã�� �˰���
		//P(Q|R)=(P(R|Q)*P(Q))/P(R) => ���⼭ P(Q|R)�̶� P(Q��R)/P(R)
		//P(R|Q)�� ������ Q�� �� �з��Ⱑ R�� ��ȯ�� Ȯ��: ���� P(R|Q)=��[M(Q[i], R[i])] => ���⼭ M(a, b)=�ܾ� a�� b�� �з��� Ȯ��
		//P(Q)=Begin(Q[0])*��[rightAfter(Q[i-1], Q[i])]
		//f(Q)=P(R|Q)*P(Q)=��[missMatched(Q[i], R[i])*rightAfter(Q[i-1], Q[i])]=��g(Q[i])
		//g(thisMatch)=rightAfter(previousMatch, thisMatch)*missMatched(thisMatch, R[segment])
		double candidate = rightAfter[previousMatch][thisMatch] + missMatched[thisMatch][classified[segment]] + recognize(segment + 1, thisMatch);

		if (result < candidate)
		{
			result = candidate;
			choose = thisMatch;
		}
	}
	return result;
}



//���� ���� �ν� ������ ���� �� ����ϱ�
string reconstruct(int segment, int previousMatch)
{
	int choose = choice[segment][previousMatch];
	string result = word[choose];
	if (segment < composition - 1)
		result = result + " " + reconstruct(segment + 1, choose);
	return result;
}

//ĳ�� �ʱ�ȭ
void initialize()
{
	for (int i = 0; i < composition; i++)
		for (int j = 0; j <= wordNum; j++)
			cache[i][j] = 1.0;
}

int main(void)
{
	cin >> wordNum >> sentenceNum;
	if (wordNum < 1 || wordNum>500 || sentenceNum < 1 || sentenceNum>100)
		exit(-1);
	for (int i = 1; i <= wordNum; i++)
		cin >> word[i];
	for (int i = 1; i <= wordNum; i++)
	{
		cin >> Begin[i];
		Begin[i] = log(Begin[i]); //log�� ��ȯ
	}
	for (int i = 0; i <= wordNum; i++)
		for (int j = 1; j <= wordNum; j++)
		{
			//å�� Ʈ���� �̿��Ͽ� ���۴ܾ [0][j] �ε����� ����
			//��, Q[0]�� �׻� ���۴ܾ��� ����
			//�׷��� �ϸ� P(Q)=��(rightAfter(Q[i-1], Q[i])) => Begin(Q[0])*��(rightAfter(Q[i-1], Q[i]))���� ����������
			if (i == 0)
				rightAfter[i][j] = Begin[j];
			else
			{
				cin >> rightAfter[i][j];
				rightAfter[i][j] = log(rightAfter[i][j]);
			}
		}
	for (int i = 1; i <= wordNum; i++)
		for (int j = 1; j <= wordNum; j++)
		{
			cin >> missMatched[i][j];
			missMatched[i][j] = log(missMatched[i][j]);
		}
	for (int i = 0; i < sentenceNum; i++)
	{
		cin >> composition;
		if (composition < 1 || composition>100)
			exit(-1);
		initialize();
		for (int i = 0; i < composition; i++)
		{
			string input;
			cin >> input;
			for (int j = 1; j <= wordNum; j++)
				if (input == word[j])
				{
					classified[i] = j;
					break;
				}
		}
		recognize(0, 0);
		cout << reconstruct(0, 0) << endl;
	}
	return 0;
}
*/