#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void xep(int a[],int n){
	int i=0,j=n-1;
	while(i<j){
		cout<<a[j--]<<" "<<a[i++]<<" ";
		if(i==j){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[n+5];
		nhap(a,n);
		sort(a,a+n);
		xep(a,n);
		--t;
	}
	return 0;
}
