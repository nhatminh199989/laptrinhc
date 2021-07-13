#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		long long n;
		cin>>n;
		int c=n%100;
		if(c==86){
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
