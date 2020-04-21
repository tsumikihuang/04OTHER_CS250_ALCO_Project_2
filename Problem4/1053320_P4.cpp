#include<iostream>

using namespace std;
/*
simple undirected graph
G=(V,E)

S⊆V		x、y∈S
滿足(x,y)∉E，則S為G的一個independent set

求 Maximum independent set
*/
void Max(int v);
void AddEdge(int x, int y);

int RoadMatrix[100][100];

int main() {

	//N、M，分別代表圖的 點 和 邊 的數量
	int N, M;				//v--vertex	//e--edge
	cin >> N >> M;
	int* a = new int[M];
	int* b = new int[M];
	for (int i = 0; i < M; i++) {
		cin >> a[i] >> b[i];
		AddEdge(a[i], b[i]);
	}
	Max(N);

	system("pause");
	return 0;
}

void Max(int N) {
	int MaxNum = 0;
	int* count = new int[N];

	for (int i = 0; i < N; i++)
		count[i] = 0;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (RoadMatrix[i][j] == 1)
				count[i]++;

	for (int i = 0; i < N; i++)
		if (count[i] > MaxNum)
			MaxNum = count[i];

	cout << MaxNum << endl;
}

void AddEdge(int x, int y) {
	RoadMatrix[x][y] = 1;
	RoadMatrix[y][x] = 1;
}
