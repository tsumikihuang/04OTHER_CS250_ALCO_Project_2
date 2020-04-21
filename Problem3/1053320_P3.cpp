#include<iostream>
#include <vector>
#include<math.h>

using namespace std;

/*
��N�Ӯq��
�سy�������ǰe���ϱo�oN�Ӯq���i�H�q�L�ǰe���ۤ��s�q
---
�]�k�]�ƪ�����(�������)�C
�ϥ��]�k�]�Ƶ��Ŭ�t�A�h�q��i�Pj���ǰe��������C(i,j)/t
---
�]�k�]��
���Ŭ�1���]�Ʀ�����X,���Ŭ�t���]�ƪ�������t*X�C
���ŤW����T�C
�@�x�]�k�]�ƥi�H�Ψӫسy�Ҧ����ǰe���C
---
�سy���`����
[�]�k�]�Ʀ���t*X]+[�سy�ǰe���������`�MC(i,j)/t]
---
����굥�Ŧh�����]�k�]��?
�b���Ǯq���P�q�������سy�ǰe��?
>>�̧C�������F����N�Ӯq����q�L�ǰe���ۤ��s�q<<
*/

int find(vector<int> vec, int target);

struct Edge
{
	int A;	//�q
	int B;	//�q
	int C;	//����
};

int main() {
	vector<int> Vertex;
	vector<Edge> Ans;

	//N = �q�����ƶq
	//M = �i�سy�ǰe�����զX�`��
	//T = �]�k�]�ƪ����ŤW��
	//X = ���Ť@�]�k�]�Ƥ�����
	int N, M, T, X;
	cin >> N >> M >> T >> X;

	int** map;
	map = new int*[N];
	for (int i = 0; i < N; i++)
		map[i] = new int[M];

	/*int** m_;
	m_ = new int* [N];
	for (int i = 0; i < N; i++)
		m_[i] = new int[M];
	*/
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			//map[i][j] = m_[i][j] = 0;
			map[i][j] = 0;

	//���U�Ӫ�M��A�C�@�榳�T�Ӿ��i, j, C(i,j)
	//��ܮq��i�Pj�����i�سy�ǰe���A�سy����¦������C(i,j)
	for (int i = 0; i < M; i++) {
		int tempA, tempB, tempC;
		cin >> tempA>> tempB;
		if (find(Vertex, tempA) == -1)
			Vertex.push_back(tempA);
		if (find(Vertex, tempB) == -1)
			Vertex.push_back(tempB);
		cin >> tempC;
		if (tempA == 0 || tempB == 0|| tempC == 0) {
			cout << "��J���঳0!!!�o�ӵ{���|�a��" << endl;
			return 0;
		}

		map[find(Vertex, tempA)][find(Vertex, tempB)] = map[find(Vertex, tempB)][find(Vertex, tempA)]=tempC;

	}

	/* * * *	Prim's Algorithm	* * * */
	vector<int> Vert_A, Vert_B;	//A--�٨S���쪺�I(����N�O-1)		//B--�w�g�����I
	int sum = 0;

	//Pick a singleton V'�ݩ�V arbitrarily
	Vert_B.push_back(0);
	for(int i=1;i<Vertex.size();i++)
		Vert_A.push_back(i);

	//while V!=V' do
	while(Vertex.size()!= Vert_B.size()) {
		//Pick minimize w(u,v)
		int minimize=-1;
		int minW_xy[2];		//�q��q

		//�qB��A�̧�̻�����
		for (int j = 0; j < Vert_B.size(); j++) {
			for (int k = 0; k < Vert_A.size(); k++) {
				if (Vert_A[k] == -1)
					continue;
				if (minimize == -1 ||(minimize > map[Vert_B[j]][Vert_A[k]])) {
					minimize = map[Vert_B[j]][Vert_A[k]];
					minW_xy[0] = Vert_B[j];		//�q
					minW_xy[1] = Vert_A[k];		//�q
				}
			}
		}
		Vert_B.push_back(minW_xy[1]);
		Vert_A[minW_xy[0]] = -1;
		Edge temp;
		temp.A = minW_xy[0];
		temp.B = minW_xy[1];
		temp.C = map[minW_xy[0]][minW_xy[1]];
		sum += map[minW_xy[0]][minW_xy[1]];
		Ans.push_back(temp);
	}

	/*
	�ҨD�A�ھں�X������
	[ t*X + C(i,j)/t ] >= 2* [t * X*C(i,j)/t]^(1/2) = 2* [X*C(i,j)]^(1/2)
	�������߮� t*X = C(i,j)/t
	�ҥH t = [C(i,j)/X]^(1/2)
	*/
	cout << sqrt(sum / X) << endl << Ans.size()<<endl;

	for (int i = 0; i < Ans.size(); i++) {
		cout << Vertex[Ans[i].A] << " " << Vertex[Ans[i].B] << endl;
	}

	/*
	**��X����:**
	�Ĥ@��@�Ӿ��t>>��ꪺ�]�k�]�Ƶ���t�C
	�ĤG��@�Ӿ��m>>�`�@�سy���ǰe���ƥ�m�C
	���U��m��C�@��]�t��ӼƦri, j�A��ܭn�b�q��i�Pj�����إ߶ǰe��
	*/

	delete[] map;

	system("pause");
	return 0;
}


int find(vector<int> vec, int target) {
	vector<int>::iterator begin = vec.begin();
	vector<int>::iterator end = vec.end();
	vector<int>::iterator it;
	for (it = begin; it != end; it++) {
		if (*it == target)
			return it- begin;
	}
	return -1;
}