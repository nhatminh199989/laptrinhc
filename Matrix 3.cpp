#include<bits/stdc++.h>

using namespace std;
void nhap(int a[][100],int n,int m){
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin>>a[i][j];
		}
	}
}
void xoay(int a[][100],int n,int m){
	int h=0,c=0;
	while(h<n&&c<m){
		for(int i=c;i<m;++i){
			cout<<a[h][i]<<" ";
		}
		++h;
		for(int i=h;i<n;++i){
			cout<<a[i][m-1]<<" ";
		}
		--m;
		if(h<n){
			for(int i=m-1;i>=c;--i){
				cout<<a[n-1][i]<<" ";
			}
			--n;
		}
		if(c<m){
			for(int i=n-1;i>=h;--i){
				cout<<a[i][c]<<" ";
			}
			++c;
		}
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,m;
		cin>>n>>m;
		int a[100][100];
		nhap(a,n,m);
		xoay(a,n,m);
		cout<<endl;
		--t;
	}
	return 0;
}
