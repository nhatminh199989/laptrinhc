#include<bits/stdc++.h>

using namespace std;
void nhap(int a[100],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
int main(){
	int t;
	cin>>t;
	while(t>0){
		int n,k;
		int *a=new int[100000];
		cin>>n>>k;
		nhap(a,n);
		sort(a,a+n);
		cout<<a[k-1]<<endl;
		--t;
	}
	return 0;
}
