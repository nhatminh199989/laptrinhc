#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void xep(int a[],int n){
	int b[n],j=0;
	for(int i=0;i<n;i+=2){
		b[i]=a[j++];
	}
	for(int i=1;i<n;i+=2){
		b[i]=a[j++];
	}
	for(int i=0;i<j;++i){
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[n];
		nhap(a,n);
		sort(a,a+n);
		xep(a,n);
		--t;
	}
	return 0;
}
