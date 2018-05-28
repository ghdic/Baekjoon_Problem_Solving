//https://algospot.com/judge/problem/read/TSP1

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int C, N;
double dist[8][8] = {};
//path: ���ݱ��� ���� ���
//visited: �� ������ �湮 ���
//currentLength: ���ݱ��� ���� ����� ����
//������ ���õ��� ��� �湮�ϴ� ��ε� �� ���� ª�� ���� ���̸� ��ȯ�Ѵ�.
double shortestPath(vector<int>&path, vector<bool>&visited, double currentLength) {
	//���� ���: ��� ���ø� �� �湮���� ���� ���� ���÷� ���ư��� �����Ѵ�.
	if (path.size() == N)
		return currentLength;
	double ret = numeric_limits<double>::max();	//�ſ� ū ������ �ʱ�ȭ
												//���� �湮�� ���ø� ���� �õ��� ����.
	for (int next = 0; next < N; ++next) {
		if (visited[next])continue;
		int here = path.back();
		path.push_back(next);
		visited[next] = true;
		//������ ��θ� ��� ȣ���� ���� �ϼ��ϰ� ���� ª�� ����� ���̸� ��´�.
		double cand = shortestPath(path, visited, currentLength + dist[here][next]);
		ret = min(ret, cand);
		visited[next] = false;
		path.pop_back();
	}
	return ret;
}
int main() {
	double result;
	cin >> C;
	if (C < 0 || C>50)exit(-1);

	for (int i = 0; i < C; ++i) {
		cin >> N;
		for (int y = 0; y < N; ++y) {
			for (int x = 0; x < N; ++x) {
				cin >> dist[y][x];
				if (dist[y][x] < 0 || dist[y][x]>1415)
					exit(-1);
			}
		}
		double answer = numeric_limits<double>::max();
		for (int j = 0; j < N; ++j) {
			vector<int> path(1, j);	//j��° ���ÿ��� ���
			vector<bool> visited(N, false);

			visited[j] = true;	//��������Ƿ� �湮
			result = shortestPath(path, visited, 0.0);
			if (answer > result)//�������� ũ�� ����� �ʴ´�.
				answer = result;
		}
		printf("%.10lf\n", answer);
	}
	return 0;
}
*/