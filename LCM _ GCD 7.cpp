#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		long long x,y,z,n=1,m,tem;
		cin>>x>>y>>z>>m;
		for(int i=1;i<m;++i){
			n*=10;
		}
		tem=(x*y)/__gcd(x,y);
		tem=(tem*z)/__gcd(tem,z);
		if(tem>n&&tem<n*10){
			cout<<tem;
		}
		else if(tem<=n){
			if(n%tem!=0){
				long long b=n/tem;
				b+=1;
				cout<<b*tem;
			}
			else{
				cout<<tem*(n/tem);
			}
		}
		else if(tem>=n*10){
			cout<<"-1";
		}
		cout<<endl;
		--t;
	}
	return 0;
}
