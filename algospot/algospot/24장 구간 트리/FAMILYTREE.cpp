// https://algospot.com/judge/problem/read/FAMILYTREE

/*
// lca log(n)���� �� ����� ����� ���� ���ϱ�
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAXN = 100000;
const int MAX = 2e9;

//�迭�� ���� �ּ� ������ �ذ��ϱ� ���� ���� Ʈ���� ����
struct RMQ{

    //�迭�� ����
    int n;
    //�� ������ �ּ�ġ
    vector<int> rangeMin;

    RMQ(const vector<int>& array){
        n = array.size();
        rangeMin.resize(n * 4);
        init(array, 0, n - 1, 1);
    }

    //node ��尡 array[left...right] �迭�� ǥ���� ��
    //node�� ��Ʈ�� �ϴ� ����Ʈ���� �ʱ�ȭ�ϰ�, �� ������ �ּ�ġ�� ��ȯ�Ѵ�
    int init(const vector<int>& array, int left, int right, int node){
        if (left == right)
            return rangeMin[node] = array[left];
        int mid = (left + right) / 2;
        int leftMin = init(array, left, mid, node * 2);
        int rightMin = init(array, mid + 1, right, node * 2 + 1);
        return rangeMin[node] = min(leftMin, rightMin);

    }

    //node�� ǥ���ϴ� ���� array[nodeLeft..nodeRight]�� �־��� ��
    //�� ������ array[left..right]�� �������� �ּ�ġ�� ���Ѵ�
    int query(int left, int right, int node, int nodeLeft, int nodeRight){
        //�� ������ ��ġ�� ������ ���� ū ���� ��ȯ�Ѵ�: ���� ��
        if (right < nodeLeft || nodeRight < left)
            return MAX;

        //node�� ǥ���ϴ� ������ array[left..right]�� ������ ���ԵǴ� ���
        if (left <= nodeLeft && nodeRight <= right)
            return rangeMin[node];
        //���� ������ ������ Ǭ �� ����� ��ģ��
        int mid = (nodeLeft + nodeRight) / 2;
        return min(query(left, right, node * 2, nodeLeft, mid), query(left, right, node * 2 + 1, mid + 1, nodeRight));
    }

    //query()�� �ܺο��� ȣ���ϱ� ���� �������̽�
    int query(int left, int right){
        return query(left, right, 1, 0, n - 1);
    }

    //array[index]=newValue�� �ٲ���� �� node�� ��Ʈ�� �ϴ�
    //���� Ʈ���� �����ϰ� ��尡 ǥ���ϴ� ������ �ּ�ġ�� ��ȯ�Ѵ�
    int update(int index, int newValue, int node, int nodeLeft, int nodeRight){
        //index�� ��尡 ǥ���ϴ� ������ ������� ��쿣 �����Ѵ�
        if (index < nodeLeft || nodeRight < index)
            return rangeMin[node];

        //Ʈ���� �������� ������ ���
        if (nodeLeft == nodeRight)
            return rangeMin[node] = newValue;
        int mid = (nodeLeft + nodeRight) / 2;
        return rangeMin[node] = min(update(index, newValue, node * 2, nodeLeft, mid), update(index, newValue, node * 2 + 1, mid + 1, nodeRight));
    }

    //update()�� �ܺο��� ȣ���ϱ� ���� �������̽�
    int update(int index, int newValue){
        return update(index, newValue, 1, 0, n - 1);
    }

};

int n;
vector<int> child[MAXN];
// Ʈ���� ��ȣ�� �Ϸ� ��ȣ ������ ���� ����
int no2serial[MAXN], serial2no[MAXN];
// �� ��尡 trip�� ó�� �����ϴ� ��ġ, �׸��� �� ����� ����
int locInTrip[MAXN], depth[MAXN];
// ���� �Ϸ� ��ȣ
int nextSerial;
// ���̰� d�� ��� here ���ϸ� ���� Ž���Ѵ�
void traverse(int here, int d, vector<int>& trip) {
	// traverse()�� ó�� �湮���ڸ��� �Ϸ� ��ȣ�� �ο��Ѵ�
	// �̷��� �ϸ� �׻� �θ�� �ڼպ��� ���� �Ϸ� ��ȣ�� ���� �ȴ�
	no2serial[here] = nextSerial;
	serial2no[nextSerial] = here;
	++nextSerial;
	// ���� ���
	depth[here] = d;
	// trip�� ���� ����� �Ϸ� ��ȣ�� �߰��Ѵ�
	locInTrip[here] = trip.size();
	trip.push_back(no2serial[here]);
	// ��� �ڽ� ��带 �湮
	for (int next : child[here]) {
		traverse(next, d + 1, trip);
		// �ڽ� ��带 �湮�ϰ� ���� ���� ���ƿö����� �ٽ� �߰��ϱ�
		trip.push_back(no2serial[here]);
	}
}

// Ʈ���� ��ȸ�ϸ� ���� �ʿ��� ������ ����ϰ�,
// RMQ ���� Ʈ���� ����� ��ȯ�Ѵ�.
RMQ* prepareRMQ() {
	nextSerial = 0;
	// ��ȸ �������� ������ ������ �Ϸ� ��ȣ�� ��´�.
	vector<int> trip;
	traverse(0, 0, trip);
	return new RMQ(trip);
}

// u�� v ������ �Ÿ��� ����Ѵ�
int distance(RMQ* rmq, int u, int v) {
    // trip[] �迭���� u�� v�� ù ���� ��ġ�� ã�´�
    int lu = locInTrip[u], lv = locInTrip[v];
    if (lu > lv)swap(lu, lv);
    // rmq�� u�� v�� �ּ� ���� ������ �Ϸ� ��ȣ�� ��ȯ�Ѵ�.
    int lca = serial2no[rmq->query(lu, lv)];
    return depth[u] + depth[v] - 2 * depth[lca];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int c, n, q;
	cin >> c;
	while (c--) {
		cin >> n >> q;
        for (int i = 1; i < n; i++) {
            int par;
            cin >> par;
            child[par].push_back(i);
        }

        nextSerial = 0;
        RMQ* pRmq = prepareRMQ();

        for (int i = 0; i < q; i++) {
            int a, b;
            cin >> a >> b;
            cout << distance(pRmq, a, b) << "\n";
        }

        for (int i = 0; i < n; ++i)
            child[i].clear();
	}
    return 0;
}
*/