#include<bits/stdc++.h>

using namespace std;
void count(int n,int p){
	int dem=0;
	for(int i=2;i<=n;++i){
		if(i%p==0){
			int j=i;
			while(j%p==0){
				++dem;
				j/=p;
			}
		}
	}
	cout<<dem<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,p;
		cin>>n>>p;
		count(n,p);
		--t;
	}
	return 0;
}
