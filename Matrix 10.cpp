#include<bits/stdc++.h>

using namespace std;
void nhap(int a[100][100],int n,int m){
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin>>a[i][j];
		}
	}
}
void doi(int a[100][100],int b[100][100],int n,int m){
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(a[i][j]==1){
				for(int k=0;k<n;++k){
					b[k][j]=1;
				}
				for(int k=0;k<m;++k){
					b[i][k]=1;
				}
			}
		}
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int a[100][100],b[100][100],n,m;
		cin>>n>>m;
		nhap(a,n,m);
		doi(a,b,n,m);
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		--t;
	}
	return 0;
}
