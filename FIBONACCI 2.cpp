#include<bits/stdc++.h>

#define ll long long
using namespace std;
void check(ll n){
	ll s0=0,s1=1,sn=0;
	while(sn<n){
		sn=s0+s1;
		s0=s1;
		s1=sn;
	}
	if(sn==n){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	cout<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		ll n;
		cin>>n;
		check(n);
		--t;
	}
	return 0;
}
