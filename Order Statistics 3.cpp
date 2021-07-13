#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n,int k){
	for(int i=0;i<n*n;++i){
		cin>>a[i];
	}
	sort(a,a+n*n);
	cout<<a[k-1]<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,k;
		cin>>n>>k;
		int a[n*n];
		nhap(a,n,k);
		--t;
	}
	return 0;
}
