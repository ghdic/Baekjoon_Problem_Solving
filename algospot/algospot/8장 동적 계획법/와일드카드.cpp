////https://algospot.com/judge/problem/read/WILDCARD
//
///*
//
//���ϵ� ī��� �پ��� �ü������ ���� �̸��� �Ϻθ����� ���� �̸��� �����ϴ� ����̴�.
//���ϵ�ī�� ������ �տ��� �� ���ھ� ���ϸ�� ���ؼ� ��� ���ڰ� ��ġ���� ��
//�ش� ���ϵ�ī�� ������ ���ϸ�� �����ȴٰ� ���Ѵ�.
//��, ���ϵ�ī�� ���Ͽ� ���Ե� ?�� � ���ڿ͵� �����ȴٰ� �����ϸ�,
//*�� 0���� �̻��� � ���ڿ����� �����ȴٰ� �����Ѵ�
//���ϵ�ī�� ���ϰ� �Բ� ���ϸ��� ������ �־��� ��,
//�� �� ���Ͽ� �����Ǵ� ���ϸ���� ã�Ƴ��� ���α׷��� �ۼ��Ͻÿ�
//*/
//
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//
////-1�� ���� ���� ������ �ʾ����� �ǹ�
////1�� �ش� �Էµ��� ���� �������� �ǹ�
////0�� �ش� �Էµ��� ���� �������� ������ �ǹ�
//int cache[101][101]; //�ִ� ���̰� 100�̹Ƿ� '\n' ����
//string wildCard, fileName;
////���� Ž�� �˰����� �̿�(�ð� �ʰ�)
///*
////���ϵ�ī�� ���� w�� ���ڿ� s�� �����Ǵ��� ���θ� ��ȯ
//bool match(const string &w, const string &s)
//{
////w[pos]�� s[pos]�� ���糪����
//int pos = 0;
//while (pos < s.size() && pos < w.size() && (w[pos] == '?' || w[pos] == s[pos]))
//pos++;
//
////�� �̻� ������ �� ������ �� while���� �������� Ȯ��
////���� ���� �����ؼ� ���� ���: ���ڿ��� ������� ������
//if (pos == w.size())
//return pos == s.size();
////*�� ������ ���� ���: *�� �� ���ڸ� �����ؾ� ���� ��� ȣ���ϸ鼭 Ȯ��
//if (w[pos] == '*')
//for (int skip = 0; pos + skip <= s.size(); skip++)
//if (match(w.substr(pos + 1), s.substr(pos + skip)))
//return true;
////�� ���� ��쿡�� ��� �������� �ʴ´�
//return false;
//}
//*/
//
////������ȹ�� �̿�
//int matchMemoized(int w, int f)
//{
//	//�޸������̼�
//	int &result = cache[w][f];
//	if (result != -1)
//		return result;
//	//wildCard[w]�� fileName[f] ���糪��
//	//1��° ���
//	/*
//	while (f < fileName.size() && w < wildCard.size() && (wildCard[w] == '?' || wildCard[w] == fileName[f]))
//	{
//	w++;
//	f++;
//	}
//	*/
//	//2��° ���
//	if (w < wildCard.size() && f < fileName.size() && (wildCard[w] == '?' || wildCard[w] == fileName[f]))
//		return result = matchMemoized(w + 1, f + 1);
//	//�� �̻� ������ �� ������ �� while���� �������� Ȯ��
//	//���� ���� �����ؼ� ���� ���: ���ڿ��� ������� �Ѵ�
//	if (w == wildCard.size() && f == fileName.size())
//		return result = 1;
//
//	//*�� ������ ���� ���: *�� �� ���ڸ� �����ؾ� ���� ���ȣ���ϸ鼭 Ȯ��
//	//1��° ���
//	/*
//	if (wildCard[w] == '*')
//	for (int skip = 0; skip + f <= fileName.size(); skip++)
//	if (matchMemoized(w + 1, f + skip))
//	return result = 1;
//	*/
//
//	//2��° ���
//	if (wildCard[w] == '*')
//	{
//		if (matchMemoized(w + 1, f) || (f < fileName.size() && matchMemoized(w, f + 1))) //*�� ���ڸ� �������� ������ �ƴϸ� �� ���� �� ��������
//			return result = 1;
//	}
//	//�� ���� ��쿡�� ��� �������� �ʴ´�
//	return result = 0;
//}
//
//int main(void)
//{
//	int test_case;
//	cin >> test_case;
//	if (test_case < 1 || test_case>10)
//		exit(-1);
//	for (int i = 0; i < test_case; i++)
//
//	{
//		vector<string> v;
//		cin >> wildCard;
//		int fileNum;
//		cin >> fileNum;
//		if (fileNum < 1 || fileNum>50)
//			exit(-1);
//
//		for (int j = 0; j < fileNum; j++)
//		{
//			memset(cache, -1, sizeof(cache));
//			cin >> fileName;
//			if (matchMemoized(0, 0) == 1) //���� ������ ���� ���Ϳ� ����
//				v.push_back(fileName);
//		}
//		sort(v.begin(), v.end()); //������ �ϰ�
//
//		for (int j = 0; j < v.size(); j++) //���
//			cout << v[j] << endl;
//		cout << endl;
//	}
//	return 0;
//}