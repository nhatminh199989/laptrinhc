#include<bits/stdc++.h>

using namespace std;
const long long N=1e9+7;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
int gcd(int a[],int n){
	int max=a[0];
	while(1){
		int count=0;
		for(int i=0;i<n;++i){
			if(a[i]%max==0){
				++count;
			}
			else{
				--max;
				break;
			}
		}
		if(count==n){
			return max;
		}
	}
}
void tinh(int a[],int n,int b){
	long long temp=1;
	for(int i=0;i<n;++i){
		for(int j=0;j<b;++j){
			temp=(temp*a[i])%N;
		}
	}
	cout<<temp<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[n];
		nhap(a,n);
		sort(a,a+n);
		int b=gcd(a,n);
		tinh(a,n,b);
		--t;
	}
	return 0;
}
