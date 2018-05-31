//https://algospot.com/judge/problem/read/QUADTREE

/*
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

string reverse(string::iterator& it) {
	char head = *it;
	++it;
	if (head == 'b' || head == 'w')
		return string(1, head);
	string upperLeft = reverse(it);
	string upperRight = reverse(it);
	string lowerLeft = reverse(it);
	string lowerRight = reverse(it);
	//���� ���� �Ʒ� �������� ��ġ�� �ٲ۴�.
	return string("x") + lowerLeft + lowerRight + upperLeft + upperRight;
}

int main() {
	int num;
	string s;
	cin >> num;
	while (num--) {
		cin >> s;
		string::iterator iter = s.begin();
		cout << reverse(iter) << endl;
	}
}
*/