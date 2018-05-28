/*
7.1 1���� n������ ���� ���ϴ� ���� ���� �˰���

//�ʼ� ����: n�� �ڿ���
//1 + 2 + ... + n �� ��ȯ�Ѵ�.
int fastSum(int n){
	//���� ���
	if(n == 1) return 1;
	if(n % 2 == 1) return fastSum(n-1) + n;
	return 2*fastSum(n/2) + (n/2)*(n/2);
}
//fastSum(n) = 2 * fastSum(n/2) + n^2/2 (n�� ¦���϶�)
*/

/*
7.2 ����� �ŵ������� ���ϴ� ���� ���� �˰���
//��������� ǥ���ϴ� SquareMatrix Ŭ������ �ִٰ� ��������.
class SquareMatrix;
//n*n ũ���� �׵� ���(identity matrix)�� ��ȯ�ϴ� �Լ�
SquareMatrix identity(int n);
//A^m�� ��ȯ�Ѵ�.
SquareMatrix pow(const SquareMatrix &A, int m){
	//���� ���:A^0=I
	if(m == 0) return identity(A.size());
	if(m % 2 > 0) return pow(A, m-1) * A;
	SquareMatrix half = pow(A, m / 2);
	//A^m = (A^(m/2)) * (A^(m/2))
	return half * half;