#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,s=0;
		long long k;
		cin>>n>>k;
		for(int i=1;i<=n;++i){
			s+=(i%k)%k;
		}
		if(s==k){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		cout<<endl;
		--t;
	}
	return 0;
}
