#include<bits/stdc++.h>

using namespace std;
bool Prime(int count){
	if(count<2){
		return 0;
	}
	for(int i=2;i<=sqrt(count);++i){
		if(count%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		long long n;
		int count=0;
		cin>>n;
		for(long long i=1;i<=n;++i){
			if(__gcd(i,n)==1){
				++count;
			}
		}
		if(Prime(count)==1){
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
