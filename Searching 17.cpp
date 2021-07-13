#include<bits/stdc++.h>

using namespace std;
#define N 1000000
void nhap(int a[N],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,k;
		int *a=new int[N];
		cin>>n>>k;
		if(k>n){
			swap(n,k);
		}
		nhap(a,n);
		sort(a,a+n);
		cout<<a[k-1]<<endl;
		delete[]a;
		--t;
	}
	return 0;
}
