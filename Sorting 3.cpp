#include<bits/stdc++.h>

using namespace std;
struct var{
	int value,position;
};
void nhap(var a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i].value;
		a[i].position=i;
	}
}
bool tmp(var a,var b){
	if(a.value<b.value){
		return true;
	}
	if(a.value==b.value&&a.position<b.position){
		return true;
	}
	return false;
}
void xuat(var a[],int n){
	int count=0;
	for(int i=0;i<n;++i){
		while(a[i].position!=i){
			swap(a[i],a[a[i].position]);
			++count;
		}
	}
	cout<<count<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		var a[n];
		nhap(a,n);
		sort(a,a+n,tmp);
		xuat(a,n);
		--t;
	}
	return 0;
}

