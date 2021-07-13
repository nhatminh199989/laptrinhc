#include<bits/stdc++.h>

using namespace std;
void nhap(int c[],int p){
	for(long long i=0;i<p;++i){
		cin>>c[i];
	}
}
void lk(int a[],int b[],int n,int m){
	int x=a[0]-1;
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			if(b[i]==a[j]){
				cout<<a[j]<<" ";
				a[j]=x;
			}
			if(a[j]>b[i]){
				break;
			}
		}
	}
	for(int i=0;i<n;++i){
		if(a[i]!=x){
			cout<<a[i]<<" ";
		}
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		nhap(a,n);
		sort(a,a+n);
		nhap(b,m);
		lk(a,b,n,m);
		cout<<endl;
		--t;
	}
	return 0;
}
