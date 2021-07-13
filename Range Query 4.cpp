#include<bits/stdc++.h>

using namespace std;
int a[1000005];
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void tong(int a[],int n){
	long long sum=0,res=a[0];
	for(int i=0;i<n;++i){
		sum+=a[i];
		if(sum<0){
			sum=0;
			continue;
		}
		res=fmax(res,sum);
	}
	cout<<res<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		nhap(a,n);
		tong(a,n);
		--t;
	}
	return 0;
}
