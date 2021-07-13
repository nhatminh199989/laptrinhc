#include<bits/stdc++.h>

using namespace std;
bool prime(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int sumofn(int n){
	int sum=0,i;
	while(n>0){
		i=n%10;
		sum+=i;
		n/=10;
	}
	return sum;
}
int NT(int n){
	int sum=0;
	for(int i=2;i<=sqrt(n);++i){
		while(n%i==0){
			sum+=sumofn(i);
			n/=i;
		}
	}
	if(n>1){
		sum+=sumofn(n);
	}
	return sum;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		if(prime(n)==false&&sumofn(n)==NT(n)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		--t;
	}
	return 0;
}
