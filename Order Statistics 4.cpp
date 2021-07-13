#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void max(int a[],int n){
	long long b[n];
	b[0]=a[0];
	b[1]=fmax(a[0],a[1]);
	for(int i=2;i<n;++i){
		b[i]=fmax(a[i]+b[i-2],b[i-1]);
	}
	cout<<b[n-1]<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[n];
		nhap(a,n);
		max(a,n);
		--t;
	}
	return 0;
}
