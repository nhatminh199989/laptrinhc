#include<bits/stdc++.h>

using namespace std;
void nhap(int a[100000],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void dem(int a[100000],int n){
	int count=0,b;
	for(int i=0;i<n-1;++i){
		if(a[i+1]-a[i]>1){
			b=a[i+1]-a[i]-1;
			count+=b;
		}
	}
	cout<<count<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int *a=new int[100000];
		int n;
		cin>>n;
		nhap(a,n);
		sort(a,a+n);
		dem(a,n);
		delete[]a;
		--t;
	}
	return 0;
}
