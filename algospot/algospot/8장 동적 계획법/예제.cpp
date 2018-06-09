/*
8.1 ��� ȣ���� �̿��� ���� ����� ���

int bino(int n, int r) {
	//���� ��� n = r (��� ���Ҹ� �� ���� ���) Ȥ�� r=0(�� ���Ұ� ���� ���)
	if (r == 0 || n == r)return 1;
	return bino(n - 1, r - 1) + bino(n - 1, r);
}


8.2 �޸����̼� �̿��� ���� ��� ����

// -1�� �ʱ�ȭ�� �д�.
int cache[30][30];
int bino2(int n, int r) {
	//���� ���
	if (r == 0 || n == r)return 1;
	//-1�� �ƴ϶�� �ѹ� ��� �ߴ� ���̴� ���� ��ȯ
	if (cache[n][r] != -1)
		return cache[n][r];
	//���� ����� �� �迭�� ����
	return cache[n][r] = bino2(n - 1, r - 1) + bino2(n - 1, r);
}

//8.3 �޸����̼��� ��� ��
//���� -1�� �ʱ�ȭ�صд�.
int cache[2500][2500];
//a�� b�� ����[0, 2500) ���� ���� ����
//��ȯ ���� �׻� int�� �ȿ� ���� ���� �ƴ� ����
int someObscureFunction(int a, int b) {
	//���� ��ʸ� ó���� ó���Ѵ�
	if (...) return ...;
	//(a, b)�� ���� ���� ������ ������ ���� ��ȯ
	int& ret = cache[a][b];
	if (ret != -1) return ret;
	//���⿡�� ���� ����Ѵ�.
	...
		return ret;
}

int main() {
	//memset()�� �̿��� cache �迭�� �ʱ�ȭ�Ѵ�.
	memset(cache, -1, sizeof(cache));
}
*/