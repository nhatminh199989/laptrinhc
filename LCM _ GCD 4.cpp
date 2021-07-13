#include<bits/stdc++.h>

using namespace std;
long long bModa(long long a,string b){
	long long d=0;
	for(int i=0;i<b.size();++i){
		d=(d*10+(b[i]-'0'))%a;
	}
	return d;
}
long long gcd(long long a,string b){
	long long c=bModa(a,b);
	return __gcd(a,c);
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		long long a;
		string b;
		cin>>a>>b;
		if(a==0){
			cout<<b;
		}
		else{
			cout<<gcd(a,b);
		}
		cout<<endl;
		--t;
	}
	return 0;
}
