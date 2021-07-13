#include<bits/stdc++.h>

using namespace std;
int NT(int i){
	int count=0;
	for(int j=2;j<=sqrt(i);++j){
		if(i%j==0){
			++count;
		}
	}
	if(count==0){
		return 1;
	}
	return 0;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		for(int i=2;i<=n;++i){
			if(NT(i)==1){
				cout<<i<<" ";
			}
		}
		cout<<endl;
		--t;
	}
	return 0;
}
