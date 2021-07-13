#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void dem(int a[],int n,int k){
	int count=0;
	for(int i=0;i<n-1;++i){
		int b=a[i]+k;
		for(int j=i+1;j<n;++j){
			if(b>a[j]){
				++count;
			}
			else{
				break;
			}
		}
	}
	cout<<count<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,k;
		cin>>n>>k;
		int a[n];
		nhap(a,n);
		sort(a,a+n);
		dem(a,n,k);
		--t;
	}
	return 0;
}
