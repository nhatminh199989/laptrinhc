#include<bits/stdc++.h>

using namespace std;
void nhap(int a[200],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void find(int a[200],int n){
	long long maxmax=a[0];
	for(int i=0;i<n;++i){
		long long max=a[i];
		for(int j=i+1;j<n;++j){
			max*=a[j];
			if(max>maxmax){
				maxmax=max;
			}
		}
	}
	cout<<maxmax<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[200];
		nhap(a,n);
		find(a,n);
		--t;
	}
	return 0;
}
