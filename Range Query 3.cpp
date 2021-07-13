#include<bits/stdc++.h>

using namespace std;
int NT(int i){
	for(int j=2;j<=sqrt(i);++j){
		if(i%j==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,m,s=0;
		cin>>n>>m;
		if(n>m){
			swap(n,m);
		}
		if(n==1){
			n+=1;
		}
		for(int i=n;i<=m;++i){
			if(NT(i)==1){
				++s;
			}
		}
		cout<<s<<endl;
		--t;
	}
	return 0;
}
