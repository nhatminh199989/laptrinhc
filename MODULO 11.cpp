#include<bits/stdc++.h>

using namespace std;
#define ll long long
ll modulo(ll a,ll b,ll c){
	if(b==0){
		return 0;
	}
	ll temp=modulo(a,b/2,c);
	if(b%2==0){
		return ((temp%c)+(temp%c))%c;
	}
	else{
		return ((temp%c)+(temp%c)+a%c)%c;
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		ll a,b,c;
		cin>>a>>b>>c;
		cout<<modulo(a,b,c)<<endl;
		--t;
	}
	return 0;
}
