#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void tim(int a[],int n){
	int b[n];
	for(int i=0;i<n;++i){
		b[i]=1;
		for(int j=i-1;j>=0;--j){
			if(a[i]>a[j]){
				b[i]=fmax(b[i],b[j]+1);
			}
		}
	}
	int max=0;
	for(int i=0;i<n;++i){
		if(b[i]>max){
			max=b[i];
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
