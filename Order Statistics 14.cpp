#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		vector<long>a;
		vector<long>b;
		for(int i=0;i<n;++i){
			int x;
			cin>>x;
			a.push_back(x);
			b.push_back(x);
		}
		vector<long>::iterator it;
		sort(b.begin(),b.end());
		for(int i=0;i<n;++i){
			it=upper_bound(b.begin(),b.end(),a[i]);
			if(it==b.end()){
				cout<<"_"<<" ";
			}
			else{
				cout<<*it<<" ";
			}
		}
		cout<<endl;
		--t;
	}
	return 0;
}
