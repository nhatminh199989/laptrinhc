#include<bits/stdc++.h>

using namespace std;
#define ll long long
const long long N=1e9+7;
void find(int a[],int n){
	a[0]=0;
	a[1]=1;
	int i=2;
	ll f0=0,f1=1,fn;
	while(i<=n){
		fn=(f0+f1)%N;
		a[i++]=fn;
		f0=f1;
		f1=fn;
	}
	cout<<a[n]<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[n+5];
		find(a,n);
		--t;
	}
	return 0;
}
