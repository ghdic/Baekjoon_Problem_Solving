//https://algospot.com/judge/problem/read/QUANTIZE

/*
����ȭ ������, �� ���� ������ ���� ������ ���� ������ ���� �����
�ٻ��� ǥ�������ν� �ڷḦ �ս� �����ϴ� ������ ���Ѵ�.
1000 ������ �ڿ������ ������ ������ s������ �ڿ�������
����ϵ��� ����ȭ�Ϸ��� �Ѵ�.
���� ������ ���� �ּ�ȭ�ϴ� ����ȭ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
*/
#include <iostream>
#include <algorithm>
#include <cstring> //memset
using namespace std;

const int INF = 987654321; //��û ū ����
int length; //������ ũ��
			//arr[]:����ȭ�ؾ� �� ����, ���� ����
			//partSum[]:arr[]�� �κ��� ����, partSum[i]=A[0]+...A[i]�� ��
			//partSquareSum[]:arr[] ������ �κ��� ����, partSquareSum[i]�� arr[0]^2+...arr[i]^2�� ��
int arr[100], partSum[100], partSquareSum[100];
int cache[100][10];
//arr�� �����ϰ� �� �κ��� ���
void preCalculate(void)
{
	sort(arr, arr + length); //����
	partSum[0] = arr[0];
	partSquareSum[0] = arr[0] * arr[0];

	for (int i = 1; i < length; i++)
	{
		partSum[i] = partSum[i - 1] + arr[i];
		partSquareSum[i] = partSquareSum[i - 1] + arr[i] * arr[i];
	}
}

//arr[low]...arr[high] ������ �ϳ��� ���ڷ� ǥ���� �� �ּ� ���� �� ���
int minDiffrence(int low, int high)
{
	//�κ����� �̿��� arr[low]...arr[high]�� �� ����
	int sum = partSum[high] - (low == 0 ? 0 : partSum[low - 1]);
	int squareSum = partSquareSum[high] - (low == 0 ? 0 : partSquareSum[low - 1]);
	//����� �ݿø��� ������ �� ������ ǥ��
	int mean = (int)(0.5 + (double)sum / (high - low + 1)); //�ݿø�
															//sum(arr[i]-mean)^2�� ������ ����� �κ������� ǥ��
															//��(arr[i]-mean)^2 = (high-low+1)*mean^2 - 2*(��arr[i])*mean + ��arr[i]^2
	int result = squareSum - (2 * mean*sum) + (mean*mean*(high - low + 1));
	return result;
}

int quantize(int from, int parts) //from��° ������ ���ڵ��� parts���� �������� ���´�
{
	//���� ���:��� ���ڸ� �� ����ȭ���� ��
	if (from == length)
		return 0;
	//���� ���:���ڴ� ���� ���Ҵµ� �� ���� �� ���� �� ���� ū �� ��ȯ
	if (parts == 0)
		return INF;
	int &result = cache[from][parts];
	if (result != -1)
		return result;
	result = INF;
	//������ ���̸� ��ȭ���� ���� �ּ�ġ ã��
	for (int partSize = 1; from + partSize <= length; partSize++)
		result = min(result, minDiffrence(from, from + partSize - 1) + quantize(from + partSize, parts - 1));
	return result;
}

int main(void)
{
	int test_case;
	cin >> test_case;
	if (test_case < 0 || test_case>50)
		exit(-1);

	for (int i = 0; i < test_case; i++)
	{
		int useNum; //����� ���� ����
		cin >> length >> useNum;
		if (length < 1 || length>100 || useNum < 1 || useNum>10)
			exit(-1);
		for (int i = 0; i < length; i++)
			cin >> arr[i];
		preCalculate();
		memset(cache, -1, sizeof(cache));
		cout << quantize(0, useNum) << endl << endl;
	}
	return 0;
}