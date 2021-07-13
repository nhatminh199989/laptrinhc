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
	else{
		return 0;
	}
}
int main(){
	int t;
	cin>>t;
	while(t>0){
		int n,m;
		cin>>m>>n;
		if(m>n){
			swap(m,n);
		}
		if(m==1){
			m+=1;
		}
		for(int i=m;i<=n;++i){
			if(NT(i)==1){
				cout<<i<<" ";
			}
		}
		cout<<endl;
		--t;
	}
	return 0;
}
