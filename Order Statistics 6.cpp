#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void tim(int a[],int n){
	int max=-5,temp;
	for(int i=0;i<n;++i){
		for(int j=n-1;j>=i;--j){
			if(a[i]<=a[j]){
				temp=j-i;
				break;
			}
		}
		if(max<temp){
			max=temp;
		}
	}
	cout<<max<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[n];
		nhap(a,n);
		tim(a,n);
		--t;
	}
	return 0;
}
