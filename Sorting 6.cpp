#include<bits/stdc++.h>

using namespace std;
void nhap(int a[1000000],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int *a=new int[1000000];
		int n;
		cin>>n;
		nhap(a,n);
		sort(a,a+n);
		for(int i=0;i<n;++i){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		delete[]a;
		--t;
	}
	return 0;
}
