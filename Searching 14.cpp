#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void tim(int a[],int n){
	int temp=1000000,b;
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(a[j]==a[i]){
				if(j<temp){
					temp=j;
				}
			}
		}
	}
	if(temp==1000000){
		cout<<"-1";
	}
	else{
		cout<<a[temp];
	}
	cout<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[n+5];
		nhap(a,n);
		tim(a,n);
		--t;
	}
	return 0;
}
