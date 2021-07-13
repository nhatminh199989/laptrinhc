#include<bits/stdc++.h>

using namespace std;
bool NT(int i){
	for(int j=2;j<=sqrt(i);++j){
		if(i%j==0){
			return false;
		}
	}
	return true;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		for(int i=2;i*i<=n;++i){
			if(NT(i)==true){
				cout<<i*i<<" ";
			}
		}
		cout<<endl;
		--t;
	}
	return 0;
}
