#include<bits/stdc++.h>

using namespace std;
void nhap(int a[150][150],int n){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>a[i][j];
		}
	}
}
void xuat(int a[150][150],int n){
	int j;
	for(int i=0;i<n;++i){
		if(i%2==0){
			j=0;
			for(j;j<n;++j){
				cout<<a[i][j]<<" ";
			}
		}
		else{
			j=n-1;
			for(j;j>=0;--j){
				cout<<a[i][j]<<" ";
			}
		}
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,a[150][150];
		cin>>n;
		nhap(a,n);
		xuat(a,n);
		cout<<endl;
		--t;
	}
	return 0;
}
