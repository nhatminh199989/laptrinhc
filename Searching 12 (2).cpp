#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,x,temp,check=0;
		cin>>n>>x;
		set<int>s;
		for(int i=0;i<n;++i){
			cin>>temp;
			s.insert(temp);
			if(s.count(temp-x)==1){
				check=1;
			}
		}
		if(check==1){
			cout<<"1";
		}
		else{
			cout<<"-1";
		}
		cout<<endl;
		--t;
	}
	return 0;
}
