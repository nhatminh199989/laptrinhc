#include<bits/stdc++.h>

using namespace std;
void nhap(long a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void xuat(long a[],int n){
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,m;
		cin>>n>>m;
		n+=m;
		long a[n];
		nhap(a,n);
		sort(a,a+n);
		xuat(a,n);
		cout<<endl;
		--t;
	}
	return 0;
}
