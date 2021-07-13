#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		long long a,b;
		cin>>a>>b;
		long long c=__gcd(a,b);
		cout<<(a*b)/c<<" "<<c<<endl;
		--t;
	}
	return 0;
}
