#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void tim(int a[],int n){
	for(int i=0;i<n-1;++i){
		if(a[i]+1!=a[i+1]){
			cout<<a[i]+1<<endl;
			break;
		}
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		n-=1;
		int a[n];
		nhap(a,n);
		tim(a,n);
		--t;
	}
	return 0;
}
