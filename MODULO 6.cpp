#include<bits/stdc++.h>

using namespace std;
#define ll long
ll modulo(string a,ll m){
	ll sum=0;
	for(int i=0;i<a.size();++i){
		sum=(sum*10+(a[i]-'0'))%m;
	}
	return sum;
}
void tinh(ll temp,ll b,ll m){
	ll res=1;
	while(b>0){
		if(b%2!=0){
			res=(res*temp)%m;
		}
		b/=2;
		temp=(temp*temp)%m;
	}
	cout<<res<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string a;
		ll b,m,temp;
		cin>>a>>b>>m;
		temp=modulo(a,m);
		tinh(temp,b,m);
		--t;
	}
	return 0;
}
