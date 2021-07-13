#include<bits/stdc++.h>

using namespace std;
#define ll long long
void calc(ll x,ll y,ll p){
	ll res=1;
	for(ll i=1;i<=y;++i){
		res*=x%p;
		res%=p;
	}
	cout<<res<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		ll x,y,p;
		cin>>x>>y>>p;
		calc(x,y,p);
		--t;
	}
	return 0;
}
