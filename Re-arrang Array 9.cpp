#include<bits/stdc++.h>

using namespace std;
void nhap(int a[100000],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void xuat(int a[100000],int b[100000],int n){
	b[0]=a[0]*a[1];
	b[n-1]=a[n-1]*a[n-2];
	for(int i=1;i<n-1;++i){
		b[i]=a[i-1]*a[i+1];
	}
	for(int i=0;i<n;++i){
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		int *a=new int[100000];
		int *b=new int[100000];
		cin>>n;
		nhap(a,n);
		xuat(a,b,n);
		delete[]a;
		delete[]b;
		--t;
	}
	return 0;
}
