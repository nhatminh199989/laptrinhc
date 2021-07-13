#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		long long n;
		int sum=10;
		cin>>n;
		while(sum>=10){
			sum=0;
			while(n>0){
				sum+=n%10;
				n/=10;
			}
			n=sum;
		}
		cout<<sum<<endl;
		--t;
	}
	return 0;
}
