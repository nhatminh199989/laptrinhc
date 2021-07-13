#include<bits/stdc++.h>

using namespace std;
#define N 10000008
int a[N],b[N];
void nhap(int a[],int b[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
		b[i]=a[i];
	}
}
void tim(int a[],int b[],int n){
	int c,d;
	sort(b,b+n);
	for(int i=0;i<n;++i){
		if(a[i]!=b[i]){
			c=i+1;
			break;
		}
	}
	for(int i=n-1;i>=0;--i){
		if(a[i]!=b[i]){
			d=i+1;
			break;
		}
	}
	cout<<c<<" "<<d<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		nhap(a,b,n);
		tim(a,b,n);
		--t;
	}
	return 0;
}
