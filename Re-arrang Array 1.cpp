#include<bits/stdc++.h>

using namespace std;
void nhap1(long long a[1000000],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void nhap2(long long b[1000000],int n){
	for(int i=0;i<n;++i){
		b[i]=-1;
	}
}
void xuat(long long a[1000000],long long b[1000000],int n){
	for(int i=0;i<n;++i){
		if(a[i]>=0&&a[i]<n){
			int c=a[i];
			b[c]=c;
		}
	}
	for(int i=0;i<n;++i){
		cout<<b[i]<<" ";
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		long long *a=new long long[1000000];
		long long *b=new long long[1000000];
		cin>>n;
		nhap1(a,n);
		nhap2(b,n);
		xuat(a,b,n);
		cout<<endl;
		delete[]a;
		delete[]b;
		--t;
	}
	return 0;
}
