#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void tim(int a[],int n,int k){
	int sum=-100000,c,d;
	for(int i=0;i<n-k+1;++i){
		int sum1=0;
		for(int j=i;j<i+k;++j){
			sum1+=a[j];
		}
		if(sum<sum1){
			sum=sum1;
			c=i;
			d=i+k-1;
		}
	}
	for(int i=c;i<=d;++i){
		cout<<a[i]<<" ";
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,k;
		cin>>n>>k;
		int a[n];
		nhap(a,n);
		tim(a,n,k);
		cout<<endl;
		--t;
	}
	return 0;
}
