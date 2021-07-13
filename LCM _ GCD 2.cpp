#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		long long c=1;
		for(long long i=1;i<=n;++i){
			c=(c*i)/__gcd(c,i);
		}
		cout<<c<<endl;
		--t;
	}
	return 0;
}
