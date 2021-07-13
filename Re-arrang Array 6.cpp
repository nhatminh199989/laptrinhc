#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void meta(int a[],int n){
	for(int i=0;i<n-1;++i){
		if(a[i]!=0&&a[i]==a[i+1]){
			a[i]*=2;
			a[i+1]=0;
		}
	}
	int dem=0;
	for(int i=0;i<n;++i){
		if(a[i]!=0){
			cout<<a[i]<<" ";
		}
		else{
			++dem;
		}
	}
	for(int i=1;i<=dem;++i){
		cout<<"0"<<" ";
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
		meta(a,n);
		--t;
	}
	return 0;
}
