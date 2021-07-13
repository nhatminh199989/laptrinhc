#include<bits/stdc++.h>

using namespace std;
void nhap(int a[][100],int n,int m){
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin>>a[i][j];
		}
	}
}
void tim(int a[][100],int n,int m){
	int count=0;
	for(int j=0;j<m;++j){
		int temp=0;
		for(int i=0;i<n;++i){
			if(a[i][j]==1){
				++temp;
			}
		}
		if(temp==n){
			++count;
		}
	}
	cout<<count*n<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,m;
		cin>>n>>m;
		int a[100][100];
		nhap(a,n,m);
		tim(a,n,m);
		--t;
	}
	return 0;
}

