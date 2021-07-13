#include<bits/stdc++.h>

using namespace std;
void nhap(int a[1000000],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
int tim(int a[1000000],int n){
	int min=a[1]-a[0];
	for(int i=1;i<n-1;++i){
		if((a[i+1]-a[i])<min){
			min=a[i+1]-a[i];
		}
	}
	return min;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		int *a=new int[1000000];
		cin>>n;
		nhap(a,n);
		sort(a,a+n);
		cout<<tim(a,n)<<endl;
		delete[]a;
		--t;
	}
	return 0;
}
