#include<bits/stdc++.h>

using namespace std;
struct arr{
	int value,count;
};
bool cmp(arr a,arr b){
	if(a.count>b.count){
		return true;
	}
	if(a.count==b.count&&a.value<b.value){
		return true;
	}
	return false;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		arr a[n];
		int temp[100005]={0};
		for(int i=0;i<n;++i){
			cin>>a[i].value;
			temp[a[i].value]+=1;
		}
		for(int i=0;i<n;++i){
			a[i].count=temp[a[i].value];
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

