#include<bits/stdc++.h>

using namespace std;
void nhap(int a[1000],short n){
	for(short i=0;i<n;++i){
		cin>>a[i];
	}
}
void dem(int a[1000],short n,short k){
	int count=0;
	for(short i=0;i<n-1;++i){
		for(short j=i+1;j<n;++j){
			if(a[i]+a[j]==k){
				++count;
			}
		}
	}
	if(count==0){
		cout<<"0"<<endl;
	}
	else{
		cout<<count<<endl;
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		short n,k;
		int *a=new int[1000];
		cin>>n>>k;
		nhap(a,n);
		dem(a,n,k);
		delete[]a;
		--t;
	}
	return 0;
}
