#include<bits/stdc++.h>

using namespace std;
int find(int i){
	int j=3;
	while(i>1){
		if(i%j==0){
			return j;
		}
		else{
			++j;
		}
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		for(int i=1;i<=n;++i){
			if(i==1){
				cout<<"1"<<" ";
			}
			else if(i%2==0){
				cout<<"2"<<" ";
			}
			else if(i%2!=0){
				cout<<find(i)<<" ";
			}
		}
		cout<<endl;
		--t;
	}
	return 0;
}
