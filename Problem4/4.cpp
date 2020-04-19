#include<iostream>

using namespace std;

int matrix[100][100];	//adjacency matrix

void max(int v){
	int maxnum=0;
	int count[v]={0};
	for(int a=0;a<v;a++){
		for(int b=0;b<v;b++)
		if(matrix[a][b]==1){
			count[a]++;
		}
	}
	for(int i=0;i<v;i++){
		if(count[i]>maxnum){
			maxnum=count[i];
		}
	}
	cout<<maxnum<<endl;
}

void add_edge(int x,int y){   
	matrix[x][y] = 1;
	matrix[y][x] = 1;
}

int main(){
	int v,e; //vertex,edge
	cin>>v>>e;
	int a[e],b[e];
	for(int i=0;i<e;i++){
		cin>>a[i]>>b[i];
	}
	for(int j=0;j<e;j++){
		add_edge(a[j],b[j]);
	}
	max(v);
	
	return 0;
} 
