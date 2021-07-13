#include<bits/stdc++.h>

using namespace std;
#define ll long long
void handless(int n,int m){
	ll x=(n-m)/2;
	ll y=m+x;
	if((n-m)%2!=0){
		cout<<"No";
	}
	else{
		if(__gcd(x,y)==1){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
	}
	cout<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		ll n,m;
		cin>>n>>m;
		n=(n*(n+1))/2;
		handless(n,m);
		--t;
	}
	return 0;
}

