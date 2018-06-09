//// https://algospot.com/judge/problem/read/LIS
//
//
///*
//���� ���� S���� �ִ� �κ� ������ ���̸� ���Ͻÿ�
//*/
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring> //memset
//using namespace std;
//
//int idx; //�ִ� �κ� ������ ����
//int length; //���� ����
//int arr[500]; //���� �־��� ����
//int C[500];
//
////int cache[100]; //list2��
////list3��
////int cache[101]; //index -1�� �߰��� ĳ��(���̸� ���� �� �� ��ġ�� ��ȸ�ϴ� �ڵ� ����)
//
//
///*
//
////���� Ž�� �˰���
//int list(const vector<int> &A)
//{
////���� ���:A�� �� ��� ���� ��
//if (A.empty())
//return 0;
//int result = 0;
//
//for (int i = 0; i < A.size(); i++)
//{
//vector<int> B;
//for (int j = i + 1; j < A.size(); j++)
//if (A[i] < A[j])
//B.push_back(A[j]);
//result = max(result, 1 + list(B));
//}
//return result;
//}
//
//
//
////�޸������̼� 1
////arr[start]���� �����ϴ� ���� �κ� ���� �� �ִ� ���� ��ȯ
//int list2(int start)
//{
//int &result = cache[start];
//if (result != -1)
//return result;
////�׻� arr[start]�� �ֱ� ������ ���̴� ���� 1
//result = 1;
//for (int next = start + 1; next < length; next++)
//if (arr[start] < arr[next])
//result = max(result, list2(next) + 1);
//return result;
//}
//
//
////�޸������̼� 2
//int list3(int start)
//{
//int &result = cache[start + 1];
//if (result != -1)
//return result;
////�׻� arr[start]�� �ֱ� ������ ���̴� ���� 1
//result = 1;
//for (int next = start + 1; next < length; next++)
//if (start == -1 || arr[start] < arr[next])
//result = max(result, list3(next) + 1);
//return result;
//}
//*/
//
//
////O(nlogn)�� LIS�� ã�� �� �ִ� �˰���
//void list4(int num)
//{
//	if (idx == 0 || (idx>0 && C[idx - 1] <= num)) //�ش� ���ڰ� �� ũ�ų� ���Ͱ� ����ִٸ�
//	{
//		C[idx++] = num;
//		return;
//	}
//
//	//���� �κ� ������ �������� ���� ���ڶ�� ������ ��ġ�� ã�´�
//	int front = 0;
//	int rear = idx - 1;
//
//	while (front <= rear) //����Ž��
//	{
//		int mid = (front + rear) / 2;
//
//		if (C[mid] < num)
//			front = mid + 1;
//		else
//			rear = mid - 1;
//	}
//	C[rear + 1] = num;
//}
//
//
//int main(void)
//{
//
//	int test_case;
//	cin >> test_case;
//
//	if (test_case < 0 || test_case>50)
//		exit(-1);
//
//	for (int i = 0; i < test_case; i++)
//	{
//		idx = 0; //�ִ�κ� ���� ���� �ʱ�ȭ
//		cin >> length;
//		if (length < 1 || length>500)
//			exit(-1);
//
//		for (int j = 0; j < length; j++)
//
//			cin >> arr[j];
//		for (int j = 0; j < length; j++)
//			list4(arr[j]);
//		cout << idx << endl;
//	}
//	return 0;
//}