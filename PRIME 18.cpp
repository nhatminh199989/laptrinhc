#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		int m,n,count=0;
		short a,b;
		cin>>m>>n>>a>>b;
		if(m>n){
			swap(m,n);
		}
		for(int i=m;i<=n;++i){
			if(i%a==0||i%b==0){
				++count;
			}
		}
		cout<<count<<endl;
		--t;
	}
	return 0;
}
