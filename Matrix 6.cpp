#include<iostream>

using namespace std;
void nhap(int a[150][150],int n){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>a[i][j];
		}
	}
}
void xuat(int a[150][150],int n){
	for(int j=0;j<n;++j){
		cout<<a[0][j]<<" ";
	}
	cout<<endl;
	for(int i=1;i<n-1;++i){
		for(int j=0;j<n;++j){
			if(j==0||j==n-1){
				cout<<a[i][j]<<" ";
			}
			else{
				cout<<" "<<" ";
			}
		}
		cout<<endl;
	}
	for(int j=0;j<n;++j){
		cout<<a[n-1][j]<<" ";
	}
	cout<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int a[150][150],n;
		cin>>n;
		nhap(a,n);
		xuat(a,n);
		--t;
	}
	return 0;
}
