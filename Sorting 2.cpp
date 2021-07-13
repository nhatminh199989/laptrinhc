#include<bits/stdc++.h>

using namespace std;
struct meta{
	int value,index,j;
};
bool cmp(meta a,meta b){
	if(a.index<b.index){
		return true;
	}
	if(a.index==b.index&&a.j<b.j){
		return true;
	}
	return false;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,x;
		cin>>n>>x;
		meta a[n];
		for(int i=0;i<n;++i){
			cin>>a[i].value;
			a[i].index=abs(x-a[i].value);
			a[i].j=i;
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;++i){
			cout<<a[i].value<<" ";
		}
		cout<<endl;
		--t;
	}
	return 0;
}
