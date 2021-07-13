#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void summax(int a[],int n){
	int b[n];
	long long sum=0;
	for(int i=0;i<n;++i){
		b[i]=a[i];
		for(int j=0;j<i;++j){
			if(a[i]>a[j]){
				b[i]=fmax(b[i],b[j]+a[i]);
			}
		}
		sum=fmax(sum,b[i]);
	}
	cout<<sum<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[n];
		nhap(a,n);
		summax(a,n);
		--t;
	}
	return 0;
}
