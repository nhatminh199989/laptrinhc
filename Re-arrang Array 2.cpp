#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		long long n,temp,a=0;
		cin>>n;
		for(int i=0;i<n;++i){
			cin>>temp;
			if(temp!=0){
				cout<<temp<<" ";
			}
			else{
				++a;
			}
		}
		for(int i=0;i<a;++i){
			cout<<"0"<<" ";
		}
		cout<<endl;
		--t;
	}
	return 0;
}
