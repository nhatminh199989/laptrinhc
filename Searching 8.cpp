#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,k,count=0,temp;
		cin>>n>>k;
		for(int i=1;i<=n;++i){
			cin>>temp;
			if(temp==k){
				++count;
			}
		}
		if(count==0){
			cout<<"-1";
		}
		else{
			cout<<count;
		}
		cout<<endl;
		--t;
	}
	return 0;
}
