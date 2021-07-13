#include<bits/stdc++.h>

using namespace std;
#define N 100000
int a[N],b[N];
void nhap(int c[N],int x){
	for(int i=0;i<x;++i){
		cin>>c[i];
	}
}
void find(int a[N],int b[N],int n,int m){
	int i=0,j=0,h=0;;
	vector<long>d;
	while(i<n&&j<m){
		if(a[i]<b[j]){
			cout<<a[i++]<<" ";
		}
		else if(a[i]>b[j]){
			cout<<b[j++]<<" ";
		}
		else{
			d.push_back(a[i]);
			++h;
			cout<<a[i++]<<" ";
			++j;
		}
	}
	while(i<n){
		cout<<a[i++]<<" ";
	}
	while(j<m){
		cout<<b[j++]<<" ";
	}
	cout<<endl;
	for(int g=0;g<h;++g){
		cout<<d[g]<<" ";
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,m;
		cin>>n>>m;
		nhap(a,n);
		nhap(b,m);
		sort(a,a+n);
		sort(b,b+m);
		find(a,b,n,m);
		cout<<endl;
		--t;
	}
	return 0;
}
