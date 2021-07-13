#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void tim(int a[],int n){
	int count=0;
	for(int i=1;i<=a[n-1]-a[0];++i){
		int b=a[0]%i;
		int c=0;
		for(int j=0;j<n;++j){
			if(a[j]%i==b){
				++c;
			}
			else{
				break;
			}
		}
		if(c==n){
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
		int a[n];
		nhap(a,n);
		sort(a,a+n);
		tim(a,n);
		--t;
	}
	return 0;
}
